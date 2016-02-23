//
//  take.c
//  Strings Library
//
//  Created by Connor Crawford on 10/29/15.
//  Copyright © 2015 Connor Crawford. All rights reserved.
//

#include "my_string.h"

void take(char *s, int n) {
    if (!s)
        return;
    char *t = s;
    int len = 0;
    while (*t != '\0') {
        t++;
        len++;
    }
    if (len < n)
        return;
    s[n] = '\0';
}
