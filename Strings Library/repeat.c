//
//  repeat.c
//  Strings Library
//
//  Created by Connor Crawford on 10/29/15.
//  Copyright © 2015 Connor Crawford. All rights reserved.
//

#include "my_string.h"

char *repeat(char *s, int x, char sep) {
    if (!s)
        return NULL;
    int i, j, k, len = 0, newLen = 0;
    while (s[len] != '\0')
        len++;
    newLen = (len * x) + x + 1;
    char *new = (char *)malloc(sizeof(char) * newLen);
    if (new == NULL)
        return NULL;
    for (i = 0, k = 0; i < x; i++) {
        for (j = 0; j < len; j++)
            new[k++] = s[j];
        new[k++] = sep;
    }
    new[k - 1] = '\0';
    return new;
}