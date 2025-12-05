#ifndef COMMON_H
#define COMMON_H

#include <stdio.h>
#include <stdint.h>
#include <stddef.h>

#define LOG_INFO(fmt, ...) \
    do { fprintf(stdout, "[INFO] " fmt "\n", ##__VA_ARGS__); } while (0)

#define LOG_DEBUG(fmt, ...) \
    do { fprintf(stdout, "[DEBUG] " fmt "\n", ##__VA_ARGS__); } while (0)

#define LOG_ERROR(fmt, ...) \
    do { fprintf(stderr, "[ERROR] " fmt "\n", ##__VA_ARGS__); } while (0)

#endif 
