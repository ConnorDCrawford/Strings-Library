//
//  index_of.c
//  Strings Library
//
//  Created by Connor Crawford on 10/29/15.
//  Copyright © 2015 Connor Crawford. All rights reserved.
//

#include "my_string.h"

int index_of(char *h, char *n) {
    if (!h || !n)
        return -1;
    char *t = h;
    int i, j;
    for (i = 0; t[i] != n[0]; i++) {
        if (t[i] == '\0')
            return -1;
    }
    t += i;
    for (j = 0; n[j] != '\0'; j++) {
        if (t[j] != n[j]) {
            int r = index_of(++t, n);
            i++;
            if (r != -1)
                return i+r;
            else
                return -1;
        }
    }
    return i;
}