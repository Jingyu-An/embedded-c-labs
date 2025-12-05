#include "common.h"
#include "pointer_examples.h"

void basic_pointer_demo(void) {
    LOG_INFO("--- basic_pointer_demo ---");

    int value = 50;
    int *p = &value;

    LOG_INFO("value = %d", value);
    LOG_INFO("&value= %p", (void *)&value);
    LOG_INFO("ptr   = %p", (void *)p);
    LOG_INFO("*ptr  = %d", *p);
}

void array_vs_pointer_demo(void) {
    LOG_INFO("--- array_vs_pointer_demo ---");

    int arr[4]= {4,3,2,1};
    int *p = arr;

    LOG_INFO("sizeof(arr)   = %zu", sizeof(arr));
    LOG_INFO("sizeof(p)     = %zu", sizeof(p));

    for (size_t i = 0; i < 4; i++)
    {
        LOG_INFO("arr[%zu] = %d, *(p + %zu) = %d", i, arr[i], i, *(p +i));
    }
    
}

static int add(int a, int b) {
    return a + b;
}

static int mul(int a, int b) {
    return a * b;
}

void function_pointer_demo(void) {
    LOG_INFO("--- function_pointer_demo ---");

    int (*p)(int, int);

    p = add;
    LOG_INFO("add(2, 3) = %d", p(2, 3));

    p = mul;
    LOG_INFO("mul(3, 4) = %d", p(3, 4));
}


