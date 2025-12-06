# Lab 02 — Memory Layout

This lab demonstrates where different kinds of variables reside in memory:
- stack (local)
- heap (malloc)
- static/global
- how struct alignment affects memory layout

---

## 1. Memory Region Observation

Example output:
```c
[INFO] stack_v  : &stack_v = 0x16f312dbc
[INFO] heap_v   : heap_v   = 0x101239a90
[INFO] g_static_v = 0x100af4000
```

Interpretation:
- stack address is the highest
- heap grows upward from a lower region
- static/global lives near the program image

This matches the typical process memory layout.

---

## 2. Struct Layout & Alignment

Example:

```c
struct layout_sample {
    int i;
    char c;
    double d;
};
```
Observed:
```c
sizeof(...) = 16
i offset = 0
c offset = 4
d offset = 8
```

Reason:
	•	compiler inserts padding to satisfy alignment
	•	ensures efficient CPU access and correct memory transactions
	•	common in embedded/BSP code

---

3. Key Points
	•	Stack/heap/static have predictable address patterns.
	•	Struct fields may not be tightly packed due to padding.
	•	Field order affects actual memory footprint.
	•	Proper alignment is important for:
	•	hardware register mapping
	•	DMA buffers
	•	performance-sensitive code

---

4. Notes
	•	Later labs may test packed structs and misaligned access.
	•	Add comparison results between x86 and ARM.
