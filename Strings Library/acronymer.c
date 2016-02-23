//
//  acronymer.c
//  Strings Library
//
//  Created by Connor Crawford on 10/29/15.
//  Copyright © 2015 Connor Crawford. All rights reserved.
//

#include "my_string.h"

char *acronymer(char *s) {
    if (!s)
        return NULL;
    char *t = s;
    int i = 0, len = 0;
    
    if (*t != '\0' || *t != ' ')
        len++;
    while (*t != '\0') {
        if (*t == ' ') {
            t++;
            if (*t != '\0' || *t != ' ')
                len++;
        }
        t++;
    }
    len++;
    t = s;
    char *new = (char *)malloc(sizeof(char) * len);
    if (new == NULL)
        return NULL;
    if (*t != '\0' || *t != ' ') {
        new[i] = *t;
        i++;
    }
    while (*t != '\0') {
        if (*t == ' ') {
            t++;
            if (*t != '\0' || *t != ' ') {
                new[i] = *t;
                i++;
            }
        }
        t++;
    }
    new[len - 1] = '\0';
    return new;
}