#pragma once

#include <stdlib.h>

typedef struct Number_CTX CTX;

struct Number
{
    CTX* ctx;

    int (*get_i) (struct Number* self);
};

struct Number* Number_Init(int i);

void Number_Destroy(struct Number* self);
