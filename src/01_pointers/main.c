#include "common.h"
#include "pointer_examples.h"


int main(void)
{
    LOG_INFO("embedded-c-labs: 01_pointers");

    basic_pointer_demo();
    array_vs_pointer_demo();
    function_pointer_demo();

    return 0;
}