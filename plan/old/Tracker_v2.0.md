# Tracker — CG → Engine Master Plan (v2.0)

Every term in bold lives in `glossary.md`. The unit is the **Gate**, not the day.
This file is the map. It shows what is done and what is next, in one list, in order.

## Now

- **Gate: B1 — Vectors** ← active
- **Last commit:** — (fill in before bed)
- **Today's line:** one function, one test, one commit, one journal line.

---

## Phase A — C++ Core

### Gate A0 — LearnCpp ch 1–22 (the foundation)

Credited as **~20 plan-days**, done before the tracker existed on paper.
Every chapter crossed is real, dated work.

- [X] **A0.1** ch 1–2 — program structure, comments, functions, I/O
- [X] **A0.2** ch 3 — debugging, diagnostics, compiler warnings
- [X] **A0.3** ch 4 — fundamental types, signed/unsigned, floats
- [X] **A0.4** ch 5 — constants, scope, linkage, namespaces
- [X] **A0.5** ch 6 — operators, precedence, type conversions
- [X] **A0.6** ch 7 — control flow (if, switch, goto)
- [X] **A0.7** ch 8 — loops (while, for, do-while, break/continue)
- [X] **A0.8** ch 9 — errors, `assert`, `static_assert`, testing basics
- [X] **A0.9** ch 10 — functions, arguments, returns, forward declarations
- [X] **A0.10** ch 11 — overloading, default arguments, deletion
- [X] **A0.11** ch 12 — references, pointers, `nullptr`, `const` pointers
- [X] **A0.12** ch 13 — scoped enums, aliases, structs, class basics
- [X] **A0.13** ch 14 — static members, friend, anonymous objects
- [X] **A0.14** ch 15 — `this`, chained members, nested types, destructors
- [X] **A0.15** ch 16.1–16.4 — arrays, C-style arrays, indexing, passing to functions

**Done condition met:** a multi-file C++ program can be written, compiled, debugged,
and reasoned about. This is the hardest threshold in the plan and it is behind you.

### Gate A1 — Containers

Credited as **7 plan-days**.

- [X] **A1.1** ch 16.5 — arrays and loops; sum a `std::vector<int>`
- [X] **A1.2** ch 16.6–16.7 — arrays and enum; intro to `std::vector`
- [X] **A1.3** ch 16.8 — range-based for; rewrite the sum with range-for
- [X] **A1.4** ch 16.9 — `std::vector` resizing; grow to 100, print sizes
- [X] **A1.5** ch 16.10–16.11 — stack behavior; `std::vector<bool>` skim; quiz 16
- [X] **A1.6** ch 17.1–17.3 — `std::array` intro, length, indexing
- [X] **A1.7** ch 17.4–17.6 — array of structs, passing to functions, quiz

### Gate A2 — Iterators & Algorithms

Credited as **7 plan-days**.

- [X] **A2.1** ch 18.1–18.2 — iterators, `begin`/`end`
- [X] **A2.2** ch 18.3 — `std::sort`
- [X] **A2.3** ch 18.4 — `std::find`, `std::count`, `std::count_if`
- [X] **A2.4** ch 18.5–18.6 — `min/max_element`, quiz
- [X] **A2.5** ch 19.1 — `new`/`delete`
- [X] **A2.6** ch 19.2 — dynamic arrays; deliberate leak, ASan, fix
- [X] **A2.7** ch 19.3–19.4 — pointers and const; `new`/`delete` pitfalls

### Gate A3 — Functions as Values

Credited as **7 plan-days**.

- [X] **A3.1** ch 20.1 — function pointers (recognition only)
- [X] **A3.2** ch 20.6 — lambdas intro
- [X] **A3.3** ch 20.7 — captures, by-value vs by-ref
- [X] **A3.4** ch 20.8 — capture-init, `std::function`
- [X] **A3.5** ch 20.9 — `std::function`; sort a vector of structs by a lambda
- [X] **A3.6** ch 20.10 — recursion: factorial, vector-sum
- [X] **A3.7** ch 20 quiz

### Gate A4 — Operators & Memory

Credited as **11 plan-days** (including the rest day the plan built in).

- [X] **A4.1** ch 21.1–21.2 — operator overloading intro; `+` on a `Vec2`
- [X] **A4.2** ch 21.3 — `<<` and `>>`; make `std::cout << vec2` work
- [X] **A4.3** ch 21.4 — comparison operators
- [X] **A4.4** ch 21.5–21.6 — increment/decrement, subscript (skim)
- [X] **A4.5** ch 21 quiz
- [X] **A4.6** ch 22.1–22.2 — rvalue refs, move semantics intro (read twice)
- [X] **A4.7** ch 22.3 — move ctor + move assignment, log every call
- [X] **A4.8** ch 22.4 — `std::move`; prove a move with copy counts
- [X] **A4.9** ch 22.5 — `unique_ptr`; replace one raw `new` with `make_unique`
- [X] **A4.10** ch 22.6–22.7 — `shared_ptr`; `weak_ptr` (skim)
- [X] **A4.11** ch 22 quiz + rest day

### Gate A5 — Inheritance & Polymorphism

- [ ] **A5.1** ch 23.1–23.2 — object relationships, composition; `Car` owns `Engine`
- [ ] **A5.2** ch 23.3–23.4 — aggregation, association (skim)
- [ ] **A5.3** ch 24.1–24.2 — inheritance basics, `protected`
- [ ] **A5.4** ch 24.3 — ctor/dtor order in inheritance, proven with prints
- [ ] **A5.5** ch 24.4–24.5 — inheritance + access, derived-class access (skim)
- [ ] **A5.6** ch 25.1 — pointers/references to base
- [ ] **A5.7** ch 25.2 — virtual functions; `Shape` with `virtual area()`
- [ ] **A5.8** ch 25.3–25.4 — `override`, `final`, virtual destructors; make a mistake on purpose
- [ ] **A5.9** ch 25.5–25.6 — vtable model; draw it, confirm in the debugger

### Gate A6 — Templates, Exceptions, I/O

- [ ] **A6.1** ch 26.1–26.2 — class templates; `Array<T>` of 3 items
- [ ] **A6.2** ch 26.3–26.4 — non-type params, specialization (skim)
- [ ] **A6.3** ch 27.1 — exception basics: `try`/`catch`/`throw`
- [ ] **A6.4** ch 27.2 — exceptions, functions, stack unwinding
- [ ] **A6.5** ch 27.3 — exceptions, classes, inheritance; custom exception
- [ ] **A6.6** ch 27.4–27.5 — exceptions, destructors, `noexcept` (skim)
- [ ] **A6.7** ch 28.1 — file I/O with `ifstream`/`ofstream`
- [ ] **A6.8** ch 28.2–28.3 — random access (skim), quiz
- [ ] **A6.9** ch 26–28 quizzes

### Gate A7 — Capstone "The Lost Key"

- [ ] **A7.1** 5-room text adventure — rooms, items, commands
- [ ] **A7.2** win + lose + save/load to `save.txt`
- [ ] **A7.3** run under AddressSanitizer, leak-free; tag `cpp-core`

### Gate A8 — Bug-hunt drills

- [ ] **A8.1** leak
- [ ] **A8.2** dangling pointer
- [ ] **A8.3** off-by-one
- [ ] **A8.4** uninitialized read
- [ ] **A8.5** double-free
- [ ] **A8.6** one-line note per bug in `docs/journal.md`

**Phase A is done when A0–A8 are all crossed.**

---

## Phase B — Mathematics

Hard gate for every C-matrix gate. Does not end until B8 passes.

- [ ] **B1** Vectors — `Vec2`/`Vec3`/`Vec4` + GoogleTest ← **active**
  - [ ] B1.1 `Vec3` with add, sub, scale
  - [ ] B1.2 dot product + one-sentence meaning
  - [ ] B1.3 cross product + one-sentence meaning
  - [ ] B1.4 length, normalize
  - [ ] B1.5 GoogleTest harness green
- [ ] **B2** Matrices — `Mat4`, layout documented in README
- [ ] **B3** Affine transforms — T, R, S, TRS composition
- [ ] **B4** Coordinate systems + projection — paper derivation + code
- [ ] **B5** Quaternions I — axis-angle ↔ quat ↔ matrix
- [ ] **B6** Quaternions II — slerp vs lerp
- [ ] **B7** Coordinate-system drill — local → world → view → screen, hand vs code
- [ ] **B8** Blank-file rebuild — reconstruct B1–B7 from memory, tests green

---

## Phase C — OpenGL

### Unlocked (may run in parallel with A/B)

- [X] **(prov.) C1** Window + clear — GLFW, GLAD, viewport, main loop
- [X] **(prov.) C2** Triangle + shaders + VAO/VBO/EBO — indexed draw, unbind order
- [ ] **C5** Textures + UV — `stb_image`, textured quad, no matrices
- [ ] **C9** RenderDoc basics — capture a frame, find one wasted draw call

### Locked until B8 passes

- [ ] **C3** Your matrices on the GPU
- [ ] **C4** Coordinate systems in practice
- [ ] **C6** FPS camera
- [ ] **C7** Lighting (Phong → PBR)
- [ ] **C8** Shadows + PCF
- [ ] **C10** Instancing
- [ ] **C11** RAII for GL objects
- [ ] **C12** Engine shell

**Re-derivation note:** when B8 passes, C1 and C2 move from `(prov.)` to fully
passed, and a second log entry is added: "re-derived with own math, date, commit."

---

## Phase D — Engine

- [ ] **D0** Specialty choice (renderer / tools / systems) — written in `docs/employment-plan.md`
- [ ] **D1** Fixed timestep loop
- [ ] **D2** ECS
- [ ] **D3** Scene graph
- [ ] **D4** Physics 2D
- [ ] **D5** Save/load (JSON)
- [ ] **D6** Editor (Dear ImGui)
- [ ] **D7** Playable demo
- [ ] **D8r-a/b/c** Specialty: renderer — clustered forward **or** deferred + PBR; shadow atlas/cascades; RenderDoc writeup
- [ ] **D8t-a/b/c** Specialty: tools — level format + asset pipeline; undo/redo + reflection; another person builds a level
- [ ] **D8s-a/b/c** Specialty: systems — broadphase with numbers; multithreaded scheduling; Box2D/EnTT read-and-writeup
- [ ] **D9** Release build + README (screenshot on line one)
- [ ] **D10** Trailer (60s, YouTube)
- [ ] **D11** Portfolio page

---

## Parallel tracks (always running, never block a gate)

- [ ] **LearnCpp reading** — ch 23–28, one chapter/day minimum
- [ ] **Devlog** — 1 post/week. Weeks posted: 0. Last post: —
- [ ] **Shadertoy habit** — 8 sketches across B/C. Sketches: 0

---

## Log (dated history — every gate, every commit)

| Gate | Date passed | Commit | Journal line |
|------|-------------|--------|--------------|
| A0.1–A0.15 (ch 1–16.4) | — | — | — |
| A1 Containers | — | — | — |
| A2 Iterators & algorithms | — | — | — |
| A3 Functions as values | — | — | — |
| A4 Operators & memory | — | — | — |
| C1 Window + clear *(prov.)* | — | — | — |
| C2 Triangle + shaders *(prov.)* | — | — | — |
| B1 Vectors | — | — | — |

---

## Running total

| Phase | Credited plan-days | Notes |
|---|---|---|
| A0 (ch 1–16.4) | ~20 | pre-tracker, but credited |
| A1–A4 | 32 | done |
| C1–C2 | 4 | provisional |
| **Climbed** | **~56** | |
| **Remaining (est.)** | **~110–130** | A5–A8, B1–B8, C3–C12, D0–D11 |