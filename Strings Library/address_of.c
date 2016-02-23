//
//  address_of.c
//  Strings Library
//
//  Created by Connor Crawford on 10/29/15.
//  Copyright © 2015 Connor Crawford. All rights reserved.
//

#include "my_string.h"

char *address_of(char *h, char *n) {
    if (!h || !n)
        return NULL;
    char *t = h;
    int i, j;
    for (i = 0; t[i] != n[0]; i++) {
        if (t[i] == '\0')
            return NULL;
    }
    t += i;
    for (j = 0; n[j] != '\0'; j++) {
        if (t[j] != n[j]) {
            return address_of(++t, n);
        }
    }
    return t;
}