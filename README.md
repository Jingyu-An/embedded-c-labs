# embedded-c-labs

A collection of small, focused C labs designed to build strong foundations in  
**system-level programming, embedded concepts, and BSP-style coding patterns.**

This repository is not about solving algorithm problems.  
Instead, it explores how C behaves close to the hardware by examining:

- memory and data layout  
- pointer mechanics  
- low-level control flow  
- function pointers and dispatch tables  
- patterns used in device drivers and BSP development  

The labs are intentionally small and isolated so concepts can be tested,  
observed, and documented clearly.

---

## 📁 Repository Structure

```
embedded-c-labs/
 ├── src/
 │    ├── 01_pointers/       # pointer basics, array vs pointer, function pointers
 │    └── (more labs soon)
 ├── include/
 │    └── common.h           # simple logging and shared helpers
 ├── docs/
 │    └── 01_pointers.md     # notes, diagrams, and observations for Lab 01
 ├── Makefile
 └── README.md
```

Future labs will include:

- memory layout experiments (stack / heap / static)  
- simple ring buffer implementation  
- micro task-scheduler examples  
- lock-free and atomic operation experiments  
- small driver/BSP-style patterns  

Each topic will have its own folder under `src/` and its own documentation under `docs/`.

---

## ▶️ Build & Run

All labs use a simple Makefile.

```sh
make
./bin_pointers
```

New labs will introduce additional targets as needed.

---

## 🎯 Purpose

This project is designed to support growth toward:

- Embedded Linux development  
- BSP & device driver fundamentals  
- Understanding AAOS HAL → driver → kernel interactions  
- Writing deterministic, hardware-aware C code  

Each lab includes both code and documentation so the learning process is explicit and traceable.

---

## 📝 Documentation

Each lab records:

- goals  
- code behavior  
- memory/diagram explanations  
- output logs  
- what was learned  
- notes for future labs  

Example:

```
docs/
 └── 01_pointers.md
```

This helps track progress over time and forms a study reference for embedded/BSP development.

---

## 📌 Status

**Lab 01 (Pointers): complete**  
Covers:
- pointer basics  
- addresses & dereferencing  
- arrays vs pointers  
- function pointer dispatch  

Additional labs will be added daily as the study progresses.

---

_This repository will grow continuously as more embedded-focused labs are added._
