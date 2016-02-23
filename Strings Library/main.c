//
//  main.c
//  Strings Library
//
//  Created by Connor Crawford on 10/27/15.
//  Copyright © 2015 Connor Crawford. All rights reserved.
//

#include "my_string.h"

int main(int argc, const char * argv[]) {
    
    // Testing remove_line_end
    char test[] = "This has a trailing newline.\n";
    printf("Testing remove_line_end\nBefore: %s\n\n", test);
    remove_line_end(test);
    printf("After: %s\n", test);
    
    // Testing index_of
    char *p = "This is a test";
    printf("\nTesting index_of\nString: \"%s\"\nSearching for: \"%s\"\n", p, "a test");
    printf("Index: %d\n", index_of(p, "a test"));
    
    // Testing address_of
    printf("\nTesting address_of\nString: \"%s\"\nSearching for: \"%s\"\n", p, "a test");
    p = address_of(p, "a test");
    printf("Address: %zd\nValue at address: %c\n", p, *p);
    
    // Testing is_empty
    p = "   ";
    printf("\nTesting is_empty\nString: \"%s\"\n", p);
    printf("Is empty = %d\n", is_empty(p));
    
    // Testing str_zip
    printf("\nTesting str_zip\ns1: \"%s\"\ns2: \"%s\"\n", "Spongebob", "Patrick");
    printf("Out: \"%s\"\n", str_zip("Spongebob", "Patrick"));
    
    // Testing acronymer
    printf("\nTesting acronymer\nString: \"%s\"\nOut: \"%s\"\n", "Royal Australian Air Force",
           acronymer("Royal Australian Air Force"));
    
    // Testing strcmp_ign_case
    printf("\nTesting acronymer\ns1: \"%s\"\ns2: \"%s\"\nIs before: %d\n", "Cats", "Dogs", strcmp_ign_case("Cats", "Dogs"));
    
    // Testing take
    char test1[] = "Brubeck";
    printf("\nTesting take\nOriginal: \"%s\"\nn = %d\n", test1, 5);
    take(test1, 5);
    printf("Out: \"%s\"\n", test1);
    
    // Testing take_last
    char test2[] = "Brubeck";
    printf("\nTesting take_last\nOriginal: \"%s\"\nn = %d\n", test2, 5);
    take_last(test2, 5);
    printf("Out: \"%s\"\n", test2);
    
    // Testing dedup
    printf("\nTesting dedup\nOriginal: \"%s\"\nOut: \"%s\"\n",
           "There's always money in the banana stand.",
           dedup("There's always money in the banana stand."));
    
    // Tesitng pad
    printf("\nTesting pad\nOriginal: \"%s\"\nn = 13\nOut: \"%s\"\n","There's always money in the banana stand.", pad("There's always money in the banana stand.", 13));
    
    // Testing begins_with_ignore_case
    printf("\nTesting begins_with_ignore_case\nOriginal: \"%s\"\nPrefix: \"pre\"\nIs prefix = %d\n", "prefix", begins_with_ignore_case("prefix", "pre"));
    
    // Testing ends_with_ignore_case
    printf("\nTesting ends_with_ignore_case\nOriginal: \"%s\"\nSuffix: \"fix\"\nIs suffix = %d\n", "suffix", ends_with_ignore_case("suffix", "fix"));
    
    // Testing repeat
    printf("\nTesting repeat\nOriginal: \"%s\"\nn = 3, sep = ','\nOut: \"%s\"\n", "all right", repeat("all right", 3, ','));
    
    // Testing intersect
    printf("\nTesting intersect\n");
    printf("s1 = \"%s\", s2 = \"%s\"\n", "ABCDE", "BCDHJI");
    printf("Out: \"%s\"\n", intersect("ABCDE", "BCDHJI"));
    
    // Testing str_connect
    char *strc[3] = {"Washington", "Adams", "Jefferson"};
    printf("\nTesting str_connect\n");
    printf("s1 = \"%s\", s2 = \"%s\", s3 = \"%s\"\n", "Washington", "Adams", "Jefferson");
    printf("Out: \"%s\"\n", str_connect(strc, 3, '+'));
    
    // Testing str_chop
    char **strs;
    printf("\nTesting str_chop\n");
    printf("In: \"%s\"\nsep = '+'\n", "Kanye+Tay Tay");
    printf("Out (separated by newline):\n");
    strs = str_chop("Kanye+Tay Tay", '+');
    int i;
    for (i = 0; strs[i] != NULL; i++) {
        char *t = strs[i];
        printf("%s\n", t);
    }
    
    printf("\nTesting str_chop_all\n");
    printf("In: \"%s\"\ndel = ' '\n", "I am ready for a nice vacation");
    printf("Out (separated by newline):\n");
    strs = str_chop_all("I am ready for a nice vacation", ' ');
    for (i = 0; strs[i] != NULL; i++) {
        char *t = strs[i];
        printf("%s\n", t);
    }
    return 0;
}