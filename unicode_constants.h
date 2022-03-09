/* -*- buffer-read-only: t -*-
 * !!!!!!!   DO NOT EDIT THIS FILE   !!!!!!!
 * This file is built by regen/unicode_constants.pl from Unicode data.
 * Any changes made here will be lost!
 */


#ifndef PERL_UNICODE_CONSTANTS_H_   /* Guard against nested #includes */
#define PERL_UNICODE_CONSTANTS_H_   1

/* This file contains #defines for the version of Unicode being used and
 * various Unicode code points.  The values the code point macros expand to
 * are the native Unicode code point, or all or portions of the UTF-8 encoding
 * for the code point.  In the former case, the macro name has the suffix
 * "_NATIVE"; otherwise, the suffix "_UTF8".
 *
 * The macros that have the suffix "_UTF8" may have further suffixes, as
 * follows:
 *  "_FIRST_BYTE" if the value is just the first byte of the UTF-8
 *                representation; the value will be a numeric constant.
 *  "_TAIL"       if instead it represents all but the first byte.  This, and
 *                with no additional suffix are both string constants */

/*
=for apidoc_section $unicode

=for apidoc AmnU|const char *|BOM_UTF8

This is a macro that evaluates to a string constant of the  UTF-8 bytes that
define the Unicode BYTE ORDER MARK (U+FEFF) for the platform that perl
is compiled on.  This allows code to use a mnemonic for this character that
works on both ASCII and EBCDIC platforms.
S<C<sizeof(BOM_UTF8) - 1>> can be used to get its length in
bytes.

=for apidoc AmnU|const char *|REPLACEMENT_CHARACTER_UTF8

This is a macro that evaluates to a string constant of the  UTF-8 bytes that
define the Unicode REPLACEMENT CHARACTER (U+FFFD) for the platform that perl
is compiled on.  This allows code to use a mnemonic for this character that
works on both ASCII and EBCDIC platforms.
S<C<sizeof(REPLACEMENT_CHARACTER_UTF8) - 1>> can be used to get its length in
bytes.

=cut
*/

#define UNICODE_MAJOR_VERSION   14
#define UNICODE_DOT_VERSION     0
#define UNICODE_DOT_DOT_VERSION 0


#if 'A' == 65 /* ASCII/Latin1 */
#   define LATIN_SMALL_LETTER_LONG_S_UTF8  "\xC5\xBF"    /* U+017F */

#   define COMBINING_GRAVE_ACCENT_UTF8  "\xCC\x80"    /* U+0300 */
#   define COMBINING_DOT_ABOVE_UTF8  "\xCC\x87"    /* U+0307 */

#   define LATIN_CAPITAL_LETTER_SHARP_S_UTF8  "\xE1\xBA\x9E"    /* U+1E9E */

#   define LATIN_SMALL_LIGATURE_LONG_S_T_UTF8  "\xEF\xAC\x85"    /* U+FB05 */
#   define LATIN_SMALL_LIGATURE_ST_UTF8  "\xEF\xAC\x86"    /* U+FB06 */
#   define LATIN_CAPITAL_LETTER_I_WITH_DOT_ABOVE_UTF8  "\xC4\xB0"    /* U+0130 */
#   define LATIN_SMALL_LETTER_DOTLESS_I_UTF8  "\xC4\xB1"    /* U+0131 */

#   define HYPHEN_UTF8  "\xE2\x80\x90"    /* U+2010 */
#   define BOM_UTF8_FIRST_BYTE  0xEF    /* U+FEFF */
#   define BOM_UTF8_TAIL  "\xBB\xBF"    /* U+FEFF */

#   define BOM_UTF8  "\xEF\xBB\xBF"    /* U+FEFF */

#   define REPLACEMENT_CHARACTER_UTF8  "\xEF\xBF\xBD"    /* U+FFFD */

#   define MAX_UNICODE_UTF8  "\xF4\x8F\xBF\xBF"    /* U+10FFFF */

#   define NBSP_NATIVE  0xA0    /* U+00A0 */
#   define NBSP_UTF8  "\xC2\xA0"    /* U+00A0 */

#   define DEL_NATIVE  0x7F    /* U+007F */
#   define CR_NATIVE  0x0D    /* U+000D */
#   define LF_NATIVE  0x0A    /* U+000A */
#   define VT_NATIVE  0x0B    /* U+000B */
#   define ESC_NATIVE  0x1B    /* U+001B */
#   define LATIN_SMALL_LETTER_SHARP_S_NATIVE  0xDF    /* U+00DF */
#   define LATIN_SMALL_LETTER_SHARP_S_UTF8  "\xC3\x9F"    /* U+00DF */
#   define LATIN_SMALL_LETTER_A_WITH_RING_ABOVE_NATIVE  0xE5    /* U+00E5 */
#   define LATIN_CAPITAL_LETTER_A_WITH_RING_ABOVE_NATIVE  0xC5    /* U+00C5 */
#   define LATIN_SMALL_LETTER_Y_WITH_DIAERESIS_NATIVE  0xFF    /* U+00FF */
#   define MICRO_SIGN_NATIVE  0xB5    /* U+00B5 */
#   define MICRO_SIGN_UTF8  "\xC2\xB5"    /* U+00B5 */

#   ifdef PERL_IN_TOKE_C
       /* Paired characters for quote-like operators, in UTF-8 */
#      define EXTRA_OPENING_UTF8_BRACKETS "\x28\x3C\x5B\x7B\xC2\xAB\xC2\xBB\xDC\x86\xE0\xBC\xBA\xE0\xBC\xBC\xE1\x9A\x9B\xE2\x80\x98\xE2\x80\x99\xE2\x80\x9C\xE2\x80\x9D\xE2\x80\xB5\xE2\x80\xB6\xE2\x80\xB7\xE2\x80\xB9\xE2\x80\xBA\xE2\x81\x85\xE2\x81\xBD\xE2\x82\x8D\xE2\x89\xA4\xE2\x89\xA6\xE2\x89\xA8\xE2\x89\xAA\xE2\x89\xAE\xE2\x89\xB0\xE2\x89\xB2\xE2\x89\xB4\xE2\x8B\x96\xE2\x8B\x98\xE2\x8B\x9C\xE2\x8B\xA6\xE2\x8C\x88\xE2\x8C\x8A\xE2\x8C\xA9\xE2\x9D\xA8\xE2\x9D\xAA\xE2\x9D\xAC\xE2\x9D\xAE\xE2\x9D\xB0\xE2\x9D\xB2\xE2\x9D\xB4\xE2\x9F\x85\xE2\x9F\xA6\xE2\x9F\xA8\xE2\x9F\xAA\xE2\x9F\xAC\xE2\x9F\xAE\xE2\xA6\x83\xE2\xA6\x85\xE2\xA6\x87\xE2\xA6\x89\xE2\xA6\x8B\xE2\xA6\x8D\xE2\xA6\x8F\xE2\xA6\x91\xE2\xA6\x93\xE2\xA6\x95\xE2\xA6\x97\xE2\xA7\x80\xE2\xA7\x98\xE2\xA7\x9A\xE2\xA7\xBC\xE2\xA9\xB9\xE2\xA9\xBB\xE2\xA9\xBD\xE2\xA9\xBF\xE2\xAA\x81\xE2\xAA\x83\xE2\xAA\x85\xE2\xAA\x87\xE2\xAA\x89\xE2\xAA\x8D\xE2\xAA\x95\xE2\xAA\x97\xE2\xAA\x99\xE2\xAA\x9B\xE2\xAA\x9D\xE2\xAA\x9F\xE2\xAA\xA1\xE2\xAA\xA6\xE2\xAA\xA8\xE2\xAB\xB7\xE2\xAB\xB9\xE2\xB8\x82\xE2\xB8\x83\xE2\xB8\x84\xE2\xB8\x85\xE2\xB8\x89\xE2\xB8\x8A\xE2\xB8\x8C\xE2\xB8\x8D\xE2\xB8\x91\xE2\xB8\x9C\xE2\xB8\x9D\xE2\xB8\xA0\xE2\xB8\xA1\xE2\xB8\xA2\xE2\xB8\xA4\xE2\xB8\xA6\xE2\xB8\xA8\xE2\xB8\xB6\xE2\xB9\x82\xE2\xB9\x95\xE2\xB9\x97\xE2\xB9\x99\xE2\xB9\x9B\xE3\x80\x88\xE3\x80\x8A\xE3\x80\x8C\xE3\x80\x8E\xE3\x80\x90\xE3\x80\x94\xE3\x80\x96\xE3\x80\x98\xE3\x80\x9A\xE3\x80\x9D\xEA\xA7\x81\xEF\xB4\xBE\xEF\xB9\x99\xEF\xB9\x9B\xEF\xB9\x9D\xEF\xB9\xA4\xEF\xBC\x88\xEF\xBC\x9C\xEF\xBC\xBB\xEF\xBD\x9B\xEF\xBD\x9F\xEF\xBD\xA2"
#      define EXTRA_CLOSING_UTF8_BRACKETS "\x29\x3E\x5D\x7D\xC2\xBB\xC2\xAB\xDC\x87\xE0\xBC\xBB\xE0\xBC\xBD\xE1\x9A\x9C\xE2\x80\x99\xE2\x80\x98\xE2\x80\x9D\xE2\x80\x9C\xE2\x80\xB2\xE2\x80\xB3\xE2\x80\xB4\xE2\x80\xBA\xE2\x80\xB9\xE2\x81\x86\xE2\x81\xBE\xE2\x82\x8E\xE2\x89\xA5\xE2\x89\xA7\xE2\x89\xA9\xE2\x89\xAB\xE2\x89\xAF\xE2\x89\xB1\xE2\x89\xB3\xE2\x89\xB5\xE2\x8B\x97\xE2\x8B\x99\xE2\x8B\x9D\xE2\x8B\xA7\xE2\x8C\x89\xE2\x8C\x8B\xE2\x8C\xAA\xE2\x9D\xA9\xE2\x9D\xAB\xE2\x9D\xAD\xE2\x9D\xAF\xE2\x9D\xB1\xE2\x9D\xB3\xE2\x9D\xB5\xE2\x9F\x86\xE2\x9F\xA7\xE2\x9F\xA9\xE2\x9F\xAB\xE2\x9F\xAD\xE2\x9F\xAF\xE2\xA6\x84\xE2\xA6\x86\xE2\xA6\x88\xE2\xA6\x8A\xE2\xA6\x8C\xE2\xA6\x90\xE2\xA6\x8E\xE2\xA6\x92\xE2\xA6\x94\xE2\xA6\x96\xE2\xA6\x98\xE2\xA7\x81\xE2\xA7\x99\xE2\xA7\x9B\xE2\xA7\xBD\xE2\xA9\xBA\xE2\xA9\xBC\xE2\xA9\xBE\xE2\xAA\x80\xE2\xAA\x82\xE2\xAA\x84\xE2\xAA\x86\xE2\xAA\x88\xE2\xAA\x8A\xE2\xAA\x8E\xE2\xAA\x96\xE2\xAA\x98\xE2\xAA\x9A\xE2\xAA\x9C\xE2\xAA\x9E\xE2\xAA\xA0\xE2\xAA\xA2\xE2\xAA\xA7\xE2\xAA\xA9\xE2\xAB\xB8\xE2\xAB\xBA\xE2\xB8\x83\xE2\xB8\x82\xE2\xB8\x85\xE2\xB8\x84\xE2\xB8\x8A\xE2\xB8\x89\xE2\xB8\x8D\xE2\xB8\x8C\xE2\xB8\x90\xE2\xB8\x9D\xE2\xB8\x9C\xE2\xB8\xA1\xE2\xB8\xA0\xE2\xB8\xA3\xE2\xB8\xA5\xE2\xB8\xA7\xE2\xB8\xA9\xE2\xB8\xB7\xE2\x80\x9E\xE2\xB9\x96\xE2\xB9\x98\xE2\xB9\x9A\xE2\xB9\x9C\xE3\x80\x89\xE3\x80\x8B\xE3\x80\x8D\xE3\x80\x8F\xE3\x80\x91\xE3\x80\x95\xE3\x80\x97\xE3\x80\x99\xE3\x80\x9B\xE3\x80\x9E\xEA\xA7\x82\xEF\xB4\xBF\xEF\xB9\x9A\xEF\xB9\x9C\xEF\xB9\x9E\xEF\xB9\xA5\xEF\xBC\x89\xEF\xBC\x9E\xEF\xBC\xBD\xEF\xBD\x9D\xEF\xBD\xA0\xEF\xBD\xA3"

       /* And not in UTF-8 */
#      define EXTRA_OPENING_NON_UTF8_BRACKETS "\x28\x3C\x5B\x7B\xAB\xBB"
#      define EXTRA_CLOSING_NON_UTF8_BRACKETS "\x29\x3E\x5D\x7D\xBB\xAB"

       /* And what's deprecated */
#      define DEPRECATED_OPENING_UTF8_BRACKETS "\xC2\xAB\xC2\xBB\xC2\xBB\xDC\x86\xDC\x87\xE0\xBC\xBA\xE0\xBC\xBB\xE0\xBC\xBC\xE0\xBC\xBD\xE1\x9A\x9B\xE1\x9A\x9C\xE2\x80\x98\xE2\x80\x99\xE2\x80\x99\xE2\x80\x9C\xE2\x80\x9D\xE2\x80\x9D\xE2\x80\xB5\xE2\x80\xB2\xE2\x80\xB6\xE2\x80\xB3\xE2\x80\xB7\xE2\x80\xB4\xE2\x80\xB9\xE2\x80\xBA\xE2\x80\xBA\xE2\x81\x85\xE2\x81\x86\xE2\x81\xBD\xE2\x81\xBE\xE2\x82\x8D\xE2\x82\x8E\xE2\x89\xA4\xE2\x89\xA5\xE2\x89\xA6\xE2\x89\xA7\xE2\x89\xA8\xE2\x89\xA9\xE2\x89\xAA\xE2\x89\xAB\xE2\x89\xAE\xE2\x89\xAF\xE2\x89\xB0\xE2\x89\xB1\xE2\x89\xB2\xE2\x89\xB3\xE2\x89\xB4\xE2\x89\xB5\xE2\x8B\x96\xE2\x8B\x97\xE2\x8B\x98\xE2\x8B\x99\xE2\x8B\x9C\xE2\x8B\x9D\xE2\x8B\xA6\xE2\x8B\xA7\xE2\x8C\x88\xE2\x8C\x89\xE2\x8C\x8A\xE2\x8C\x8B\xE2\x8C\xA9\xE2\x8C\xAA\xE2\x9D\xA8\xE2\x9D\xA9\xE2\x9D\xAA\xE2\x9D\xAB\xE2\x9D\xAC\xE2\x9D\xAD\xE2\x9D\xAE\xE2\x9D\xAF\xE2\x9D\xB0\xE2\x9D\xB1\xE2\x9D\xB2\xE2\x9D\xB3\xE2\x9D\xB4\xE2\x9D\xB5\xE2\x9F\x85\xE2\x9F\x86\xE2\x9F\xA6\xE2\x9F\xA7\xE2\x9F\xA8\xE2\x9F\xA9\xE2\x9F\xAA\xE2\x9F\xAB\xE2\x9F\xAC\xE2\x9F\xAD\xE2\x9F\xAE\xE2\x9F\xAF\xE2\xA6\x83\xE2\xA6\x84\xE2\xA6\x85\xE2\xA6\x86\xE2\xA6\x87\xE2\xA6\x88\xE2\xA6\x89\xE2\xA6\x8A\xE2\xA6\x8B\xE2\xA6\x8C\xE2\xA6\x8D\xE2\xA6\x90\xE2\xA6\x8F\xE2\xA6\x8E\xE2\xA6\x91\xE2\xA6\x92\xE2\xA6\x93\xE2\xA6\x94\xE2\xA6\x95\xE2\xA6\x96\xE2\xA6\x97\xE2\xA6\x98\xE2\xA7\x80\xE2\xA7\x81\xE2\xA7\x98\xE2\xA7\x99\xE2\xA7\x9A\xE2\xA7\x9B\xE2\xA7\xBC\xE2\xA7\xBD\xE2\xA9\xB9\xE2\xA9\xBA\xE2\xA9\xBB\xE2\xA9\xBC\xE2\xA9\xBD\xE2\xA9\xBE\xE2\xA9\xBF\xE2\xAA\x80\xE2\xAA\x81\xE2\xAA\x82\xE2\xAA\x83\xE2\xAA\x84\xE2\xAA\x85\xE2\xAA\x86\xE2\xAA\x87\xE2\xAA\x88\xE2\xAA\x89\xE2\xAA\x8A\xE2\xAA\x8D\xE2\xAA\x8E\xE2\xAA\x95\xE2\xAA\x96\xE2\xAA\x97\xE2\xAA\x98\xE2\xAA\x99\xE2\xAA\x9A\xE2\xAA\x9B\xE2\xAA\x9C\xE2\xAA\x9D\xE2\xAA\x9E\xE2\xAA\x9F\xE2\xAA\xA0\xE2\xAA\xA1\xE2\xAA\xA2\xE2\xAA\xA6\xE2\xAA\xA7\xE2\xAA\xA8\xE2\xAA\xA9\xE2\xAB\xB7\xE2\xAB\xB8\xE2\xAB\xB9\xE2\xAB\xBA\xE2\xB8\x82\xE2\xB8\x83\xE2\xB8\x83\xE2\xB8\x84\xE2\xB8\x85\xE2\xB8\x85\xE2\xB8\x89\xE2\xB8\x8A\xE2\xB8\x8A\xE2\xB8\x8C\xE2\xB8\x8D\xE2\xB8\x8D\xE2\xB8\x91\xE2\xB8\x90\xE2\xB8\x9C\xE2\xB8\x9D\xE2\xB8\x9D\xE2\xB8\xA0\xE2\xB8\xA1\xE2\xB8\xA1\xE2\xB8\xA2\xE2\xB8\xA3\xE2\xB8\xA4\xE2\xB8\xA5\xE2\xB8\xA6\xE2\xB8\xA7\xE2\xB8\xA8\xE2\xB8\xA9\xE2\xB8\xB6\xE2\xB8\xB7\xE2\xB9\x82\xE2\x80\x9E\xE2\xB9\x95\xE2\xB9\x96\xE2\xB9\x97\xE2\xB9\x98\xE2\xB9\x99\xE2\xB9\x9A\xE2\xB9\x9B\xE2\xB9\x9C\xE3\x80\x88\xE3\x80\x89\xE3\x80\x8A\xE3\x80\x8B\xE3\x80\x8C\xE3\x80\x8D\xE3\x80\x8E\xE3\x80\x8F\xE3\x80\x90\xE3\x80\x91\xE3\x80\x94\xE3\x80\x95\xE3\x80\x96\xE3\x80\x97\xE3\x80\x98\xE3\x80\x99\xE3\x80\x9A\xE3\x80\x9B\xE3\x80\x9D\xE3\x80\x9E\xEA\xA7\x81\xEA\xA7\x82\xEF\xB4\xBE\xEF\xB4\xBF\xEF\xB9\x99\xEF\xB9\x9A\xEF\xB9\x9B\xEF\xB9\x9C\xEF\xB9\x9D\xEF\xB9\x9E\xEF\xB9\xA4\xEF\xB9\xA5\xEF\xBC\x88\xEF\xBC\x89\xEF\xBC\x9C\xEF\xBC\x9E\xEF\xBC\xBB\xEF\xBC\xBD\xEF\xBD\x9B\xEF\xBD\x9D\xEF\xBD\x9F\xEF\xBD\xA0\xEF\xBD\xA2\xEF\xBD\xA3"
#      define DEPRECATED_OPENING_NON_UTF8_BRACKETS "\xAB\xBB"
#   endif

#   ifdef PERL_IN_REGCOMP_C
#     define MAX_PRINT_A  0x7E   /* The max code point that isPRINT_A */
#   endif
#endif	/* ASCII/Latin1 */

#if 'A' == 193 /* EBCDIC 1047 */ \
     && '\\' == 224 && '[' == 173 && ']' == 189 && '{' == 192 && '}' == 208 \
     && '^' == 95 && '~' == 161 && '!' == 90 && '#' == 123 && '|' == 79 \
     && '$' == 91 && '@' == 124 && '`' == 121 && '\n' == 21
#   define LATIN_SMALL_LETTER_LONG_S_UTF8  "\x8F\x73"    /* U+017F */

#   define COMBINING_GRAVE_ACCENT_UTF8  "\xAF\x41"    /* U+0300 */
#   define COMBINING_DOT_ABOVE_UTF8  "\xAF\x48"    /* U+0307 */

#   define LATIN_CAPITAL_LETTER_SHARP_S_UTF8  "\xBF\x63\x72"    /* U+1E9E */

#   define LATIN_SMALL_LIGATURE_LONG_S_T_UTF8  "\xDD\x72\x67\x46"    /* U+FB05 */
#   define LATIN_SMALL_LIGATURE_ST_UTF8  "\xDD\x72\x67\x47"    /* U+FB06 */
#   define LATIN_CAPITAL_LETTER_I_WITH_DOT_ABOVE_UTF8  "\x8D\x57"    /* U+0130 */
#   define LATIN_SMALL_LETTER_DOTLESS_I_UTF8  "\x8D\x58"    /* U+0131 */

#   define HYPHEN_UTF8  "\xCA\x41\x57"    /* U+2010 */
#   define BOM_UTF8_FIRST_BYTE  0xDD    /* U+FEFF */
#   define BOM_UTF8_TAIL  "\x73\x66\x73"    /* U+FEFF */

#   define BOM_UTF8  "\xDD\x73\x66\x73"    /* U+FEFF */

#   define REPLACEMENT_CHARACTER_UTF8  "\xDD\x73\x73\x71"    /* U+FFFD */

#   define MAX_UNICODE_UTF8  "\xEE\x42\x73\x73\x73"    /* U+10FFFF */

#   define NBSP_NATIVE  0x41    /* U+00A0 */
#   define NBSP_UTF8  "\x80\x41"    /* U+00A0 */

#   define DEL_NATIVE  0x07    /* U+007F */
#   define CR_NATIVE  0x0D    /* U+000D */
#   define LF_NATIVE  0x15    /* U+000A */
#   define VT_NATIVE  0x0B    /* U+000B */
#   define ESC_NATIVE  0x27    /* U+001B */
#   define LATIN_SMALL_LETTER_SHARP_S_NATIVE  0x59    /* U+00DF */
#   define LATIN_SMALL_LETTER_SHARP_S_UTF8  "\x8A\x73"    /* U+00DF */
#   define LATIN_SMALL_LETTER_A_WITH_RING_ABOVE_NATIVE  0x47    /* U+00E5 */
#   define LATIN_CAPITAL_LETTER_A_WITH_RING_ABOVE_NATIVE  0x67    /* U+00C5 */
#   define LATIN_SMALL_LETTER_Y_WITH_DIAERESIS_NATIVE  0xDF    /* U+00FF */
#   define MICRO_SIGN_NATIVE  0xA0    /* U+00B5 */
#   define MICRO_SIGN_UTF8  "\x80\x64"    /* U+00B5 */

#   ifdef PERL_IN_TOKE_C
       /* Paired characters for quote-like operators, in UTF-8 */
#      define EXTRA_OPENING_UTF8_BRACKETS "\x4D\x4C\xAD\xC0\x80\x52\x80\x6A\xB8\x67\x47\xBA\x68\x69\xBA\x68\x70\xBC\x63\x6A\xCA\x41\x67\xCA\x41\x68\xCA\x41\x70\xCA\x41\x71\xCA\x42\x64\xCA\x42\x65\xCA\x42\x66\xCA\x42\x68\xCA\x42\x69\xCA\x43\x46\xCA\x44\x71\xCA\x45\x54\xCA\x62\x45\xCA\x62\x47\xCA\x62\x49\xCA\x62\x51\xCA\x62\x55\xCA\x62\x57\xCA\x62\x59\xCA\x62\x63\xCA\x65\x65\xCA\x65\x67\xCA\x65\x70\xCA\x66\x47\xCA\x67\x49\xCA\x67\x51\xCA\x68\x4A\xCB\x6A\x49\xCB\x6A\x51\xCB\x6A\x53\xCB\x6A\x55\xCB\x6A\x57\xCB\x6A\x59\xCB\x6A\x63\xCB\x72\x46\xCB\x73\x47\xCB\x73\x49\xCB\x73\x51\xCB\x73\x53\xCB\x73\x55\xCC\x53\x44\xCC\x53\x46\xCC\x53\x48\xCC\x53\x4A\xCC\x53\x52\xCC\x53\x54\xCC\x53\x56\xCC\x53\x58\xCC\x53\x62\xCC\x53\x64\xCC\x53\x66\xCC\x55\x41\xCC\x55\x67\xCC\x55\x69\xCC\x56\x70\xCC\x62\x68\xCC\x62\x6A\xCC\x62\x71\xCC\x62\x73\xCC\x63\x42\xCC\x63\x44\xCC\x63\x46\xCC\x63\x48\xCC\x63\x4A\xCC\x63\x54\xCC\x63\x64\xCC\x63\x66\xCC\x63\x68\xCC\x63\x6A\xCC\x63\x71\xCC\x63\x73\xCC\x64\x42\xCC\x64\x47\xCC\x64\x49\xCC\x66\x66\xCC\x66\x68\xCD\x57\x43\xCD\x57\x44\xCD\x57\x45\xCD\x57\x46\xCD\x57\x4A\xCD\x57\x51\xCD\x57\x53\xCD\x57\x54\xCD\x57\x58\xCD\x57\x70\xCD\x57\x71\xCD\x58\x41\xCD\x58\x42\xCD\x58\x43\xCD\x58\x45\xCD\x58\x47\xCD\x58\x49\xCD\x58\x65\xCD\x59\x43\xCD\x59\x64\xCD\x59\x66\xCD\x59\x68\xCD\x59\x6A\xCE\x41\x49\xCE\x41\x51\xCE\x41\x53\xCE\x41\x55\xCE\x41\x57\xCE\x41\x63\xCE\x41\x65\xCE\x41\x67\xCE\x41\x69\xCE\x41\x71\xDD\x51\x55\x42\xDD\x73\x4A\x72\xDD\x73\x59\x68\xDD\x73\x59\x6A\xDD\x73\x59\x71\xDD\x73\x62\x45\xDD\x73\x67\x49\xDD\x73\x67\x70\xDD\x73\x68\x6A\xDD\x73\x69\x6A\xDD\x73\x69\x73\xDD\x73\x6A\x43"
#      define EXTRA_CLOSING_UTF8_BRACKETS "\x5D\x6E\xBD\xD0\x80\x6A\x80\x52\xB8\x67\x48\xBA\x68\x6A\xBA\x68\x71\xBC\x63\x70\xCA\x41\x68\xCA\x41\x67\xCA\x41\x71\xCA\x41\x70\xCA\x42\x59\xCA\x42\x62\xCA\x42\x63\xCA\x42\x69\xCA\x42\x68\xCA\x43\x47\xCA\x44\x72\xCA\x45\x55\xCA\x62\x46\xCA\x62\x48\xCA\x62\x4A\xCA\x62\x52\xCA\x62\x56\xCA\x62\x58\xCA\x62\x62\xCA\x62\x64\xCA\x65\x66\xCA\x65\x68\xCA\x65\x71\xCA\x66\x48\xCA\x67\x4A\xCA\x67\x52\xCA\x68\x51\xCB\x6A\x4A\xCB\x6A\x52\xCB\x6A\x54\xCB\x6A\x56\xCB\x6A\x58\xCB\x6A\x62\xCB\x6A\x64\xCB\x72\x47\xCB\x73\x48\xCB\x73\x4A\xCB\x73\x52\xCB\x73\x54\xCB\x73\x56\xCC\x53\x45\xCC\x53\x47\xCC\x53\x49\xCC\x53\x51\xCC\x53\x53\xCC\x53\x57\xCC\x53\x55\xCC\x53\x59\xCC\x53\x63\xCC\x53\x65\xCC\x53\x67\xCC\x55\x42\xCC\x55\x68\xCC\x55\x6A\xCC\x56\x71\xCC\x62\x69\xCC\x62\x70\xCC\x62\x72\xCC\x63\x41\xCC\x63\x43\xCC\x63\x45\xCC\x63\x47\xCC\x63\x49\xCC\x63\x51\xCC\x63\x55\xCC\x63\x65\xCC\x63\x67\xCC\x63\x69\xCC\x63\x70\xCC\x63\x72\xCC\x64\x41\xCC\x64\x43\xCC\x64\x48\xCC\x64\x4A\xCC\x66\x67\xCC\x66\x69\xCD\x57\x44\xCD\x57\x43\xCD\x57\x46\xCD\x57\x45\xCD\x57\x51\xCD\x57\x4A\xCD\x57\x54\xCD\x57\x53\xCD\x57\x57\xCD\x57\x71\xCD\x57\x70\xCD\x58\x42\xCD\x58\x41\xCD\x58\x44\xCD\x58\x46\xCD\x58\x48\xCD\x58\x4A\xCD\x58\x66\xCA\x41\x72\xCD\x59\x65\xCD\x59\x67\xCD\x59\x69\xCD\x59\x70\xCE\x41\x4A\xCE\x41\x52\xCE\x41\x54\xCE\x41\x56\xCE\x41\x58\xCE\x41\x64\xCE\x41\x66\xCE\x41\x68\xCE\x41\x6A\xCE\x41\x72\xDD\x51\x55\x43\xDD\x73\x4A\x73\xDD\x73\x59\x69\xDD\x73\x59\x70\xDD\x73\x59\x72\xDD\x73\x62\x46\xDD\x73\x67\x4A\xDD\x73\x67\x72\xDD\x73\x68\x71\xDD\x73\x69\x71\xDD\x73\x6A\x41\xDD\x73\x6A\x44"

       /* And not in UTF-8 */
#      define EXTRA_OPENING_NON_UTF8_BRACKETS "\x4D\x4C\xAD\xC0\x8A\x8B"
#      define EXTRA_CLOSING_NON_UTF8_BRACKETS "\x5D\x6E\xBD\xD0\x8B\x8A"

       /* And what's deprecated */
#      define DEPRECATED_OPENING_UTF8_BRACKETS "\x80\x52\x80\x6A\x80\x6A\xB8\x67\x47\xB8\x67\x48\xBA\x68\x69\xBA\x68\x6A\xBA\x68\x70\xBA\x68\x71\xBC\x63\x6A\xBC\x63\x70\xCA\x41\x67\xCA\x41\x68\xCA\x41\x68\xCA\x41\x70\xCA\x41\x71\xCA\x41\x71\xCA\x42\x64\xCA\x42\x59\xCA\x42\x65\xCA\x42\x62\xCA\x42\x66\xCA\x42\x63\xCA\x42\x68\xCA\x42\x69\xCA\x42\x69\xCA\x43\x46\xCA\x43\x47\xCA\x44\x71\xCA\x44\x72\xCA\x45\x54\xCA\x45\x55\xCA\x62\x45\xCA\x62\x46\xCA\x62\x47\xCA\x62\x48\xCA\x62\x49\xCA\x62\x4A\xCA\x62\x51\xCA\x62\x52\xCA\x62\x55\xCA\x62\x56\xCA\x62\x57\xCA\x62\x58\xCA\x62\x59\xCA\x62\x62\xCA\x62\x63\xCA\x62\x64\xCA\x65\x65\xCA\x65\x66\xCA\x65\x67\xCA\x65\x68\xCA\x65\x70\xCA\x65\x71\xCA\x66\x47\xCA\x66\x48\xCA\x67\x49\xCA\x67\x4A\xCA\x67\x51\xCA\x67\x52\xCA\x68\x4A\xCA\x68\x51\xCB\x6A\x49\xCB\x6A\x4A\xCB\x6A\x51\xCB\x6A\x52\xCB\x6A\x53\xCB\x6A\x54\xCB\x6A\x55\xCB\x6A\x56\xCB\x6A\x57\xCB\x6A\x58\xCB\x6A\x59\xCB\x6A\x62\xCB\x6A\x63\xCB\x6A\x64\xCB\x72\x46\xCB\x72\x47\xCB\x73\x47\xCB\x73\x48\xCB\x73\x49\xCB\x73\x4A\xCB\x73\x51\xCB\x73\x52\xCB\x73\x53\xCB\x73\x54\xCB\x73\x55\xCB\x73\x56\xCC\x53\x44\xCC\x53\x45\xCC\x53\x46\xCC\x53\x47\xCC\x53\x48\xCC\x53\x49\xCC\x53\x4A\xCC\x53\x51\xCC\x53\x52\xCC\x53\x53\xCC\x53\x54\xCC\x53\x57\xCC\x53\x56\xCC\x53\x55\xCC\x53\x58\xCC\x53\x59\xCC\x53\x62\xCC\x53\x63\xCC\x53\x64\xCC\x53\x65\xCC\x53\x66\xCC\x53\x67\xCC\x55\x41\xCC\x55\x42\xCC\x55\x67\xCC\x55\x68\xCC\x55\x69\xCC\x55\x6A\xCC\x56\x70\xCC\x56\x71\xCC\x62\x68\xCC\x62\x69\xCC\x62\x6A\xCC\x62\x70\xCC\x62\x71\xCC\x62\x72\xCC\x62\x73\xCC\x63\x41\xCC\x63\x42\xCC\x63\x43\xCC\x63\x44\xCC\x63\x45\xCC\x63\x46\xCC\x63\x47\xCC\x63\x48\xCC\x63\x49\xCC\x63\x4A\xCC\x63\x51\xCC\x63\x54\xCC\x63\x55\xCC\x63\x64\xCC\x63\x65\xCC\x63\x66\xCC\x63\x67\xCC\x63\x68\xCC\x63\x69\xCC\x63\x6A\xCC\x63\x70\xCC\x63\x71\xCC\x63\x72\xCC\x63\x73\xCC\x64\x41\xCC\x64\x42\xCC\x64\x43\xCC\x64\x47\xCC\x64\x48\xCC\x64\x49\xCC\x64\x4A\xCC\x66\x66\xCC\x66\x67\xCC\x66\x68\xCC\x66\x69\xCD\x57\x43\xCD\x57\x44\xCD\x57\x44\xCD\x57\x45\xCD\x57\x46\xCD\x57\x46\xCD\x57\x4A\xCD\x57\x51\xCD\x57\x51\xCD\x57\x53\xCD\x57\x54\xCD\x57\x54\xCD\x57\x58\xCD\x57\x57\xCD\x57\x70\xCD\x57\x71\xCD\x57\x71\xCD\x58\x41\xCD\x58\x42\xCD\x58\x42\xCD\x58\x43\xCD\x58\x44\xCD\x58\x45\xCD\x58\x46\xCD\x58\x47\xCD\x58\x48\xCD\x58\x49\xCD\x58\x4A\xCD\x58\x65\xCD\x58\x66\xCD\x59\x43\xCA\x41\x72\xCD\x59\x64\xCD\x59\x65\xCD\x59\x66\xCD\x59\x67\xCD\x59\x68\xCD\x59\x69\xCD\x59\x6A\xCD\x59\x70\xCE\x41\x49\xCE\x41\x4A\xCE\x41\x51\xCE\x41\x52\xCE\x41\x53\xCE\x41\x54\xCE\x41\x55\xCE\x41\x56\xCE\x41\x57\xCE\x41\x58\xCE\x41\x63\xCE\x41\x64\xCE\x41\x65\xCE\x41\x66\xCE\x41\x67\xCE\x41\x68\xCE\x41\x69\xCE\x41\x6A\xCE\x41\x71\xCE\x41\x72\xDD\x51\x55\x42\xDD\x51\x55\x43\xDD\x73\x4A\x72\xDD\x73\x4A\x73\xDD\x73\x59\x68\xDD\x73\x59\x69\xDD\x73\x59\x6A\xDD\x73\x59\x70\xDD\x73\x59\x71\xDD\x73\x59\x72\xDD\x73\x62\x45\xDD\x73\x62\x46\xDD\x73\x67\x49\xDD\x73\x67\x4A\xDD\x73\x67\x70\xDD\x73\x67\x72\xDD\x73\x68\x6A\xDD\x73\x68\x71\xDD\x73\x69\x6A\xDD\x73\x69\x71\xDD\x73\x69\x73\xDD\x73\x6A\x41\xDD\x73\x6A\x43\xDD\x73\x6A\x44"
#      define DEPRECATED_OPENING_NON_UTF8_BRACKETS "\x8A\x8B"
#   endif

#   ifdef PERL_IN_REGCOMP_C
#     define MAX_PRINT_A  0xF9   /* The max code point that isPRINT_A */
#   endif
#endif	/* EBCDIC 1047 */

#if 'A' == 193 /* EBCDIC 037 */ \
     && '\\' == 224 && '[' == 186 && ']' == 187 && '{' == 192 && '}' == 208 \
     && '^' == 176 && '~' == 161 && '!' == 90 && '#' == 123 && '|' == 79 \
     && '$' == 91 && '@' == 124 && '`' == 121 && '\n' == 37
#   define LATIN_SMALL_LETTER_LONG_S_UTF8  "\x8E\x72"    /* U+017F */

#   define COMBINING_GRAVE_ACCENT_UTF8  "\xAD\x41"    /* U+0300 */
#   define COMBINING_DOT_ABOVE_UTF8  "\xAD\x48"    /* U+0307 */

#   define LATIN_CAPITAL_LETTER_SHARP_S_UTF8  "\xBF\x62\x71"    /* U+1E9E */

#   define LATIN_SMALL_LIGATURE_LONG_S_T_UTF8  "\xDD\x71\x66\x46"    /* U+FB05 */
#   define LATIN_SMALL_LIGATURE_ST_UTF8  "\xDD\x71\x66\x47"    /* U+FB06 */
#   define LATIN_CAPITAL_LETTER_I_WITH_DOT_ABOVE_UTF8  "\x8C\x57"    /* U+0130 */
#   define LATIN_SMALL_LETTER_DOTLESS_I_UTF8  "\x8C\x58"    /* U+0131 */

#   define HYPHEN_UTF8  "\xCA\x41\x57"    /* U+2010 */
#   define BOM_UTF8_FIRST_BYTE  0xDD    /* U+FEFF */
#   define BOM_UTF8_TAIL  "\x72\x65\x72"    /* U+FEFF */

#   define BOM_UTF8  "\xDD\x72\x65\x72"    /* U+FEFF */

#   define REPLACEMENT_CHARACTER_UTF8  "\xDD\x72\x72\x70"    /* U+FFFD */

#   define MAX_UNICODE_UTF8  "\xEE\x42\x72\x72\x72"    /* U+10FFFF */

#   define NBSP_NATIVE  0x41    /* U+00A0 */
#   define NBSP_UTF8  "\x78\x41"    /* U+00A0 */

#   define DEL_NATIVE  0x07    /* U+007F */
#   define CR_NATIVE  0x0D    /* U+000D */
#   define LF_NATIVE  0x25    /* U+000A */
#   define VT_NATIVE  0x0B    /* U+000B */
#   define ESC_NATIVE  0x27    /* U+001B */
#   define LATIN_SMALL_LETTER_SHARP_S_NATIVE  0x59    /* U+00DF */
#   define LATIN_SMALL_LETTER_SHARP_S_UTF8  "\x80\x72"    /* U+00DF */
#   define LATIN_SMALL_LETTER_A_WITH_RING_ABOVE_NATIVE  0x47    /* U+00E5 */
#   define LATIN_CAPITAL_LETTER_A_WITH_RING_ABOVE_NATIVE  0x67    /* U+00C5 */
#   define LATIN_SMALL_LETTER_Y_WITH_DIAERESIS_NATIVE  0xDF    /* U+00FF */
#   define MICRO_SIGN_NATIVE  0xA0    /* U+00B5 */
#   define MICRO_SIGN_UTF8  "\x78\x63"    /* U+00B5 */

#   ifdef PERL_IN_TOKE_C
       /* Paired characters for quote-like operators, in UTF-8 */
#      define EXTRA_OPENING_UTF8_BRACKETS "\x4D\x4C\xBA\xC0\x78\x52\x78\x69\xB7\x66\x47\xB9\x67\x68\xB9\x67\x6A\xBD\x62\x69\xCA\x41\x66\xCA\x41\x67\xCA\x41\x6A\xCA\x41\x70\xCA\x42\x63\xCA\x42\x64\xCA\x42\x65\xCA\x42\x67\xCA\x42\x68\xCA\x43\x46\xCA\x44\x70\xCA\x45\x54\xCA\x5F\x45\xCA\x5F\x47\xCA\x5F\x49\xCA\x5F\x51\xCA\x5F\x55\xCA\x5F\x57\xCA\x5F\x59\xCA\x5F\x62\xCA\x64\x64\xCA\x64\x66\xCA\x64\x6A\xCA\x65\x47\xCA\x66\x49\xCA\x66\x51\xCA\x67\x4A\xCB\x69\x49\xCB\x69\x51\xCB\x69\x53\xCB\x69\x55\xCB\x69\x57\xCB\x69\x59\xCB\x69\x62\xCB\x71\x46\xCB\x72\x47\xCB\x72\x49\xCB\x72\x51\xCB\x72\x53\xCB\x72\x55\xCC\x53\x44\xCC\x53\x46\xCC\x53\x48\xCC\x53\x4A\xCC\x53\x52\xCC\x53\x54\xCC\x53\x56\xCC\x53\x58\xCC\x53\x5F\xCC\x53\x63\xCC\x53\x65\xCC\x55\x41\xCC\x55\x66\xCC\x55\x68\xCC\x56\x6A\xCC\x5F\x67\xCC\x5F\x69\xCC\x5F\x70\xCC\x5F\x72\xCC\x62\x42\xCC\x62\x44\xCC\x62\x46\xCC\x62\x48\xCC\x62\x4A\xCC\x62\x54\xCC\x62\x63\xCC\x62\x65\xCC\x62\x67\xCC\x62\x69\xCC\x62\x70\xCC\x62\x72\xCC\x63\x42\xCC\x63\x47\xCC\x63\x49\xCC\x65\x65\xCC\x65\x67\xCD\x57\x43\xCD\x57\x44\xCD\x57\x45\xCD\x57\x46\xCD\x57\x4A\xCD\x57\x51\xCD\x57\x53\xCD\x57\x54\xCD\x57\x58\xCD\x57\x6A\xCD\x57\x70\xCD\x58\x41\xCD\x58\x42\xCD\x58\x43\xCD\x58\x45\xCD\x58\x47\xCD\x58\x49\xCD\x58\x64\xCD\x59\x43\xCD\x59\x63\xCD\x59\x65\xCD\x59\x67\xCD\x59\x69\xCE\x41\x49\xCE\x41\x51\xCE\x41\x53\xCE\x41\x55\xCE\x41\x57\xCE\x41\x62\xCE\x41\x64\xCE\x41\x66\xCE\x41\x68\xCE\x41\x70\xDD\x51\x55\x42\xDD\x72\x4A\x71\xDD\x72\x59\x67\xDD\x72\x59\x69\xDD\x72\x59\x70\xDD\x72\x5F\x45\xDD\x72\x66\x49\xDD\x72\x66\x6A\xDD\x72\x67\x69\xDD\x72\x68\x69\xDD\x72\x68\x72\xDD\x72\x69\x43"
#      define EXTRA_CLOSING_UTF8_BRACKETS "\x5D\x6E\xBB\xD0\x78\x69\x78\x52\xB7\x66\x48\xB9\x67\x69\xB9\x67\x70\xBD\x62\x6A\xCA\x41\x67\xCA\x41\x66\xCA\x41\x70\xCA\x41\x6A\xCA\x42\x59\xCA\x42\x5F\xCA\x42\x62\xCA\x42\x68\xCA\x42\x67\xCA\x43\x47\xCA\x44\x71\xCA\x45\x55\xCA\x5F\x46\xCA\x5F\x48\xCA\x5F\x4A\xCA\x5F\x52\xCA\x5F\x56\xCA\x5F\x58\xCA\x5F\x5F\xCA\x5F\x63\xCA\x64\x65\xCA\x64\x67\xCA\x64\x70\xCA\x65\x48\xCA\x66\x4A\xCA\x66\x52\xCA\x67\x51\xCB\x69\x4A\xCB\x69\x52\xCB\x69\x54\xCB\x69\x56\xCB\x69\x58\xCB\x69\x5F\xCB\x69\x63\xCB\x71\x47\xCB\x72\x48\xCB\x72\x4A\xCB\x72\x52\xCB\x72\x54\xCB\x72\x56\xCC\x53\x45\xCC\x53\x47\xCC\x53\x49\xCC\x53\x51\xCC\x53\x53\xCC\x53\x57\xCC\x53\x55\xCC\x53\x59\xCC\x53\x62\xCC\x53\x64\xCC\x53\x66\xCC\x55\x42\xCC\x55\x67\xCC\x55\x69\xCC\x56\x70\xCC\x5F\x68\xCC\x5F\x6A\xCC\x5F\x71\xCC\x62\x41\xCC\x62\x43\xCC\x62\x45\xCC\x62\x47\xCC\x62\x49\xCC\x62\x51\xCC\x62\x55\xCC\x62\x64\xCC\x62\x66\xCC\x62\x68\xCC\x62\x6A\xCC\x62\x71\xCC\x63\x41\xCC\x63\x43\xCC\x63\x48\xCC\x63\x4A\xCC\x65\x66\xCC\x65\x68\xCD\x57\x44\xCD\x57\x43\xCD\x57\x46\xCD\x57\x45\xCD\x57\x51\xCD\x57\x4A\xCD\x57\x54\xCD\x57\x53\xCD\x57\x57\xCD\x57\x70\xCD\x57\x6A\xCD\x58\x42\xCD\x58\x41\xCD\x58\x44\xCD\x58\x46\xCD\x58\x48\xCD\x58\x4A\xCD\x58\x65\xCA\x41\x71\xCD\x59\x64\xCD\x59\x66\xCD\x59\x68\xCD\x59\x6A\xCE\x41\x4A\xCE\x41\x52\xCE\x41\x54\xCE\x41\x56\xCE\x41\x58\xCE\x41\x63\xCE\x41\x65\xCE\x41\x67\xCE\x41\x69\xCE\x41\x71\xDD\x51\x55\x43\xDD\x72\x4A\x72\xDD\x72\x59\x68\xDD\x72\x59\x6A\xDD\x72\x59\x71\xDD\x72\x5F\x46\xDD\x72\x66\x4A\xDD\x72\x66\x71\xDD\x72\x67\x70\xDD\x72\x68\x70\xDD\x72\x69\x41\xDD\x72\x69\x44"

       /* And not in UTF-8 */
#      define EXTRA_OPENING_NON_UTF8_BRACKETS "\x4D\x4C\xBA\xC0\x8A\x8B"
#      define EXTRA_CLOSING_NON_UTF8_BRACKETS "\x5D\x6E\xBB\xD0\x8B\x8A"

       /* And what's deprecated */
#      define DEPRECATED_OPENING_UTF8_BRACKETS "\x78\x52\x78\x69\x78\x69\xB7\x66\x47\xB7\x66\x48\xB9\x67\x68\xB9\x67\x69\xB9\x67\x6A\xB9\x67\x70\xBD\x62\x69\xBD\x62\x6A\xCA\x41\x66\xCA\x41\x67\xCA\x41\x67\xCA\x41\x6A\xCA\x41\x70\xCA\x41\x70\xCA\x42\x63\xCA\x42\x59\xCA\x42\x64\xCA\x42\x5F\xCA\x42\x65\xCA\x42\x62\xCA\x42\x67\xCA\x42\x68\xCA\x42\x68\xCA\x43\x46\xCA\x43\x47\xCA\x44\x70\xCA\x44\x71\xCA\x45\x54\xCA\x45\x55\xCA\x5F\x45\xCA\x5F\x46\xCA\x5F\x47\xCA\x5F\x48\xCA\x5F\x49\xCA\x5F\x4A\xCA\x5F\x51\xCA\x5F\x52\xCA\x5F\x55\xCA\x5F\x56\xCA\x5F\x57\xCA\x5F\x58\xCA\x5F\x59\xCA\x5F\x5F\xCA\x5F\x62\xCA\x5F\x63\xCA\x64\x64\xCA\x64\x65\xCA\x64\x66\xCA\x64\x67\xCA\x64\x6A\xCA\x64\x70\xCA\x65\x47\xCA\x65\x48\xCA\x66\x49\xCA\x66\x4A\xCA\x66\x51\xCA\x66\x52\xCA\x67\x4A\xCA\x67\x51\xCB\x69\x49\xCB\x69\x4A\xCB\x69\x51\xCB\x69\x52\xCB\x69\x53\xCB\x69\x54\xCB\x69\x55\xCB\x69\x56\xCB\x69\x57\xCB\x69\x58\xCB\x69\x59\xCB\x69\x5F\xCB\x69\x62\xCB\x69\x63\xCB\x71\x46\xCB\x71\x47\xCB\x72\x47\xCB\x72\x48\xCB\x72\x49\xCB\x72\x4A\xCB\x72\x51\xCB\x72\x52\xCB\x72\x53\xCB\x72\x54\xCB\x72\x55\xCB\x72\x56\xCC\x53\x44\xCC\x53\x45\xCC\x53\x46\xCC\x53\x47\xCC\x53\x48\xCC\x53\x49\xCC\x53\x4A\xCC\x53\x51\xCC\x53\x52\xCC\x53\x53\xCC\x53\x54\xCC\x53\x57\xCC\x53\x56\xCC\x53\x55\xCC\x53\x58\xCC\x53\x59\xCC\x53\x5F\xCC\x53\x62\xCC\x53\x63\xCC\x53\x64\xCC\x53\x65\xCC\x53\x66\xCC\x55\x41\xCC\x55\x42\xCC\x55\x66\xCC\x55\x67\xCC\x55\x68\xCC\x55\x69\xCC\x56\x6A\xCC\x56\x70\xCC\x5F\x67\xCC\x5F\x68\xCC\x5F\x69\xCC\x5F\x6A\xCC\x5F\x70\xCC\x5F\x71\xCC\x5F\x72\xCC\x62\x41\xCC\x62\x42\xCC\x62\x43\xCC\x62\x44\xCC\x62\x45\xCC\x62\x46\xCC\x62\x47\xCC\x62\x48\xCC\x62\x49\xCC\x62\x4A\xCC\x62\x51\xCC\x62\x54\xCC\x62\x55\xCC\x62\x63\xCC\x62\x64\xCC\x62\x65\xCC\x62\x66\xCC\x62\x67\xCC\x62\x68\xCC\x62\x69\xCC\x62\x6A\xCC\x62\x70\xCC\x62\x71\xCC\x62\x72\xCC\x63\x41\xCC\x63\x42\xCC\x63\x43\xCC\x63\x47\xCC\x63\x48\xCC\x63\x49\xCC\x63\x4A\xCC\x65\x65\xCC\x65\x66\xCC\x65\x67\xCC\x65\x68\xCD\x57\x43\xCD\x57\x44\xCD\x57\x44\xCD\x57\x45\xCD\x57\x46\xCD\x57\x46\xCD\x57\x4A\xCD\x57\x51\xCD\x57\x51\xCD\x57\x53\xCD\x57\x54\xCD\x57\x54\xCD\x57\x58\xCD\x57\x57\xCD\x57\x6A\xCD\x57\x70\xCD\x57\x70\xCD\x58\x41\xCD\x58\x42\xCD\x58\x42\xCD\x58\x43\xCD\x58\x44\xCD\x58\x45\xCD\x58\x46\xCD\x58\x47\xCD\x58\x48\xCD\x58\x49\xCD\x58\x4A\xCD\x58\x64\xCD\x58\x65\xCD\x59\x43\xCA\x41\x71\xCD\x59\x63\xCD\x59\x64\xCD\x59\x65\xCD\x59\x66\xCD\x59\x67\xCD\x59\x68\xCD\x59\x69\xCD\x59\x6A\xCE\x41\x49\xCE\x41\x4A\xCE\x41\x51\xCE\x41\x52\xCE\x41\x53\xCE\x41\x54\xCE\x41\x55\xCE\x41\x56\xCE\x41\x57\xCE\x41\x58\xCE\x41\x62\xCE\x41\x63\xCE\x41\x64\xCE\x41\x65\xCE\x41\x66\xCE\x41\x67\xCE\x41\x68\xCE\x41\x69\xCE\x41\x70\xCE\x41\x71\xDD\x51\x55\x42\xDD\x51\x55\x43\xDD\x72\x4A\x71\xDD\x72\x4A\x72\xDD\x72\x59\x67\xDD\x72\x59\x68\xDD\x72\x59\x69\xDD\x72\x59\x6A\xDD\x72\x59\x70\xDD\x72\x59\x71\xDD\x72\x5F\x45\xDD\x72\x5F\x46\xDD\x72\x66\x49\xDD\x72\x66\x4A\xDD\x72\x66\x6A\xDD\x72\x66\x71\xDD\x72\x67\x69\xDD\x72\x67\x70\xDD\x72\x68\x69\xDD\x72\x68\x70\xDD\x72\x68\x72\xDD\x72\x69\x41\xDD\x72\x69\x43\xDD\x72\x69\x44"
#      define DEPRECATED_OPENING_NON_UTF8_BRACKETS "\x8A\x8B"
#   endif

#   ifdef PERL_IN_REGCOMP_C
#     define MAX_PRINT_A  0xF9   /* The max code point that isPRINT_A */
#   endif
#endif	/* EBCDIC 037 */

/* The number of code points not matching \pC */
#ifdef PERL_IN_REGCOMP_C
#  define NON_OTHER_COUNT  144534
#endif

/* The highest code point that has any type of case change */
#ifdef PERL_IN_UTF8_C
#  define HIGHEST_CASE_CHANGING_CP  0x1E943
#endif

#endif /* PERL_UNICODE_CONSTANTS_H_ */

/* ex: set ro: */
