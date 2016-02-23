//
//  str_connect.c
//  Strings Library
//
//  Created by Connor Crawford on 10/29/15.
//  Copyright © 2015 Connor Crawford. All rights reserved.
//

#include "my_string.h"

char *str_connect(char **strs, int n, char c) {
    if (!strs)
        return NULL;
    int i, j, k;
    int newLen = 0;
    for (i = 0; i < n; i++) {
        char *t = strs[i];
        for (j = 0; *(t + j) != '\0'; j++)
            newLen++;
        newLen++;
    }
    char *new = (char *)malloc(sizeof(char) * newLen);
    if (new == NULL)
        return NULL;
    for (i = 0, k = 0; i < n; i++) {
        char *t = strs[i];
        for (j = 0; *(t + j) != '\0'; j++, k++)
            *(new + k) = *(t + j);
        *(new + k++) = c;
    }
    *(new + k - 1) = '\0';
    return new;
}
