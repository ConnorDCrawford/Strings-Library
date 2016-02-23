//
//  str_chop_all.c
//  Strings Library
//
//  Created by Connor Crawford on 10/29/15.
//  Copyright © 2015 Connor Crawford. All rights reserved.
//

#include "my_string.h"

char **str_chop_all(char *s, char c) {
    if (!s)
        return NULL;
    char *t = s;
    int i = 0, numStrs = 1;
    while (s[i++] != '\0') {
        if (s[i] == c)
            numStrs++;
    }
    char **strs = (char **)malloc(sizeof(char*) * (numStrs + 1));
    if (strs == NULL)
        return NULL;
    for (i = 0; i < numStrs - 1; i++) {
        char **temp = str_chop(t, c);
        strs[i] = temp[0];
        t = temp[2];
        if (i == numStrs - 2)
            strs[++i] = t;
    }
    strs[numStrs] = NULL;
    return strs;
}