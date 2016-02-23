//
//  str_chop.c
//  Strings Library
//
//  Created by Connor Crawford on 10/29/15.
//  Copyright © 2015 Connor Crawford. All rights reserved.
//

#include "my_string.h"

char **str_chop(char *s, char c) {
    if (!s)
        return NULL;
    int s1Len = 0, s3Len = 0, i;
    while (*(s + s1Len) != c) {
        s1Len++;
        if (*(s + s1Len) == '\0') {
            char **strs = (char **)malloc(sizeof(char *) * 3);
            if (strs == NULL)
                return NULL;
            *strs = NULL;
            *(strs + 1) = NULL;
            *(strs + 2) = NULL;
            return strs;
        }
    }
    while (*(s+ s1Len + s3Len) != '\0')
        s3Len++;
    s3Len--;
    
    char *s1 = (char *)malloc(sizeof(char) * (s1Len + 1));
    if (s1 == NULL)
        return NULL;
    
    char *s2 = (char *)malloc(sizeof(char) + 1);
    if (s2 == NULL)
        return NULL;
    *s2 = c;
    
    char *s3 = (char *)malloc(sizeof(char) * (s3Len + 1));
    if (s3 == NULL)
        return NULL;
    
    char **strs = (char **)malloc(sizeof(char *) * 3);
    if (strs == NULL)
        return NULL;
    
    for (i = 0; i < s1Len; i++)
        *(s1 + i) = *(s + i);
    *(s1 + i) = '\0';
    for (i = 0; i < s3Len; i++)
        *(s3 + i) = *(s + s1Len + 1 + i);
    *(s3 + i) = '\0';
    
    *strs = s1;
    *(strs + 1) = s2;
    *(strs + 2) = s3;
    return strs;
}
