//
//  my_string.h
//  Strings Library
//
//  Created by Connor Crawford on 10/29/15.
//  Copyright © 2015 Connor Crawford. All rights reserved.
//

#ifndef my_string_h
#define my_string_h

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

// removes any trailing newline characters from s if they exist
void remove_line_end(char *s);

// returns the index of the first occurence of n in the string h or -1 if it isn't found.
int index_of(char *h, char *n);

// returns a pointer to the first occurence of n in the string h or NULL if it isn't found
char *address_of(char *h, char *n);

// returns 1 if s is NULL, consists of only the null character ('') or only whitespace. returns 0 otherwise
int is_empty(char *s);

/*
 * Returns a new string consisting of all of the characters of s1 and s2 interleaved with each other.
 * For example, if s1 is "Spongebob" and s2 is "Patrick", the function returns the string "SPpaotnrgiecbkob"
 */
char *str_zip(char *s1, char *s2);


/*
 * returns a new string which is an acronym of the words in s. For example, if s is the string Royal Australian Air Force, the
 * function returns the string RAAF
 */
char *acronymer(char *s);

/*
 * Compares s1 and s2 ignoring case. Returns a positive number if s1 would appear after s2 in the dictionary, a negative number
 * if it would appear before s2, or 0 if the two are equal.
 */
int strcmp_ign_case(char *s1, char *s2);

/*
 * Modifies s so that it is truncated to n characters. If n is ≥ the length of s, the original string is unmodified.
 * For example if we call take("Brubeck" 5), when the function finishes, the original string becomes "Brube"
 */
void take(char *s, int n);

/*
 * Modifies s so that it consists of only its last n characters.
 * If n is ≥ the length of s, the original string is unmodified.
 * For example if we call take_last("Brubeck" 5), when the function finishes,
 * the original string becomes "ubeck" void take_last(char *s, int n);
 */
void take_last(char *s, int n);

/*
 * returns a new string based on s, but without any duplicate characters.
 * For example, if s is the string, "There's always money in the banana stand.",
 * the function returns the string "Ther's alwymonitbd.". It is up to the caller to free the memory allocated by the function.
 */
char *dedup(char *s);

/*
 * returns a new string consisting of all of the letters of s,
 * but padded with spaces at the end so that the total length of the returned string is an even multiple of d.
 */
char *pad(char *s, int d);

// returns 1 if pre is a prefix of s ignoring case or 0 otherwise.
int begins_with_ignore_case(char *s, char *pre);

// returns 1 if suff is a suffix of s ignoring case or 0 otherwise.
int ends_with_ignore_case(char *s, char *suff);

// Returns a new string consisting of the characters in s repeated x times, with the character sep in between.
char *repeat(char *s, int x, char sep);

// returns a new string consisting of the intersection of the characters in s1 and s2, NO DUPS
char *intersect(char *s1, char *s2);

// Returns a string consisting of the first n strings in strs with the character c used as a separator
char *str_connect(char **strs, int n, char c);

/*
 * Returns an array of 3 strings consisting of the characters in s:
 * The first string consists of the characters of s before c, the second string consists solely of c itself,
 * and the third string consists of the letters that follow c in s.
 */
char **str_chop(char *s, char c);

/*
 * Returns an array of string consisting of the characters in s split into tokens based on the delimeter c,
 * followed by a NULL pointer.
 */
char **str_chop_all(char *s, char c);


#endif /* my_string_h */
