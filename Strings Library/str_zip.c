//
//  str_zip.c
//  Strings Library
//
//  Created by Connor Crawford on 10/29/15.
//  Copyright © 2015 Connor Crawford. All rights reserved.
//

#include "my_string.h"

char *str_zip(char *s1, char *s2) {
    if (!s1 || !s2)
        return NULL;
    int i, j, k, s1Len = 0, s2Len = 0, newLen;
    // Get lengths of two input strings
    while (s1[s1Len] != '\0')
        s1Len++;
    while (s2[s2Len] != '\0')
        s2Len++;
    // Find new length from the total of the two
    newLen = s1Len + s2Len + 1;
    char *new = (char *)malloc(sizeof(char) * newLen);
    if (new == NULL)
        return NULL;
    new[newLen - 1] = '\0';
    for (i = 0, j = 0, k = 0; i < newLen; i++) {
        if (i % 2 == 0 || k >= s2Len) {
            new[i] = s1[j];
            j++;
        } else if (i % 2 == 1 || j >= s1Len){
            new[i]=  s2[k];
            k++;
        }
    }
    return new;
}