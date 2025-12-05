# 01 — Pointer Basics

This lab introduces **pointers, addresses, array behavior, and function pointers**,  
all of which are foundational concepts in system-level and embedded C.

The goal is not to solve a problem, but to **observe how C behaves at low level**  
and build intuition for memory, addresses, and type size.

---

## 🔧 1. Basic Pointer Demo

### Code Summary
- Create a normal integer (`value`)
- Take its address using `&value`
- Store that address inside a pointer (`int* ptr`)
- Print both address and dereferenced value

### Output
```
[INFO] --- basic_pointer_demo ---
[INFO] value = 50
[INFO] &value= 0x16aecadcc
[INFO] ptr   = 0x16aecadcc
[INFO] *ptr  = 50
```

### What This Shows
- `ptr` contains the **same address** as `&value`
- `*ptr` dereferences the pointer → gives back the integer value (`50`)
- A pointer is simply "a variable that stores a memory address"

---

## 🔧 2. Array vs Pointer Demo

### Code Summary
- Define an integer array: `int arr[4] = {4, 3, 2, 1};`
- Assign pointer to the first element: `int* p = arr;`
- Compare `sizeof(arr)` vs `sizeof(p)`  
- Test array indexing and pointer arithmetic

### Output
```
[INFO] --- array_vs_pointer_demo ---
[INFO] sizeof(arr)   = 16
[INFO] sizeof(p)     = 8
[INFO] arr[0] = 4, *(p + 0) = 4
[INFO] arr[1] = 3, *(p + 1) = 3
[INFO] arr[2] = 2, *(p + 2) = 2
[INFO] arr[3] = 1, *(p + 3) = 1
```

### Key Takeaways
- `sizeof(arr)` = 16 → array is 4 integers × 4 bytes  
- `sizeof(p)` = 8 → pointer is 8 bytes on a 64-bit system  
- Arrays **decay** into pointers when passed to functions  
- Pointer arithmetic jumps by element size  
  - `p + 1` moves 4 bytes forward (because int is 4 bytes)

This is fundamental for understanding **driver code**, where buffers and memory blocks are manipulated by pointer math.

---

## 🔧 3. Function Pointer Demo

### Code Summary
- Create functions `add` and `mul`
- Declare a function pointer
- Assign different functions to it at runtime
- Call through the pointer

### Output
```
[INFO] --- function_pointer_demo ---
[INFO] add(2, 3) = 5
[INFO] mul(3, 4) = 12
```

### Why This Matters
Function pointers are widely used in:
- callbacks  
- interrupt vector tables  
- driver operation tables (`struct file
