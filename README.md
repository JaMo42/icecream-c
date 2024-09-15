# icecream-c

A single-header C/C++ printf-debugging library similar to the [icecream](https://github.com/gruns/icecream) python library.

Requires GNU extensions, tested to work with gcc, clang, tcc, g++, and clang++.

Requires C++11 or newer for `auto`.
Requires C11 or newer for `_Generic`, however you can probably use a lower version and your compiler will still support it (gcc and clang can use `-std=c89`).

## Documentation

Note: the macros taking variadic arguments support up to 64 values.

```
IC (...)
```

Prints the values of the given expressions, evaluating to the last expression (`IC (1, 2, 3)` is equivalent to `(1, 2, 3)`).
Expressions are printed in the form `expr: value`, macros inside the expression are expanded.
Each expression is evaluated exactly once.

Example:

```c
#define ONE 1
int a = 12;
float b = 3.141;
const char *c = "Hello World";

IC (a+ONE, b, c)
```

Prints:

```
ic| a+1: 13, b: 3.141000, c: "Hello World"
```

---

```
IC_ARGS (...)
```

Similar to `IC` but `IC_ARGS (1, 2, 3)` is equivalent to `1, 2, 3` (no parentheses), so this can be used for things like function calls.
Do note however that function argument evaluation order is undefined so it may result in broken output (tested to work with clang/clang++ and tcc, but not with gcc/g++).
Will also print a compile-time warning if used in GCC.

---

```
IC_HERE ()
IC_HERE ("message")
IC_HERE ("format %d", 123)
```

Prints the current location in the form `file.c:123 in "pretty_function_name"` or `file.c:123 in "pretty_function_name": <message>`.

---

```
IC_PERROR (what)
```

Prints an error message in the form `file.c:123 in function_name: <what>: <description>`.
The error description is generated using `strerror (errno)`.
If `errno` is 0 nothing is printed.

---

```
#define IC_STREAM <FILE *>
```

This can be defined to before including `ic.h` to specify the output stream (defaults to `stderr`).

### Supported types

These types are supported by default using the specified printf format specifiers.

Type | printf format specifier
---|---
`unsigned char` | `%hhu`
`unsigned short` | `%hu`
`unsigned` | `%u`
`unsigned long` | `%lu`
`unsigned long long` | `%llu`
`signed char` | `%hhd`
`short` | `%hd`
`int` | `%d`
`long` | `%ld`
`long long` | `%lld`
`float` | `%f`
`double` | `%lf`
`long double` | `%Lf`
`char` | like `'%c'` (see below)
`[const] char *` | like `"%s"` (see below)
`[const] void *` | `%p`
`_Bool` (`bool`) | Prints `true`/`false`

### Characters and strings

Unprintable characters (per `isprint`) are escaped:

Characters | Representation | Notes
---|---|---
`\n` `\r` `\t` `\v` `\f` `\a` `\b` `\0` | are printed the same way they are on the left
Any other character `isprint` returns 0 for | are printed as `\xHH` (for example 27 is `\x1B`) | For printing strings, characters with the 8th bit set are considered printable to preserve UTF-8 sequences.

### C++ types

`std::string` and `std::string_view` are printed in the same way as c-strings.

`std::vector`, `std::array`, static arrays, and `std::span` are printed like this: `{value, value, ..., value}`,
where the the values use the formats specified in this section.

`std::pair` and `std::tuple` are printed in the same way as the containers (tuples are only supported since C++17).

`std::optional` is printed as `None` or `Some(value)`.

The functions for these are only defined if their headers are already included when `icecream.h` is included.

### Custom types

In C:

```c
#define IC_CUSTOM_TYPES(x) \
  _Generic ((x), struct my_type: print_my_type)

void print_my_type (FILE *stream, struct my_type value);
```

`IC_CUSTOM_TYPES` has to be defined before including `ic.h`.

This macro also has to contain the `default` switch, if one is desired.

Defaults to `_Generic((x), default: ic_print_unknown)` if not defined by the user.
`ic_print_unknown` can take a parameter of any type and just prints a `?`.

---

In C++:

```cpp
void ic_print_function (FILE *stream, const my_type &value);
```

This uses overload resolution so it must not clash with any of the pre-defined types.

## Licensing

Choose between MIT or Public Domain (see bottom of `ic.h` for license notice).
