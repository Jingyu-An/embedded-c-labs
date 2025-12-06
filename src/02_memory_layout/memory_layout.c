#include <stdlib.h>
#include "common.h"
#include "memory_layout.h"

static int g_static_v = 55;

static void print_sp(const char *t) {
    LOG_INFO("---- %s ----", t);
}

void show_stack_heap_static(void) {
    int stack_v = 10;
    int *heap_v = NULL;

    heap_v = (int *)malloc(sizeof(int));
    if (!heap_v)    {
        LOG_ERROR("malloc failed");
        return;
    }

    *heap_v = 10;

    print_sp("stack / heap / static addresses");

    LOG_INFO(" stack_v (stack)  : &stack_v = %p, v = %d", (void *)&stack_v, stack_v);

    LOG_INFO(" heap_v (heap)    : heap_v = %p, *heap_v = %d", (void *)heap_v, *heap_v);

    LOG_INFO(" g_static_v       : &g_static_v = %p, v = %d", (void *)&g_static_v, g_static_v);

    free(heap_v);
}

struct layout_sample {
    int i;
    char c;
    double d;
};

void show_struct_layout(void) {
    struct layout_sample s = {
        .i = 10,
        .c = 'A',
        .d = 9.99
    };

    print_sp("struct layout");

    LOG_INFO("sizeof(struct layout_sample)  = %zu", sizeof(struct layout_sample));
    LOG_INFO("&s                            = %p", (void *)&s);
    LOG_INFO("&s.i (int)                    = %p", (void *)&s.i);
    LOG_INFO("&s.c (char)                   = %p", (void *)&s.c);
    LOG_INFO("&s.d (double)                 = %p", (void *)&s.d);
}
