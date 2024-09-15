#ifndef IC_H
#define IC_H

#ifdef __cplusplus
#  include <cstdio>
#  include <cstdlib>
#  include <cerrno>
#  include <cstring>
#  include <cctype>
#  include <iterator> /* std::begin, std::end */
#else
#  include <stdio.h>
#  include <stdlib.h>
#  include <errno.h>
#  include <errno.h>
#  include <ctype.h>
#  include <stdbool.h>
#  include <string.h>
#endif

#ifdef __TINYC__
#define __PRETTY_FUNCTION__ __FUNCTION__
#endif

#ifndef IC_STREAM
#define IC_STREAM stderr
#endif

#define ic__str_impl(x) #x
#define ic__str(x) ic__str_impl (x)

#define ic__cat(a, b) a##b
#ifdef __cplusplus
#  define ic__decltype(x) auto
#else
#  define ic__decltype(x) __typeof__ (x)
#endif

#if defined (__STDC__) && !defined (__STDC_VERSION__)
#  define IC__FUNC __attribute__((unused)) static
#else
#  define IC__FUNC __attribute__((unused)) static inline
#endif

/**** "Recursive" macros stuff ****/

#ifdef __TINYC__
#  define ic__exprs_0(x) , ic__last_value (x)
#  define ic__exprs_1(x, ...) , ic__value (x) ic__exprs_0 (__VA_ARGS__)
#else
#  define ic__exprs_1(x) , ic__last_value (x)
#endif
#define ic__exprs_2(x, ...) , ic__value (x) ic__exprs_1 (__VA_ARGS__)
#define ic__exprs_3(x, ...) , ic__value (x) ic__exprs_2 (__VA_ARGS__)
#define ic__exprs_4(x, ...) , ic__value (x) ic__exprs_3 (__VA_ARGS__)
#define ic__exprs_5(x, ...) , ic__value (x) ic__exprs_4 (__VA_ARGS__)
#define ic__exprs_6(x, ...) , ic__value (x) ic__exprs_5 (__VA_ARGS__)
#define ic__exprs_7(x, ...) , ic__value (x) ic__exprs_6 (__VA_ARGS__)
#define ic__exprs_8(x, ...) , ic__value (x) ic__exprs_7 (__VA_ARGS__)
#define ic__exprs_9(x, ...) , ic__value (x) ic__exprs_8 (__VA_ARGS__)
#define ic__exprs_10(x, ...) , ic__value (x) ic__exprs_9 (__VA_ARGS__)
#define ic__exprs_11(x, ...) , ic__value (x) ic__exprs_10 (__VA_ARGS__)
#define ic__exprs_12(x, ...) , ic__value (x) ic__exprs_11 (__VA_ARGS__)
#define ic__exprs_13(x, ...) , ic__value (x) ic__exprs_12 (__VA_ARGS__)
#define ic__exprs_14(x, ...) , ic__value (x) ic__exprs_13 (__VA_ARGS__)
#define ic__exprs_15(x, ...) , ic__value (x) ic__exprs_14 (__VA_ARGS__)
#define ic__exprs_16(x, ...) , ic__value (x) ic__exprs_15 (__VA_ARGS__)
#define ic__exprs_17(x, ...) , ic__value (x) ic__exprs_16 (__VA_ARGS__)
#define ic__exprs_18(x, ...) , ic__value (x) ic__exprs_17 (__VA_ARGS__)
#define ic__exprs_19(x, ...) , ic__value (x) ic__exprs_18 (__VA_ARGS__)
#define ic__exprs_20(x, ...) , ic__value (x) ic__exprs_19 (__VA_ARGS__)
#define ic__exprs_21(x, ...) , ic__value (x) ic__exprs_20 (__VA_ARGS__)
#define ic__exprs_22(x, ...) , ic__value (x) ic__exprs_21 (__VA_ARGS__)
#define ic__exprs_23(x, ...) , ic__value (x) ic__exprs_22 (__VA_ARGS__)
#define ic__exprs_24(x, ...) , ic__value (x) ic__exprs_23 (__VA_ARGS__)
#define ic__exprs_25(x, ...) , ic__value (x) ic__exprs_24 (__VA_ARGS__)
#define ic__exprs_26(x, ...) , ic__value (x) ic__exprs_25 (__VA_ARGS__)
#define ic__exprs_27(x, ...) , ic__value (x) ic__exprs_26 (__VA_ARGS__)
#define ic__exprs_28(x, ...) , ic__value (x) ic__exprs_27 (__VA_ARGS__)
#define ic__exprs_29(x, ...) , ic__value (x) ic__exprs_28 (__VA_ARGS__)
#define ic__exprs_30(x, ...) , ic__value (x) ic__exprs_29 (__VA_ARGS__)
#define ic__exprs_31(x, ...) , ic__value (x) ic__exprs_30 (__VA_ARGS__)
#define ic__exprs_32(x, ...) , ic__value (x) ic__exprs_31 (__VA_ARGS__)
#define ic__exprs_33(x, ...) , ic__value (x) ic__exprs_32 (__VA_ARGS__)
#define ic__exprs_34(x, ...) , ic__value (x) ic__exprs_33 (__VA_ARGS__)
#define ic__exprs_35(x, ...) , ic__value (x) ic__exprs_34 (__VA_ARGS__)
#define ic__exprs_36(x, ...) , ic__value (x) ic__exprs_35 (__VA_ARGS__)
#define ic__exprs_37(x, ...) , ic__value (x) ic__exprs_36 (__VA_ARGS__)
#define ic__exprs_38(x, ...) , ic__value (x) ic__exprs_37 (__VA_ARGS__)
#define ic__exprs_39(x, ...) , ic__value (x) ic__exprs_38 (__VA_ARGS__)
#define ic__exprs_40(x, ...) , ic__value (x) ic__exprs_39 (__VA_ARGS__)
#define ic__exprs_41(x, ...) , ic__value (x) ic__exprs_40 (__VA_ARGS__)
#define ic__exprs_42(x, ...) , ic__value (x) ic__exprs_41 (__VA_ARGS__)
#define ic__exprs_43(x, ...) , ic__value (x) ic__exprs_42 (__VA_ARGS__)
#define ic__exprs_44(x, ...) , ic__value (x) ic__exprs_43 (__VA_ARGS__)
#define ic__exprs_45(x, ...) , ic__value (x) ic__exprs_44 (__VA_ARGS__)
#define ic__exprs_46(x, ...) , ic__value (x) ic__exprs_45 (__VA_ARGS__)
#define ic__exprs_47(x, ...) , ic__value (x) ic__exprs_46 (__VA_ARGS__)
#define ic__exprs_48(x, ...) , ic__value (x) ic__exprs_47 (__VA_ARGS__)
#define ic__exprs_49(x, ...) , ic__value (x) ic__exprs_48 (__VA_ARGS__)
#define ic__exprs_50(x, ...) , ic__value (x) ic__exprs_49 (__VA_ARGS__)
#define ic__exprs_51(x, ...) , ic__value (x) ic__exprs_50 (__VA_ARGS__)
#define ic__exprs_52(x, ...) , ic__value (x) ic__exprs_51 (__VA_ARGS__)
#define ic__exprs_53(x, ...) , ic__value (x) ic__exprs_52 (__VA_ARGS__)
#define ic__exprs_54(x, ...) , ic__value (x) ic__exprs_53 (__VA_ARGS__)
#define ic__exprs_55(x, ...) , ic__value (x) ic__exprs_54 (__VA_ARGS__)
#define ic__exprs_56(x, ...) , ic__value (x) ic__exprs_55 (__VA_ARGS__)
#define ic__exprs_57(x, ...) , ic__value (x) ic__exprs_56 (__VA_ARGS__)
#define ic__exprs_58(x, ...) , ic__value (x) ic__exprs_57 (__VA_ARGS__)
#define ic__exprs_59(x, ...) , ic__value (x) ic__exprs_58 (__VA_ARGS__)
#define ic__exprs_60(x, ...) , ic__value (x) ic__exprs_59 (__VA_ARGS__)
#define ic__exprs_61(x, ...) , ic__value (x) ic__exprs_60 (__VA_ARGS__)
#define ic__exprs_62(x, ...) , ic__value (x) ic__exprs_61 (__VA_ARGS__)
#define ic__exprs_63(x, ...) , ic__value (x) ic__exprs_62 (__VA_ARGS__)
#define ic__exprs_64(x, ...) , ic__value (x) ic__exprs_63 (__VA_ARGS__)

#define ic__arg_n( _1,  _2,  _3,  _4,  _5,  _6,  _7,  _8,  _9, _10, \
                  _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, \
                  _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, \
                  _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, \
                  _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, \
                  _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, \
                  _61, _62, _63, _64, N, ...) N

#define ic__rseq_n                     64, 63, 62, 61, 60, \
                   59, 58, 57, 56, 55, 54, 53, 52, 51, 50, \
                   49, 48, 47, 46, 45, 44, 43, 42, 41, 40, \
                   39, 38, 37, 36, 35, 34, 33, 32, 31, 30, \
                   29, 28, 27, 26, 25, 24, 23, 22, 21, 20, \
                   19, 18, 17, 16, 15, 14, 13, 12, 11, 10, \
                    9,  8,  7,  6,  5,  4,  3,  2,  1,  0

#define ic__narg_(...) ic__arg_n (__VA_ARGS__)
#define ic__narg(...) ic__narg_ (__VA_ARGS__ __VA_OPT__ (,) ic__rseq_n)
#define ic__exprs_(N, ...) ic__cat (ic__exprs_, N) (__VA_ARGS__)
#define ic__exprs(...) ic__exprs_ (ic__narg (__VA_ARGS__), __VA_ARGS__)

/**** Expression printing ****/

#ifdef __cplusplus
#  define ic__print_value(v) ic_print_function (IC_STREAM, (v))
#else /* __cplusplus */
#  ifndef IC_CUSTOM_TYPES
#    define IC_CUSTOM_TYPES(v) \
       _Generic((v), default: ic_print_unknown)
#    endif /* IC_CUSTOM_TYPES */

#  define ic__print_value(v)               \
    _Generic ((v),                         \
      unsigned char: ic__print_u8,         \
      signed char: ic__print_s8,           \
      unsigned short: ic__print_u16,       \
      signed short: ic__print_s16,         \
      unsigned: ic__print_u32,             \
      int: ic__print_s32,                  \
      unsigned long: ic__print_u64,        \
      long: ic__print_s64,                 \
      unsigned long long: ic__print_u64_2, \
      long long: ic__print_s64_2,          \
      float: ic__print_f32,                \
      double: ic__print_f64,               \
      long double: ic__print_f_l,          \
      char: ic__print_c,                   \
      char *: ic__print_str,               \
      const char *: ic__print_cstr,        \
      void *: ic__print_ptr,               \
      const void *: ic__print_cptr,        \
      _Bool: ic__print_bool,               \
      default: IC_CUSTOM_TYPES(v)          \
    ) (IC_STREAM, v)
#endif /* __cplusplus */

#define ic__value(expr) ({                              \
  ic__decltype (expr) ic__expr_value = (expr);          \
  fputs (IC_TEXT_COLOR ic__str (expr) ": ", IC_STREAM); \
  ic__print_value (ic__expr_value);                     \
  fputs (IC_TEXT_COLOR ", ", IC_STREAM);                \
  ic__expr_value;                                       \
})

#define ic__last_value(expr) ({                         \
  ic__decltype (expr) ic__expr_value = (expr);          \
  fputs (IC_TEXT_COLOR ic__str (expr) ": ", IC_STREAM); \
  ic__print_value (ic__expr_value);                     \
  fputs ("\x1b[0m\n", IC_STREAM);                       \
  ic__expr_value;                                       \
})

#define ic__begin ({                       \
  fputs (IC_TEXT_COLOR "ic| ", IC_STREAM); \
})

/**** Value printing ****/

#define IC_VALUE_COLOR "\x1b[36m"
#define IC_VALUE_SPECIAL_COLOR "\x1b[35m"
#define IC_TEXT_COLOR "\x1b[90m"

#ifdef __cplusplus
#  define ic_print_function(name_, type_, fmt_)                        \
    IC__FUNC void ic_print_function (std::FILE *stream, type_ value) { \
      std::fprintf (stream, IC_VALUE_COLOR fmt_, value);               \
    }
#else /* __cplusplus */
#  define ic_print_function(name_, type_, fmt_)                            \
    IC__FUNC void ic__cat(ic__print_, name_) (FILE *stream, type_ value) { \
      fprintf (stream, IC_VALUE_COLOR fmt_, value);                        \
    }
#endif /* __cplusplus */
/* Integers */
ic_print_function (u8, unsigned char, "%hhu")
ic_print_function (s8, signed char, "%hhd")
ic_print_function (u16, unsigned short, "%hu")
ic_print_function (s16, short, "%hd")
ic_print_function (u32, unsigned, "%u")
ic_print_function (s32, int, "%d")
ic_print_function (u64, unsigned long, "%lu")
ic_print_function (s64, long, "%ld")
ic_print_function (u64_2, unsigned long long, "%llu")
ic_print_function (s64_2, long long, "%lld")
/* Floats */
ic_print_function (f32, float, "%f")
ic_print_function (f64, double, "%lf")
ic_print_function (f_l, long double, "%Lf")
/* Pointers */
ic_print_function (ptr, void *, "%p")
ic_print_function (cptr, const void *, "%p")
#undef ic_print_function

/** Just prints a character to the given stream without any styling.
    Returns true if the character uses special representation.
    If `is_string` is true, UTF-8 bytes are not escaped. */
#ifdef __cplusplus
IC__FUNC bool ic__format_char(char c, char *out) {
#else
IC__FUNC bool ic__format_char(char c, char out[static 4]) {
#endif
    if (isprint(c)) {
        /*
        Note: in the places where we use this function we end up just using the
        character directly if this reutns false so we can ignore the contents
        of the buffer for that case.

        out[0] = c;
        */
        return false;
    } else {
        out[0] = '\\';
        switch (c) {
        case '\n': out[1] = 'n'; break;
        case '\r': out[1] = 'r'; break;
        case '\t': out[1] = 't'; break;
        case '\v': out[1] = 'v'; break;
        case '\f': out[1] = 'f'; break;
        case '\a': out[1] = 'a'; break;
        case '\b': out[1] = 'b'; break;
        case '\0': out[1] = '0'; break;
        default:
            out[1] = 'x';
            out[2] = "0123456789ABCDEF"[(unsigned char)c >> 4];
            out[3] = "0123456789ABCDEF"[(unsigned char)c & 0xF];
            break;
        }
        return true;
    }
}

IC__FUNC void ic__print_string_impl(
#ifdef __cplusplus
    std::FILE *stream, size_t len, const char *sbegin
#else
    FILE *stream, size_t len, const char sbegin[static len]
#endif
) {
    /*
    Writing to the terminal mid-UTF-8 sequence will usually break that sequence
    and cause incorrect output so want to write in chunks and not character by
    character, espcially since we default to writing to stderr which is not
    line-buffered (for stdout this should never be an issue).
    */
    if (!sbegin) {
        /* Printing a null pointer gives (nil) but a null string gives (null)?
           This matches printf behavior but seems a bit weird to me. */
        fputs(IC_VALUE_COLOR "(null)", stream);
        return;
    }
    const unsigned char *str = (const unsigned char *)sbegin;
    const unsigned char *seg_start = str;
    char buf[5] = {0};
    fputs(IC_VALUE_COLOR "\"", stream);
    for (size_t i = 0; i != len; ++i) {
        if (isprint(str[i]) || str[i] & 0x80) {
            continue;
        } else {
            fwrite(seg_start, 1, i - (seg_start - str), stream);
            fputs(IC_VALUE_SPECIAL_COLOR, stream);
            buf[2] = 0;
            if (ic__format_char(str[i], buf)) {
                fputs(buf, stream);
            } else {
                fputc(str[i], stream);
            }
            fputs(IC_VALUE_COLOR, stream);
            seg_start = str + i + 1;
        }
    }
    if (*seg_start) {
        fputs((const char *)seg_start, stream);
    }
    fputc('"', stream);
}

#ifdef __cplusplus
IC__FUNC void ic_print_function (std::FILE *stream, char c) {
#else
IC__FUNC void ic__print_c(FILE *stream, char c) {
#endif
    char buf[5] = {0};
    if (ic__format_char(c, buf)) {
        fprintf(stream, IC_VALUE_SPECIAL_COLOR "'%s'", buf);
    } else {
        fprintf(stream, IC_VALUE_COLOR "'%c'", c);
    }
}

#ifdef __cplusplus
IC__FUNC void ic_print_function (std::FILE *stream, const char *sstr) {
#else
IC__FUNC void ic__print_cstr(FILE *stream, const char *sstr) {
#endif
    size_t len = sstr ? strlen(sstr) : 0;
    ic__print_string_impl(stream, len, sstr);
}

#ifdef __cplusplus
IC__FUNC void ic_print_function (std::FILE *stream, char *str) {
    ic_print_function(stream, (const char *)str);
}
#else
IC__FUNC void ic__print_str(FILE *stream, char *str) {
    ic__print_cstr(stream, str);
}
#endif

#ifdef __cplusplus
IC__FUNC void ic_print_function (std::FILE *stream, bool b) {
  std::fprintf (stream, IC_VALUE_COLOR "%s", b ? "true" : "false");
}

#if (__cplusplus >= 201703L \
     && (defined (_GLIBCXX_STRING_VIEW) \
         || defined (_LIBCPP_STRING_VIEW) \
         || defined (_STRING_VIEW_)))
IC__FUNC void ic_print_function (std::FILE *stream, std::string_view str) {
  ic__print_string_impl(stream, str.size(), str.data());
}
#endif

#if (defined (_GLIBCXX_STRING) \
     || defined (_LIBCPP_STRING) \
     || defined (_STRING_))
IC__FUNC void ic_print_function (std::FILE *stream, const std::string &str) {
  ic__print_string_impl(stream, str.size(), str.data());
}
#endif

template <class It>
IC__FUNC void ic__print_container (std::FILE *stream, It begin, It end) {
  std::fputs(IC_TEXT_COLOR "{", stream);
  ic_print_function (stream, *begin);
  ++begin;
  for (; begin != end; ++begin) {
    std::fputs (IC_TEXT_COLOR ", ", stream);
    ic_print_function (stream, *begin);
  }
  std::fputs (IC_TEXT_COLOR "}", stream);
}

#if (defined (_GLIBCXX_VECTOR) \
     || defined (_LIBCPP_VECTOR) \
     || defined (_VECTOR_))
template <class T>
IC__FUNC void ic_print_function (std::FILE *stream, const std::vector<T> &vec) {
  ic__print_container (stream, vec.begin (), vec.end ());
}
#endif

#if (defined (_GLIBCXX_ARRAY) \
     || defined (_LIBCPP_ARRAY) \
     || defined (_ARRAY_))
template <class T, std::size_t N>
IC__FUNC void ic_print_function (std::FILE *stream, const std::array<T, N> &arr) {
  ic__print_container (stream, arr.begin (), arr.end ());
}
#endif

template <class T, std::size_t N>
IC__FUNC void ic_print_function (std::FILE *stream, const T (&arr)[N]) {
  ic__print_container (stream, std::begin (arr), std::end (arr));
}

#if (__cplusplus >= 202002L \
     && (defined (_GLIBCXX_SPAN) \
         || defined (_LIBCPP_SPAN) \
         || defined (_SPAN_)))
template <class T, std::size_t E>
IC__FUNC void ic_print_function (std::FILE *stream, const std::span<T, E> &span) {
  ic__print_container (stream, span.begin (), span.end ());
}
#endif

#if (defined (_GLIBCXX_UTILITY) \
     || defined (_LIBCPP_UTILITY) \
     || defined (_UTILITY_))
template <class T1, class T2>
IC__FUNC void ic_print_function (std::FILE *stream, const std::pair<T1, T2> &pair) {
  std::fputs(IC_TEXT_COLOR "{", stream);
  ic_print_function (stream, pair.first);
  std::fputs (IC_TEXT_COLOR ", ", stream);
  ic_print_function (stream, pair.second);
  std::fputs (IC_TEXT_COLOR "}", stream);
}
#endif

#if (__cplusplus >= 201703L \
     && (defined (_GLIBCXX_TUPLE) \
         || defined (_LIBCPP_TUPLE) \
         || defined (_TUPLE_)))
template <class... Ts>
IC__FUNC void ic_print_function (std::FILE *stream, const std::tuple<Ts...> &tuple) {
  bool first = true;
  auto print_value = [&]<class T>(const T& v) {
    if (first) {
      first = false;
    } else {
      std::fputs (IC_TEXT_COLOR ", ", stream);
    }
    ic_print_function (stream, v);
  };
  std::fputs (IC_TEXT_COLOR "{", stream);
  std::apply (
    [&](const Ts &...v) {
      (print_value (v), ...);
    },
    tuple
  );
  std::fputs (IC_TEXT_COLOR "}", stream);
}
#endif


#if (__cplusplus >= 201703L \
     && (defined (_GLIBCXX_OPTIONAL) \
         || defined (_LIBCPP_OPTIONAL) \
         || defined (_OPTIONAL_)))
template <class T>
IC__FUNC void ic_print_function (std::FILE *stream, const std::optional<T> &opt) {
  if (opt.has_value ()) {
    fputs (IC_TEXT_COLOR "Some(", stream);
    ic_print_function (stream, opt.value ());
    fputs (IC_TEXT_COLOR ")", stream);
  } else {
    fputs (IC_VALUE_COLOR "None", stream);
  }
}
#endif

template <class T>
IC__FUNC void ic_print_function (std::FILE *stream, const T &v) {
  (void)v;
  std::fputs (IC_VALUE_COLOR "?", stream);
}

#else /* __cplusplus */

IC__FUNC void ic__print_bool (FILE *stream, _Bool b) {
  fprintf (stream, IC_VALUE_COLOR "%s", b ? "true" : "false");
}

IC__FUNC void ic_print_unknown (FILE *stream, ...) {
  fputs (IC_VALUE_COLOR "?", stream);
}
#endif /* __cplusplus */

/**** User macros ****/

#define ic__impl(...) (ic__begin ic__exprs (__VA_ARGS__))
#define IC(...) ic__impl (__VA_ARGS__)

/* Evaluation order is undefined :(
   doesn't work in gcc, works with clang and tcc */
#if defined (__GNUC__) && !defined (__clang__)
#  define ic__args_warn_gcc\
     _Pragma ("GCC warning \"IC_ARGS does not work properly with GCC\"")
#else
#  define ic__args_warn_gcc
#endif
#define ic__args_impl(first, ...) (ic__begin, ic__value (first)) ic__exprs (__VA_ARGS__)
#define IC_ARGS(...) ic__args_warn_gcc ic__args_impl (__VA_ARGS__)

#define IC_HERE(...) do {                                           \
  ic__begin;                                                        \
  fprintf (IC_STREAM,                                               \
           __FILE__ ":" ic__str (__LINE__) " in \"%s\"",            \
           __PRETTY_FUNCTION__);                                    \
  __VA_OPT__(fprintf (IC_STREAM, ": " IC_VALUE_COLOR __VA_ARGS__)); \
  fputs("\x1b[m\n", IC_STREAM);                                     \
 } while (0)

#define IC_PERROR(what) do {                                            \
  if (0 != errno) {                                                     \
    fprintf (IC_STREAM, "%s:%d in %s: %s: %s\n",                        \
             __FILE__, __LINE__, __FUNCTION__, what, strerror (errno)); \
  }                                                                     \
} while (0)

#endif /* IC_H */

/*
------------------------------------------------------------------------------
This software is available under 2 licenses -- choose whichever you prefer.
------------------------------------------------------------------------------
ALTERNATIVE A - MIT License
Copyright (c) 2022-2024 Jakob Mohrbacher
Permission is hereby granted, free of charge, to any person obtaining a copy of
this software and associated documentation files (the "Software"), to deal in
the Software without restriction, including without limitation the rights to
use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies
of the Software, and to permit persons to whom the Software is furnished to do
so, subject to the following conditions:
The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.
THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
------------------------------------------------------------------------------
ALTERNATIVE B - Public Domain (www.unlicense.org)
This is free and unencumbered software released into the public domain.
Anyone is free to copy, modify, publish, use, compile, sell, or distribute this
software, either in source code form or as a compiled binary, for any purpose,
commercial or non-commercial, and by any means.
In jurisdictions that recognize copyright laws, the author or authors of this
software dedicate any and all copyright interest in the software to the public
domain. We make this dedication for the benefit of the public at large and to
the detriment of our heirs and successors. We intend this dedication to be an
overt act of relinquishment in perpetuity of all present and future rights to
this software under copyright law.
THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
------------------------------------------------------------------------------
*/
