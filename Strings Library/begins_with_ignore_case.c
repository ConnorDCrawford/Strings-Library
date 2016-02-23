//
//  begins_with_ignore_case.c
//  Strings Library
//
//  Created by Connor Crawford on 10/29/15.
//  Copyright © 2015 Connor Crawford. All rights reserved.
//

#include "my_string.h"

int begins_with_ignore_case(char *s, char *pre) {
    if (!s || !pre)
        return -1;
    int i, sLen = 0, preLen = 0;
    // Get length
    while (s[sLen++] != '\0');
    sLen--;
    while (pre[preLen++] != '\0');
    preLen--;
    if (preLen > sLen)
        return -1;
    for (i = 0; i < preLen; i++) {
        if (s[i] != pre[i])
            return 0;
    }
    return 1;
}

