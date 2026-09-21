### Gate A0 — LearnCpp ch 1–16.4

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

### Gate A1 — Containers

- [X] **A1.1** ch 16.5 — arrays and loops; sum a `std::vector<int>`
- [X] **A1.2** ch 16.6–16.7 — arrays and enum; intro to `std::vector`
- [X] **A1.3** ch 16.8 — range-based for; rewrite the sum with range-for
- [X] **A1.4** ch 16.9 — `std::vector` resizing; grow to 100, print sizes
- [X] **A1.5** ch 16.10–16.11 — stack behavior; `std::vector<bool>` skim; quiz 16
- [X] **A1.6** ch 17.1–17.3 — `std::array` intro, length, indexing
- [X] **A1.7** ch 17.4–17.6 — array of structs, passing to functions, quiz

### Gate A2 — Iterators & Algorithms

- [X] **A2.1** ch 18.1–18.2 — iterators, `begin`/`end`
- [X] **A2.2** ch 18.3 — `std::sort`
- [X] **A2.3** ch 18.4 — `std::find`, `std::count`, `std::count_if`
- [X] **A2.4** ch 18.5–18.6 — `min/max_element`, quiz
- [X] **A2.5** ch 19.1 — `new`/`delete`
- [X] **A2.6** ch 19.2 — dynamic arrays; deliberate leak, ASan, fix
- [X] **A2.7** ch 19.3–19.4 — pointers and const; `new`/`delete` pitfalls

### Gate A3 — Functions as Values

- [X] **A3.1** ch 20.1 — function pointers (recognition only)
- [X] **A3.2** ch 20.6 — lambdas intro
- [X] **A3.3** ch 20.7 — captures, by-value vs by-ref
- [X] **A3.4** ch 20.8 — capture-init, `std::function`
- [X] **A3.5** ch 20.9 — `std::function`; sort a vector of structs by a lambda
- [X] **A3.6** ch 20.10 — recursion: factorial, vector-sum
- [X] **A3.7** ch 20 quiz

### Gate A4 — Operators & Memory

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

### Gate A5 — Inheritance and Polymorphism

- **Lessons:** ch 23–25.
- **Build:** a `Shape` hierarchy with `virtual area()`; a `Car` that owns an `Engine`;
  a vtable drawn on paper and confirmed in the debugger.
- **Done:** composition vs inheritance vs aggregation explained without notes; the
  vtable diagram matches debugger output.

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

- **Lessons:** ch 26–28.
- **Build:** `Array<T>` class template; a custom exception hierarchy; a file that
  writes, closes, reopens, reads back.
- **Done:** ch 26–28 quizzes passed; a program that throws, unwinds, catches, and
  prints a stack-like message.

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

- **Build:** 5-room text adventure. Rooms, items, inventory, win + lose, save/load
  to `save.txt`.
- **Done:** runs leak-free under AddressSanitizer. Committed. Tagged `cpp-core`.

- [ ] **A7.1** rooms, items, commands
- [ ] **A7.2** win + lose + save/load
- [ ] **A7.3** ASan clean; tag `cpp-core`

### Gate A8 — Bug-hunt drills

- **Build:** 5 short programs, one planted bug each.
- **Done:** one-line note per bug in `LOG.md`.

- [ ] **A8.1** leak
- [ ] **A8.2** dangling pointer
- [ ] **A8.3** off-by-one
- [ ] **A8.4** uninitialized read
- [ ] **A8.5** double-free

**Phase A is done when A0–A8 are all crossed.**

---

## Phase B — Mathematics

**Rule:** every gate ends with working code and green tests. Phase B is a hard gate
for every C-matrix gate. Nothing in C3+ moves until B8 passes.

### Gate B1 — Vectors

- **Lessons:** 3Blue1Brown "Essence of Linear Algebra" ch 1–4; 3D Math Primer ch 2–3.
- **Build:** `Vec2`, `Vec3`, `Vec4` with add, sub, scale, dot, cross, length,
  normalize. GoogleTest for every operation including edge cases.
- **Done:** `Vec3::cross(unit_x, unit_y) == unit_z`; normalize of a non-unit vector
  has length 1.0 within 1e-6.

- [ ] **B1.1** `Vec3` add/sub/scale
- [ ] **B1.2** dot product + one-sentence meaning
- [ ] **B1.3** cross product + one-sentence meaning
- [ ] **B1.4** length, normalize
- [ ] **B1.5** GoogleTest harness green

### Gate B2 — Matrices

- **Lessons:** 3D Math Primer ch 4.
- **Build:** `Mat4` as 16 floats, layout documented in README, identity, multiply,
  transpose.
- **Done:** `A * I == A` and `(A*B)*C == A*(B*C)` tested; multiply verified against
  a hand-computed 2×2 case; layout written down.

- [ ] **B2.1** `Mat4` storage + layout decision documented
- [ ] **B2.2** identity + multiply
- [ ] **B2.3** transpose
- [ ] **B2.4** hand-computed cross-check

### Gate B3 — Affine Transforms

- **Lessons:** 3D Math Primer ch 5–6.
- **Build:** translate, rotate (each axis), scale as `Mat4`s; TRS composition.
- **Done:** unit cube's corner positions match hand-derived coordinates for at least
  3 rotation angles.

- [ ] **B3.1** translation matrix
- [ ] **B3.2** rotation matrices (x, y, z)
- [ ] **B3.3** scale matrix
- [ ] **B3.4** TRS composition verified

### Gate B4 — Coordinate Systems and the Projection

- **Lessons:** 3D Math Primer ch 7; Anton's cheat sheet.
- **Build:** derive perspective and lookAt on paper, then implement both. Feed a
  known point through local → world → view → clip → NDC → screen.
- **Done:** pipeline diagram in `docs/`; a point at `(0,0,-near)` projects to screen
  center; a point at `(0,0,-far)` maps to the far plane.

- [ ] **B4.1** perspective matrix derivation on paper
- [ ] **B4.2** lookAt derivation on paper
- [ ] **B4.3** implementation + point test
- [ ] **B4.4** pipeline diagram written

### Gate B5 — Quaternions I

- **Lessons:** 3D Math Primer ch 8.
- **Build:** axis-angle → quaternion; quaternion → matrix; quaternion multiply.
- **Done:** rotating a vector by a quaternion equals rotating it by the equivalent
  matrix within 1e-6, for ≥ 5 random rotations.

- [ ] **B5.1** axis-angle → quat
- [ ] **B5.2** quat → matrix
- [ ] **B5.3** quat multiply
- [ ] **B5.4** equivalence test (5 rotations)

### Gate B6 — Quaternions II

- **Lessons:** 3D Math Primer ch 8 (slerp section).
- **Build:** slerp; compare against naive lerp.
- **Done:** slerp of two 90°-apart rotations produces constant angular velocity,
  sampled at t = 0, 0.25, 0.5, 0.75, 1.

- [ ] **B6.1** slerp implementation
- [ ] **B6.2** lerp-vs-slerp comparison
- [ ] **B6.3** constant-angular-velocity test

### Gate B7 — Coordinate-System Drill

- **Build:** one scene, expressed in local, world, view, screen coordinates.
  Hand-compute all four for one point.
- **Done:** the four numbers agree with code to 1e-4.

- [ ] **B7.1** hand computation
- [ ] **B7.2** code computation
- [ ] **B7.3** agreement verified

### Gate B8 — Math Library Freeze

- **Build:** blank file, include the math library, reconstruct Gates B1–B7's tests
  from memory in under 90 minutes.
- **Done:** all tests green, no reference materials open.

- [ ] **B8.1** blank-file rebuild
- [ ] **B8.2** all tests green

**Phase B is done when B8 passes.**

---

## Phase C — OpenGL

### Unlocked (may run in parallel with Phase A/B)

#### Gate C1 — Window and Clear — ✅ *(provisional)*

- **Lessons:** GLFW docs; LearnOpenGL "Creating a window."
- **Build:** GLFW window, GLAD load, viewport, main loop, clear color.
- **Done:** an 800×800 window opens and clears to a chosen color.
- **Re-derivation note:** provisional until B8 passes. Kept, not deleted.

#### Gate C2 — Triangle, Shaders, VAO/VBO/EBO — ✅ *(provisional)*

- **Lessons:** LearnOpenGL "Hello Triangle" and "Shaders."
- **Build:** vertex + fragment shaders, shader program link, VAO/VBO/EBO, indexed draw.
- **Done:** a colored quad on screen via `glDrawElements`.
- **Re-derivation note:** after B8, the shader transform must use *your* `Mat4`.

#### Gate C5 — Textures

- **Lessons:** LearnOpenGL "Textures."
- **Build:** load an image with `stb_image`, sample it, map UVs.
- **Done:** textured quad on screen. No matrices involved.

- [ ] **C5.1** `stb_image` set up
- [ ] **C5.2** texture object + UVs
- [ ] **C5.3** filtering + mipmaps

#### Gate C9 — RenderDoc Basics

- **Lessons:** RenderDoc quick-start.
- **Build:** capture a frame, walk the pipeline view.
- **Done:** journal entry in `LOG.md` with one identified wasted draw call.

- [ ] **C9.1** first capture
- [ ] **C9.2** walk pipeline stages
- [ ] **C9.3** find one thing to fix; write it up

### Locked until B8 passes

#### Gate C3 — Your Matrices on the GPU

- **Lessons:** LearnOpenGL "Transformations."
- **Build:** replace every tutorial matrix with your own `Mat4`.
- **Done:** a rotating cube using `Mat4::rotate_y(t) * Mat4::translate(...)`.

- [ ] **C3.1** model matrix from `Mat4`
- [ ] **C3.2** view matrix from `Mat4::lookAt`
- [ ] **C3.3** projection matrix from `Mat4`
- [ ] **C3.4** uniforms wired; cube rotates

#### Gate C4 — Coordinate Systems in Practice

- **Lessons:** LearnOpenGL "Coordinate Systems."
- **Build:** local → world → view → clip → NDC, on the GPU.
- **Done:** RenderDoc shows a point at each stage matching your B4 paper derivation.

- [ ] **C4.1** stage-by-stage verification
- [ ] **C4.2** RenderDoc capture of each stage

#### Gate C6 — FPS Camera

- **Lessons:** LearnOpenGL "Camera."
- **Build:** yaw/pitch from mouse; view matrix from `Mat4::lookAt`; WASD movement.
- **Done:** WASD movement, no gimbal lock at ±89° pitch.

- [ ] **C6.1** yaw/pitch state
- [ ] **C6.2** mouse input
- [ ] **C6.3** movement + clamp test

#### Gate C7 — Lighting

- **Lessons:** LearnOpenGL "Colors" through "Lighting maps"; PBR theory later.
- **Build:** normals, dot product, specular, then energy-conserving PBR.
- **Done:** moving the light source behaves physically (no light from behind).

- [ ] **C7.1** normals + ambient
- [ ] **C7.2** diffuse + specular
- [ ] **C7.3** materials
- [ ] **C7.4** directional / point / spot
- [ ] **C7.5** PBR pass

#### Gate C8 — Shadows

- **Lessons:** LearnOpenGL "Shadow Mapping."
- **Build:** depth pass from light, shadow map, PCF, bias tuning.
- **Done:** soft shadows without acne or peter-panning.

- [ ] **C8.1** depth pass
- [ ] **C8.2** shadow map applied
- [ ] **C8.3** PCF
- [ ] **C8.4** bias tuned

#### Gate C10 — Instancing

- **Lessons:** LearnOpenGL "Instancing."
- **Build:** 1k cubes, then 100k. Measure.
- **Done:** before/after numbers in `LOG.md`.

- [ ] **C10.1** 1k cubes
- [ ] **C10.2** 100k cubes
- [ ] **C10.3** draw-call measurement written up

#### Gate C11 — RAII for GL Objects

- **Build:** textures, buffers, shaders wrapped in move-only classes.
- **Done:** ASan reports zero leaks on exit.

- [ ] **C11.1** shader wrapper
- [ ] **C11.2** buffer wrapper
- [ ] **C11.3** texture wrapper
- [ ] **C11.4** ASan clean

#### Gate C12 — Engine Shell

- **Build:** window + main loop + update/draw split.
- **Done:** the shell the engine will be built on. Tag `engine-shell`.

- [ ] **C12.1** shell class
- [ ] **C12.2** update/draw split
- [ ] **C12.3** tag `engine-shell`

**Phase C is done when all gates pass.**

---

## Phase D — Engine

### Gate D0 — Choose Specialty

- **Options:** Renderer · Tools · Systems.
- **Done:** written at the top of this file, with 3 target job postings.

- [ ] **D0.1** specialty chosen
- [ ] **D0.2** 3 postings recorded

### Core gates (all specialties)

#### Gate D1 — Fixed Timestep Loop
- **Build:** deterministic physics tick, interpolated render.
- **Done:** simulation speed is frame-rate independent.

- [ ] **D1.1** accumulator + tick
- [ ] **D1.2** render interpolation

#### Gate D2 — ECS
- **Build:** entities as IDs, components as arrays, systems as functions.
- **Done:** 1000 entities move via a system.

- [ ] **D2.1** entity type
- [ ] **D2.2** component storage
- [ ] **D2.3** movement system
- [ ] **D2.4** 1000-entity test

#### Gate D3 — Scene Graph
- **Build:** parent/child transforms, dirty flags.
- **Done:** moving the parent moves children; flags prevent redundant work.

- [ ] **D3.1** hierarchy
- [ ] **D3.2** dirty flags

#### Gate D4 — Physics 2D
- **Build:** AABB, integration, collision resolution, stacking.
- **Done:** a 10-box stack that doesn't jitter.

- [ ] **D4.1** integration
- [ ] **D4.2** AABB overlap
- [ ] **D4.3** resolution
- [ ] **D4.4** 10-box stack stable

#### Gate D5 — Save / Load
- **Build:** JSON serialization, versioning, corrupt-file handling.
- **Done:** save → quit → load → identical scene.

- [ ] **D5.1** serialize
- [ ] **D5.2** deserialize
- [ ] **D5.3** versioning + corrupt-file error

#### Gate D6 — Editor
- **Build:** Dear ImGui hierarchy panel, properties panel, entity picker, play/stop.
- **Done:** a level built entirely in the editor.

- [ ] **D6.1** ImGui wired
- [ ] **D6.2** hierarchy panel
- [ ] **D6.3** properties panel
- [ ] **D6.4** play/stop
- [ ] **D6.5** level built in editor

#### Gate D7 — Playable Demo
- **Build:** objective, win state, restart.
- **Done:** playable from a release build.

- [ ] **D7.1** objective + win
- [ ] **D7.2** restart
- [ ] **D7.3** release build runs

### Specialty gates (pick one track, do all 3)

#### Renderer track

- [ ] **D8r-a** Clustered forward **or** deferred renderer with PBR lighting
- [ ] **D8r-b** Shadow atlas or cascade shadow maps
- [ ] **D8r-c** RenderDoc frame breakdown written up

#### Tools track

- [ ] **D8t-a** Level format + asset pipeline with a manifest
- [ ] **D8t-b** Undo/redo with property reflection
- [ ] **D8t-c** Another person builds a level; write up what broke

#### Systems track

- [ ] **D8s-a** Physics broadphase (spatial hash or BVH) with before/after numbers
- [ ] **D8s-b** Multithreaded system scheduling with profiling
- [ ] **D8s-c** Box2D or EnTT read line-by-line; architectural writeup

### Final gates

- [ ] **D9** Release build + README (screenshot on line one)
- [ ] **D10** Trailer (60s, YouTube)
- [ ] **D11** Portfolio page (repo + trailer + README + 3 devlog highlights)

**Phase D is done when D0–D11 pass.**

---

## The wall rule

The wall will come. It has come before. It will come again.

- Do not re-plan. The plan is not the problem.
- Do not skip ahead. Skipped gates become compounding debt.
- Do not stop. Stopping is the only failure mode.
- **Shrink the unit.** One function. One test. One commit. That is a full day.
- **Write it down.** "Wall day, wrote normalize(), test failed, went to bed."

A gate that takes 5 days instead of 1 is the plan working. A gate that takes 15
means the gate was too big — split it.

---

## What "done" means

- Every gate in A, B, C, D is crossed.
- The engine has a playable demo, a release build, and a trailer.
- A stranger can understand the repo in 90 seconds.
- You can answer the interview topics out loud, from your own code.

Not when a number of days has elapsed.