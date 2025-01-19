#pragma once
#include <stdint.h>
#include <stddef.h>


typedef uint8_t utf8_t; // The type of a single UTF-8 character
typedef uint16_t utf16_t; // The type of a single UTF-16 character

/*
 * Converts a UTF-16 string to a UTF-8 string.
 *
 * utf16:
 * The UTF-16 string, not null-terminated.
 *
 * utf16_len:
 * The length of the UTF-16 string, in 16-bit characters.
 *
 * utf8:
 * The buffer where the resulting UTF-8 string will be stored.
 *
 * utf8_len:
 * The length of the UTF-8 buffer, in 8-bit characters.
 *
 * return:
 * The number of characters written to the utf8 buffer.
 *
 */
size_t utf16_to_utf8(
    utf16_t const* utf16, size_t utf16_len,
    utf8_t* utf8,         size_t utf8_len
);

/*
 * Calculates the required UTF-8 buffer size to store the
 * converted UTF-16 string.
 *
 * utf16:
 * The UTF-16 string, not null-terminated.
 *
 * utf16_len:
 * The length of the UTF-16 string, in 16-bit characters.
 *
 * return:
 * The size of the required UTF-8 buffer, in 8-bit characters.
 *
 */
size_t utf16_to_utf8_size(
    utf16_t const* utf16, size_t utf16_len
);

/*
 * Converts a UTF-8 string to a UTF-16 string.
 *
 * utf8:
 * The UTF-8 string, not null-terminated.
 *
 * utf8_len:
 * The length of the UTF-8 string, in 8-bit characters.
 *
 * utf16:
 * The buffer where the resulting UTF-16 string will be stored.
 *
 * utf16_len:
 * The length of the UTF-16 buffer, in 16-bit characters.
 *
 * return:
 * The number of characters written to the utf8 buffer, in
 * 16-bit characters.
 *
 */
size_t utf8_to_utf16(
    utf8_t const* utf8, size_t utf8_len,
    utf16_t* utf16,     size_t utf16_len
);

/*
 * Calculates the required UTF-16 buffer size to store the
 * converted UTF-8 string.
 *
 * utf8:
 * The UTF-8 string, not null-terminated.
 *
 * utf8_len:
 * The length of the UTF-8 string, in 8-bit characters.
 *
 * return:
 * The size of the required UTF-16 buffer, in 16-bit characters.
 *
 */
size_t utf8_to_utf16_size(
    utf8_t const* utf8, size_t utf8_len
);
