# embedded-c-labs

A collection of small, focused C labs designed to build strong foundations in  
**system-level programming, embedded concepts, and BSP-style coding patterns.**

This repository is not about solving algorithm problems.  
Instead, it explores *how C behaves close to the hardware*, including:

- memory and data layout  
- pointer mechanics  
- stack / heap / static memory  
- struct alignment & padding  
- low-level control flow  
- function pointers & dispatch tables  
- patterns used in device drivers and BSP development  

Each lab is intentionally small, isolated, and fully documented so concepts can be tested,  
observed, and understood clearly.

---

## 📁 Repository Structure

```
embedded-c-labs/
 ├── src/
 │    ├── 01_pointers/       # pointer basics, array vs pointer, function pointers
 │    ├── 02_memory_layout/   # stack/heap/static layout, struct alignment & padding
 │    └── (more labs soon)
 ├── include/
 │    └── common.h           # simple logging and shared helpers
 │    └── 02_memory_layout.md
 ├── docs/
 │    └── 01_pointers.md     # notes, diagrams, and observations for Lab 01
 ├── Makefile
 └── README.md
```

---

## 🚀 Lab Progress

| Lab | Topic | Status |
|------|----------------------------|---------|
| **01** | Pointer basics, arrays vs pointers, function pointers | ✅ Completed |
| **02** | Memory layout (stack/heap/static), struct alignment & padding | ✅ Completed |
| **03** | Packed structs & alignment rules | 🔜 Planned |
| **04** | Simple ring buffer implementation | 🔜 Planned |
| **05** | Minimal task scheduler (embedded-style) | 🔜 Planned |
| **06** | Atomic operations & lock-free patterns | 🔜 Planned |
| **07** | BSP-style dispatch tables | 🔜 Planned |

More labs will be added continuously as learning progresses.

---

## ▶️ Build & Run

All labs share a simple Makefile.

---

### Build:
```sh
make
./bin_pointers
```

Each lab will introduce its own corresponding binary
(e.g., bin_memory_layout for Lab 02).

---

## 🎯 Purpose

This project supports growth toward:
	•	Embedded Linux & system programming
	•	BSP & device driver fundamentals
	•	Understanding AAOS-style HAL → driver → kernel interactions
	•	Writing deterministic, hardware-aware C code

The goal is to observe how C interacts with memory and hardware-like patterns,
similar to what embedded systems and kernel code must handle.


---

## 📝 Documentation

Every lab includes documentation covering:
	•	goals
	•	code behavior
	•	memory diagrams / struct alignment diagrams
	•	output logs
	•	investigation notes
	•	key learnings
	•	ideas for next labs

Example:

```
docs/
 ├── 01_pointers.md
 └── 02_memory_layout.md
```

This documentation acts as a long-term study reference for embedded/BSP development.

---

📌 Status Summary

Lab 01 — Pointers

Includes:
	•	pointer basics
	•	dereferencing & address inspection
	•	arrays vs pointers
	•	function pointers & dispatch tables

Lab 02 — Memory Layout

Includes:
	•	stack vs heap vs static memory
	•	observing memory addresses in practice
	•	struct alignment rules
	•	compiler-generated padding
	•	why alignment matters for embedded/kernels

---

This repository will continue to grow with embedded-focused labs and low-level C experiments.
