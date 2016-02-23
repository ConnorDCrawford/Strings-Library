//
//  intersect.c
//  Strings Library
//
//  Created by Connor Crawford on 10/29/15.
//  Copyright © 2015 Connor Crawford. All rights reserved.
//

#include "my_string.h"

char *intersect(char *s1, char *s2) {
    if (!s1 || !s2)
        return NULL;
    int i, j, len = 0;
    // Array of used chars
    char used[256];
    for (i = 0; i < 256; i++)
        used[i] = 0;
    // List of characters used in s1
    for (i = 0; s1[i] != '\0'; i++)
        used[s1[i]] = 1;
    
    // Compare characters used in s1 to those in s2
    for (i = 0; s2[i] != '\0'; i++) {
        if (used[s2[i]] == 1) {
            used[s2[i]]++;
            len++;
        }
    }
    if (len == 0)
        return NULL;
    
    char *new = (char *)malloc(sizeof(char) * (len + 1));
    if (new == NULL)
        return NULL;
    // Add characters used by both to the new string
    for (i = 0, j = 0; i < 256; i++) {
        if (used[i] > 1)
            new[j++] = i;
    }
    new[j] = '\0';
    return new;
}
