//
//  remove_line_end.c
//  Strings Library
//
//  Created by Connor Crawford on 10/29/15.
//  Copyright © 2015 Connor Crawford. All rights reserved.
//

#include "my_string.h"

void remove_line_end(char *s) {
    if (!s)
        return;
    char *t = s;
    while (*t != '\0')
        t++;
    while (*t != '\n') {
        if (t == s)
            return;
        t--;
    }
    *t = '\0';
}