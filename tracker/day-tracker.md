# Milestone Tracker — C++ → Game Engine Master Plan (v4.0, LearnCpp-Paced)

## Where you are

- **Current LearnCpp position:** ch 12 (M8) — read through 11.5 default arguments
- **Pace:** LearnCpp linear, your speed, your order (skips go in the Deferred Registry, never silently)
- **Started LearnCpp sprawl from:** ch 8 finished, ch 9 (deferred), ch 10 completed, 11 completed, 12, completed
- **Tags so far:** `none` (first tag: `cpp-core` when Phase 0's capstone ships)

## How to use this file (10 seconds, twice a session)

1. **Morning:** confirm the `Current:` line matches the chapter you're reading today.
2. **Evening:** when a milestone's `Done` line is truly true (chapter read, quiz done, build works, code compiles warning-free), tick it and commit.
3. **Block gates** carry an `Interview Q#/20` + `Pitch:` duty — those are part of the milestone they sit on.
4. Rule from the plan: *Extend, don't skip.* If a milestone takes a week of sessions, it's still one milestone — tick it when it's done, not when the calendar says.
5. **Deferred chapters** (ch 6, 7, 9) are tracked in the registry notes at the bottom — a skip is only legal if it's written there.
6. **Rest days:** after `cpp-core`, after Phase 2's heaviest stretch, after the Phase 3 menu block. On them: tick it, walk away — no new code.

---

## Phase 0 — LearnCpp Core, linear (ch 1 → ch 28)

- [x] M1 — ch 1–4 Program Model + Types *(skim — covered by Days 1–3)*
- [x] M2 — ch 5 Constants, Strings, string_view *(covered — toolkit exists)*
- [X] M3 — ch 6 Operators *(deferred — skip is written in the registry)*
- [X] M4 — ch 7 Scope/Duration/Linkage *(deferred — skip is written in the registry)*
- [x] M5 — ch 8 Control Flow + Random Numbers *(covered — dice game exists)*
- [X] M6 — ch 10 Conversions, Aliases, Deduction *(chapters read — tick when quiz + warning-free lab confirmed)*  / quiz + warning-free lab at 100%
- [X] M7 — ch 11 Overloading + Function Templates (in progress — through 11.5 default arguments)  / ⏱ Block GATE: Q#1 of 20 + pitch v0.1
- [X] M8 — ch 12 References + Pointers (the pointer matrix)
- [ ] M9 — ch 13 Enums, Structs, Aggregates  / ⏱ Block GATE: Q#2 of 20 + pitch v0.2
- [ ] M10 — ch 14 Classes (C# culture shock)
- [ ] M11 — ch 15 Destructors, static, RAII
- [ ] M12 — ch 16 std::vector + ch 17 std::array
- [ ] M13 — ch 18 Iterators/Algorithms + ch 19 Dynamic Allocation  / ⏱ Block GATE: Q#3 of 20 + pitch v0.3
- [ ] M14 — ch 20 Function Pointers + **Lambdas** (finally in order)
- [ ] M15 — ch 21 Operator Overloading
- [ ] M16 — ch 22 Move Semantics + Smart Pointers  (memory bootcamp core)  / ⏱ Block GATE: Q#4 of 20 + pitch v0.4
- [ ] M17 — ch 23–25 Relationships, Inheritance, Virtual/vtable
- [ ] M18 — ch 26–28 Template Classes, Exceptions, I/O
- [ ] **Capstone** — Console Game With Ownership (leak-free under ASan)  / tag: `cpp-core`
- [ ] **Phase 0 Close** — tag pushed, pitch v0.4, networking #1, retrospective
- [ ] **REST DAY 1** — after `cpp-core` (no new code, decompress)

## Phase 1 — Toolchain + Math + Graphics v1 (gated on `cpp-core`) → tag `graphics-v1`

- [ ] Day 22 — CMake From Zero
- [ ] Day 23 — Git Workflow You'll Use Daily
- [ ] Day 24 — Debugger Workbench
- [ ] Day 25 — Math: Vec2/Vec3
- [ ] Day 26 — Math: Mat4
- [ ] Day 27 — Math: Quaternions
- [ ] Day 28 — Consolidation 3: Math From Memory  / tag: math-v0.1  / Q#5
- [ ] Day 29 — Window And Triangle
- [ ] Day 30 — Shaders, Hands-On
- [ ] Day 31 — Textures And UVs
- [ ] Day 32 — Transformations With YOUR Mat4
- [ ] Day 33 — FPS Camera
- [ ] Day 34 — Depth And Culling
- [ ] Day 35 — Consolidation 4: Textured Cube From Memory  / Q#6
- [ ] Day 36 — Phong Lighting
- [ ] Day 37 — Lighting Maps And Light Types
- [ ] Day 38 — Model Loading
- [ ] Day 39 — Framebuffers And A Post Pass
- [ ] Day 40 — Normal Mapping
- [ ] Day 41 — Scene Objects And A Renderer Module
- [ ] Day 42 — Consolidation 5: Lighting From Memory  / Q#7
- [ ] Day 43 — Shadow Mapping Basics
- [ ] Day 44 — Shadow Quality
- [ ] Day 45 — Instancing, The Hiring Hook
- [ ] Day 46 — RenderDoc Frame Autopsy
- [ ] Day 47 — clang-tidy + Code Review Day
- [ ] Day 48 — GL Lifetime And Error Handling
- [ ] Day 49 — Consolidation 6: Shadow Pass From Memory  / Q#8
- [ ] Day 50 — ImGui Embedded
- [ ] Day 51 — Debug UI For The Engine
- [ ] Day 52 — Showcase Scene Assembly
- [ ] Day 53 — Performance Pass 1
- [ ] Day 54 — Build Scripts + Release Presets
- [ ] Day 55 — README + Demo Clip 1
- [ ] Day 56 — Phase 1 Close: graphics-v1 Tag + Pitch + Networking 2  / tag: graphics-v1  / Q#9

## Phase 2 — Physics 2D + Engine Architecture (gated on `graphics-v1`) → tag `engine-v1`

- [ ] Day 57 — Integration And The Fixed Step
- [ ] Day 58 — Collision Detection
- [ ] Day 59 — Impulse Resolution
- [ ] Day 60 — Rigid Bodies
- [ ] Day 61 — 2D SAT And Polygon Shapes
- [ ] Day 62 — Raycasts And Picking
- [ ] Day 63 — Consolidation 7: Impulses From Memory  / Q#10
- [ ] Day 64 — Stacking And Solver Iterations
- [ ] Day 65 — Joints: Distance, Revolute, Spring (Nice-To-Have)
- [ ] Day 66 — 2D Character Controller
- [ ] Day 67 — 2D Physics Mini-Demo
- [ ] Day 68 — Data-Oriented Thinking, First Contact
- [ ] Day 69 — Stability Pass: Race + Leak Sweep
- [ ] Day 70 — Consolidation 8: Rigid Bodies From Memory  / Q#11 / pitch v1.0
- [ ] **REST DAY 2** — after Day 70 (no new code, decompress)
- [ ] Day 71 — ECS, The Minimal Version
- [ ] Day 72 — Transforms And A Scene Graph
- [ ] Day 73 — Input Abstraction *(re-entry point for deferred ch 9.5 cin-validation → tick the ch 9 registry row)*
- [ ] Day 74 — Camera System
- [ ] Day 75 — The Physics→Renderer Bridge
- [ ] Day 76 — Module Facade + Header Hygiene
- [ ] Day 77 — Consolidation 9: ECS From Memory  / Q#12
- [ ] Day 78 — Resource Manager
- [ ] Day 79 — Asset Pipeline Basics
- [ ] Day 80 — Save/Load With JSON
- [ ] Day 81 — ImGui Editor Panels
- [ ] Day 82 — Scene File Format v1
- [ ] Day 83 — Play Mode And Game Actions
- [ ] Day 84 — Consolidation 10: Save/Load From Memory  / Q#13
- [ ] Day 85 — Codebase Refactor Pass
- [ ] Day 86 — Mini-Game: Knock The Tower
- [ ] Day 87 — Mini-Game Polish
- [ ] Day 88 — Performance Pass 2
- [ ] Day 89 — Stability Pass: Whole-Game Under Sanitizers
- [ ] Day 90 — README + Demo Clip 2
- [ ] Day 91 — Phase 2 Close: engine-v1 Tag + Pitch + Networking 3  / tag: engine-v1  / Q#14

## Phase 3 — Polish, Portfolio, C++ Stretch (gated on `engine-v1`)

- [ ] Day 92 — Voxels: World Structure And Instancing
- [ ] Day 93 — Terrain Generation
- [ ] Day 94 — Greedy Meshing
- [ ] Day 95 — Threaded Chunk Meshing
- [ ] Day 96 — Editable Voxels
- [ ] Day 97 — Save/Load The Voxel World
- [ ] Day 98 — Consolidation 11: Chunk From Memory  / Q#15
- [ ] Day 99 — Voxel Face Shading + Ambient Term
- [ ] Day 100 — Player Collision In The Voxel World
- [ ] Day 101 — Voxel Debug Overlays
- [ ] Day 102 — Voxel Polish + Cinematic
- [ ] Day 103 — VOXEL FEATURE FREEZE  / tag: voxel-freeze
- [ ] Day 104 — Voxel Module Packaging
- [ ] Day 105 — Consolidation 12: Teach The Voxel Module  / Q#16
- [ ] Day 106 — Menu Decision Day
- [ ] Day 107 — Menu Topic 1, Morning
- [ ] Day 108 — Menu Topic 1, Deep
- [ ] Day 109 — Menu Topic 1, Teach-Back
- [ ] Day 110 — Menu Topic 2, Morning
- [ ] Day 111 — Menu Topic 2, Deep
- [ ] Day 112 — Menu Topic 2, Teach-Back + Cadence  / Q#17
- [ ] Day 113 — Menu Topic 3, Morning
- [ ] Day 114 — Menu Topic 3, Deep
- [ ] Day 115 — Menu Topic 3, Teach-Back
- [ ] Day 116 — Menu Topic 4, Morning
- [ ] Day 117 — Menu Topic 4, Deep
- [ ] Day 118 — Menu Topic 4, Teach-Back
- [ ] Day 119 — Consolidation 13: Teach One Topic + Justify The Menu  / Q#18
- [ ] **REST DAY 3** — after Day 119 (no new code, decompress)
- [ ] Day 120 — Interview Question Bank
- [ ] Day 121 — Memory/Ownership Drills
- [ ] Day 122 — CppQuiz/LeetCode Session 1
- [ ] Day 123 — Whiteboard Mechanics
- [ ] Day 124 — "Architect A Renderer" (Junior Edition)
- [ ] Day 125 — Mock Interview 1
- [ ] Day 126 — Consolidation 14: Rapid-Fire Summit  / Q#19
- [ ] Day 127 — Portfolio Repo Audit
- [ ] Day 128 — Devlog: The Engine's Story
- [ ] Day 129 — Target Studio List + Tracking Sheet
- [ ] Day 130 — LinkedIn + Portfolio Page
- [ ] Day 131 — Résumé, Rewritten Around Outcomes
- [ ] Day 132 — Cover Letter Factory
- [ ] Day 133 — Consolidation 15: Pitch Rehearsal  / Q#20
- [ ] Day 134 — Final README + Trailer
- [ ] Day 135 — Build Hygiene + CI
- [ ] Day 136 — Testing Pass
- [ ] Day 137 — Application Push 1
- [ ] Day 138 — Application Push 2
- [ ] Day 139 — Networking Wave 4
- [ ] Day 140 — engine-portfolio/cpp-mastery-lite Tag + Final Pitch + Next 90 Days  / tags: engine-portfolio + cpp-mastery-lite

---

## Deferred Registry (a skip is only legal if it's written here)

| Chapter | Deferred because | Re-entry trigger | Status |
|---|---|---|---|
| ch 6 — Operators | Used most already | First surprise in a build involving precedence/rounding | open |
| ch 7 — Scope/Duration/Linkage | Felt premature | Phase 1 multi-file/CMake work (Day 23) | open |
| ch 9 — Error handling, asserts, cin validation | Felt meh | **Scheduled:** Day 73 Input Abstraction — revisit 9.5 | open → ticks closed at Day 73 |