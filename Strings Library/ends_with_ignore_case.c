//
//  ends_with_ignore_case.c
//  Strings Library
//
//  Created by Connor Crawford on 10/29/15.
//  Copyright © 2015 Connor Crawford. All rights reserved.
//

#include "my_string.h"

int ends_with_ignore_case(char *s, char *suff) {
    if (!s || !suff)
        return -1;
    int i, j, sLen = 0, suffLen = 0;
    // Get length
    while (s[sLen++] != '\0');
    sLen--;
    while (suff[suffLen++] != '\0');
    suffLen--;
    if (suffLen > sLen)
        return -1;
    for (i = sLen, j = suffLen; i >= sLen - suffLen; i--, j--) {
        if (s[i] != suff[j])
            return 0;
    }
    return 1;
}