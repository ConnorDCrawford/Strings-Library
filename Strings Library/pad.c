//
//  pad.c
//  Strings Library
//
//  Created by Connor Crawford on 10/29/15.
//  Copyright © 2015 Connor Crawford. All rights reserved.
//

#include "my_string.h"

char *pad(char *s, int d) {
    if (!s)
        return NULL;
    char *t = s;
    int i, len = 0;
    
    // Get length
    while (*t != '\0') {
        t++;
        len++;
    }
    t -= len;
    
    int a = (int)ceil((double)len/d);
    if ((a * d) % 2 == 1)
        a++;
    d *= a;
    char *new = (char *)malloc(sizeof(char) * (d + 1));
    if (new == NULL)
        return NULL;
    for (i = 0; i < d; i++) {
        if (i < len)
            new[i] = s[i];
        else
            new[i] = ' ';
    }
    new[i] = '\0';
    return new;
}
