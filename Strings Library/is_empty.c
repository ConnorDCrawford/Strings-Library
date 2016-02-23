//
//  is_empty.c
//  Strings Library
//
//  Created by Connor Crawford on 10/29/15.
//  Copyright © 2015 Connor Crawford. All rights reserved.
//

#include "my_string.h"

int is_empty(char *s){
    if (!s)
        return 1;
    char *t = s;
    while (*t != '\0') {
        if (*t != '\0' && *t != ' ')
            return 0;
        t++;
    }
    return 1;
}