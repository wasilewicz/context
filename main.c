#include <stdlib.h>
#include <stdio.h>

#include "Number.h"

int main()
{
    struct Number* n = Number_Init(5);

    int tmp = n->get_i(n);

    printf("%d \n", tmp);

    Number_Destroy(n);
}
