//
//  dedup.c
//  Strings Library
//
//  Created by Connor Crawford on 10/29/15.
//  Copyright © 2015 Connor Crawford. All rights reserved.
//

#include "my_string.h"


char *dedup(char *s) {
    if (!s)
        return NULL;
    char *t = s;
    char used[256];
    int i, j, len = 0;
    
    // Get length
    while (*t != '\0') {
        t++;
        len++;
    }
    t -= len;
    
    if (len < 2)
        return s;
    
    // Array of used chars
    for (i = 0; i < 256; i++)
        used[i] = 0;
    
    char *new = (char *)malloc(sizeof(char) * len);
    if (new == NULL)
        return NULL;
    
    for (i = 0, j = 0; i < len; i++) {
        if (!used[s[i]]) { // Check if character has been used
            new[j++] = s[i];
            used[s[i]] = !0;
        }
    }
    new[j] = '\0';
    return new;
}