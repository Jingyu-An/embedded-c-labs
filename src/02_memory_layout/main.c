#include "common.h"
#include "memory_layout.h"

int main(void) {
    LOG_INFO("embedded-c-labs: 02_memory_layout");

    show_stack_heap_static();
    show_struct_layout();

    return 0;
}