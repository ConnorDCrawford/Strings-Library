//
//  strcmp_ign_case.c
//  Strings Library
//
//  Created by Connor Crawford on 10/29/15.
//  Copyright © 2015 Connor Crawford. All rights reserved.
//

#include "my_string.h"

int strcmp_ign_case(char *s1, char *s2) {
    if (!s1 || !s2)
        return 0;
    if (*s1 == '\0' || *s2 == '\0')
        return 0;
    else if (tolower(*s1) == tolower(*s2))
        return strcmp_ign_case(++s1, ++s2);
    else if (tolower(*s1) < tolower(*s2))
        return -1;
    else
        return 1;
}