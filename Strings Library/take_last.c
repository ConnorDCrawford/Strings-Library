//
//  take_last.c
//  Strings Library
//
//  Created by Connor Crawford on 10/29/15.
//  Copyright © 2015 Connor Crawford. All rights reserved.
//

#include "my_string.h"


void take_last(char *s, int n) {
    if (!s)
        return;
    char *t = s;
    int i, j, len = 0;
    while (*t != '\0') {
        t++;
        len++;
    }
    if (len < n)
        return;
    for (i = 0, j = n; i < n; i++, j--)
        s[i] = s[len - j];
    s[i] = '\0';
}