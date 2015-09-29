#include "Number.h"

static int Number_get_i (struct Number* self);

struct Number_CTX
{
    int i;
};

static int Number_get_i (struct Number* self)
{
    return self->ctx->i;
}
struct Number* Number_Init(int i)
{
    struct Number* self = (struct Number*) malloc(sizeof(struct Number));

    self->ctx = (struct Number_CTX*) malloc(sizeof(struct Number_CTX));

    self->get_i = Number_get_i;

    self->ctx->i = i;

    return self;
}

void Number_Destroy(struct Number* self)
{
    free(self->ctx);
    free(self);
}
