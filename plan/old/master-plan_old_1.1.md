# CG → Engine Master Plan

## The Goal

Deep understanding of computer graphics and game engine programming — ending in ONE thing: your own game engine, built on mathematics and software rendering you can explain from your own code.

## How to read this plan

- **Required** = the sections (by number) that must be understood before this section starts.
- **Lessons** = what you learn before starting the work. **Steps** = the actual work and implementation.
- A section is done when its Steps' `Done:` conditions are all true — extend, don't skip.
- Nothing is **optional** except what a section explicitly marks optional (only Section 7).
- **Terms in bold are defined in `glossary.md`**, with an explanation next to each term. If a term isn't in the glossary, the plan named it wrong.
- One section's Steps, in order, one session at a time. The tracker (`tracker/track.md`) is the record; this file is the order.
- **Build-first:** Lessons are skimmed, never textbook-read for hours. The point of every piece is the build (a Step). While building, if a concept won't come back to you, look it up at that moment (just-in-time) — don't re-read the lessons. Every session should end with a working artifact, not a finished chapter.
- **Spaced repetition:** theory stays in your head through 10 minutes a day of active recall — an Anki deck of flashcards made from `glossary.md`, one card per term as each section is written. Re-reading is forbidden; recalling is the point.

## The eight sections (the whole map in one list)

| # | Section | Required |
|---|---------|----------|
| 1 | C++ | nothing (foundation, nearly finished) |
| 2 | Mathematics | nothing (the other foundation) |
| 3 | Software Rendering and Ray Tracing | 1, 2 |
| 4 | OpenGL | 1, 2 |
| 5 | GPU Architecture and Shaders | 1, 2, 4 |
| 6 | DirectX 12 | 1, 2, 4, 5 |
| 7 | Vulkan — *optional, after this plan* | 6 |
| 8 | The Engine — the goal | all; starts during 4, upgraded at 6 |

---

## Section 1 — C++ (the language everything is built with)

**Required:** nothing — foundation. You enter it nearly finished.

**Description:** C++ is the language every **graphics API**, every **game engine**, and your engine is written in. You are almost done with the course (**LearnCpp**). This section finishes the core so reading graphics code never trips you — the difference between using C++ and owning it.

**Why we need it:** OpenGL, DirectX 12, Vulkan, and your engine all run from C++. Everything after this section assumes C++ is automatic, so you never learn mathematics, graphics, and a foreign language at the same time.

**What happens without it:** the old plan's failure repeats — momentum dies fighting the language mid-build — and every interview opens with **ownership** and memory questions (leaks, `unique_ptr`, `shared_ptr`) before any graphics.

**Lessons (learn first):**
- **Class** lifecycles, **destructors**, **move semantics**, **smart pointers** (`unique_ptr`, `shared_ptr`, `weak_ptr`), **containers** (`vector`, `array`) — LearnCpp ch 15–22
- **Inheritance**, **virtual functions**, **class templates**, **exceptions**, **file input/output** — ch 23–28
- Memory hygiene: **ownership**, **RAII**, what a **memory leak** is and how **AddressSanitizer** finds one

**Steps (the work):**
- **Step 1.1** — finish LearnCpp ch 15–22, including every chapter's end-of-chapter quiz (LearnCpp closes each chapter with a "Chapter summary and quiz" page — the chapter's last lesson).
- **Step 1.2** — finish ch 23–28, including every end-of-chapter quiz.
- **Step 1.3** — capstone **"The Lost Key"**: a 5-room text adventure. *Done:* conditions below all true.

  **Rooms** (5, connected): 1 Entrance Hall (Torch) → 2 Library (Iron Key) → 4 Cellar (Health Potion; dark, needs Torch) · 3 Armory (Rusty Sword) → 5 Rooftop (guard; locked door, needs Key).

  **Commands:** `look` · `go <room>` · `take <item>` · `drop <item>` · `inventory` · `save` · `load` · `quit`

  **Win / lose:** Rooftop door unlocks with the Iron Key in inventory. With the Rusty Sword → win (scoreline of items collected); without it → lose. `save` writes room + inventory to `save.txt`; `load` restores exactly; a corrupt save file is caught and printed, not a crash.

  **Implementation shape:** one abstract `Item` base plus 3+ derived item types held in a `vector` of `unique_ptr` (exercises virtual functions), file input/output, exceptions. No graphics, no timers, no big class hierarchy — that stays for Section 8. One `main.cpp` (or 2–3 files), CMake following an existing solution in `solutions/`.

  **Done:**
  1. Full round plays to win **and** to lose; save → quit → load resumes the identical room and inventory.
  2. Leak-free under AddressSanitizer on all four exit paths (`quit`, win, lose, corrupt-load).
- **Step 1.4** — bug-hunt drills: five small planted-bug snippets — a leaked allocation, a dangling reference, an invalidated iterator, a use-after-move, a double-free. *Done:* all five found and fixed, each with a one-line "what the bug was" note in the journal (`docs/journal.md`).

---

## Section 2 — Mathematics (the numbers beneath every picture)

**Required:** nothing — foundation. Learning the mathematics needs no C++; *writing* it in C++ is a Step.

**Description:** Positions, movement, rotation, and the camera are all mathematics: **vectors**, **matrices**, **quaternions**, and the **coordinate systems** connecting them. You learn it by writing it as your own small C++ library — like Unity's built-in math, but yours.

**Why we need it:** every **GPU** operation — move a cube, aim the camera, cast a **shadow** — is a math operation. Writing it yourself means no copied formulas and no mystery; you can explain every matrix you feed the GPU.

**What happens without it:** the renderer is copy-paste; camera, lighting, and shadow bugs become invisible; "explain how a **projection matrix** works" sinks you.

**Lessons (learn first):**
- Vectors: adding, subtracting, scaling; the **dot product** (how much two directions agree — lighting); the **cross product** (perpendicular direction — **normals**)
- Matrices and **transformations**: **matrix multiplication**, **translation**, **rotation**, **scale**, and why graphics uses 4×4 matrices
- Quaternions: rotation without the **gimbal lock** failure of three-angle rotation; **axis-angle**; conversion to a matrix; smooth **interpolation** (**slerp**)
- Coordinate systems: **local space**, **world space**, **view space**, **screen space** — what each is for; your documented convention (**right-handed** vs **left-handed**, **row-major** vs **column-major**)

**Steps (the work):**
- **Step 2.1** — write `Vec3`, `Mat4`, `Quaternion` as your own C++ types with tests (**GoogleTest**). *Done:* all tests green.
- **Step 2.2** — rebuild all three from a blank file, no reference. *Done:* blank-file rebuild passes.
- **Step 2.3** — camera math: **view matrix**, projection matrix, **yaw / pitch** rotation. *Done:* **FPS camera** test passes.
- **Step 2.4** — coordinate-system drill: push one point through local → world → view → screen, by hand and by code, identical answers. *Done:* both agree; convention written in the repo.

---

## Section 3 — Software Rendering and Ray Tracing

**Required:** C++ (Section 1), Mathematics (Section 2)

**Description:** you write a **renderer** that makes a picture by computing each **pixel**'s color yourself on the **CPU** — no graphics card. Two methods: **ray tracing** (imaginary **rays** meeting surfaces, with **reflections**) and **rasterization** (**painting triangles onto pixels**, with a **z-buffer** for depth).

**Why we need it:** a **graphics card** (GPU) runs faster versions of these same two methods. Write them slowly yourself and the hardware is never a black box — and "explain ray tracing / explain rasterization" becomes code you've written, from **shooting rays through a camera** down to **filling pixels inside a triangle**.

**What happens without it:** depth, lighting, and **shadows** stay mysterious; you'd drive a graphics API without understanding what it executes underneath.

**Lessons (learn first):**
- Ray tracing ideas: what a ray is, ray-meets-sphere (uses Section 2 math), rays as a camera, reflections, writing an **image file** pixel by pixel
- Rasterization ideas: a triangle in 3D, projecting it to 2D, filling the pixels inside it, the z-buffer for depth order, **flat shading** a face
- The comparison: what each method computes; what a GPU adds (**parallelism** — thousands of pixels at once); how OpenGL and DirectX 12 are the rasterizer idea in hardware

**Steps (the work):**
- **Step 3.1** — implement the *Ray Tracing in One Weekend* ray tracer. *Done:* sphere scene renders to an image file; leak-free under AddressSanitizer.
- **Step 3.2** — implement the *Tiny Renderer* rasterizer. *Done:* a 3D model renders in colored triangles.
- **Step 3.3** — write the "both sides" note: at least 5 differences between your CPU output here and the GPU output you'll get later. *Done:* note committed to `docs/`.

---

## Section 4 — OpenGL (the draw call, your way)

**Required:** C++ (1), Mathematics (2). Software Rendering (3) deepens it; it does not block it.

**Description:** OpenGL is the teaching API: a window gets a triangle, then depth, camera, textures, lighting, shadows, instancing — one visible artifact per session, each fed by your own math library. Every concept here ports one-to-one to DirectX 12. This is where the engine's renderer core starts growing.

**Why we need it:** DirectX 12 slams you with command lists, descriptors, and barriers on day one — a wall instead of a ladder. OpenGL sits in the middle: real hardware, visible results in minutes, and every idea transfers directly.

**What happens without it:** you meet DirectX 12 cold, and debugging "why is my texture black" while also learning five new concepts at once is the old plan's failure again.

**Lessons (learn first, skimmed not read):**
- The graphics pipeline: vertex → vertex shader → rasterization → fragment shader → pixel. Which stages are yours to program and which the hardware fixes.
- Shaders: small programs the GPU runs — **vertex shader** (where vertices land) vs **fragment shader** (each pixel's color), written in GLSL.
- Feeding the GPU: VBO (vertex data), VAO (what the data means), EBO (reuse vertices), **uniforms** (per-draw data), **textures** (images on geometry).
- For each LearnOpenGL chapter: skim only; the artifact on screen is the goal.

**Steps (the work)** — each one: skim the chapter(s) → artifact on screen → short journal entry:
- **Step 4.1** — window + colored triangle, bare OpenGL via GLFW, no helper libraries. *Done:* triangle in a resizable window.
- **Step 4.2** — feed it *your* matrices from Section 2 (no GLM). *Done:* rotating triangle and cube.
- **Step 4.3** — depth buffer + face culling. *Done:* proper 3D cube, near faces not see-through.
- **Step 4.4** — FPS camera from Section 2's math. *Done:* walk and look around a floor of cubes.
- **Step 4.5** — textures with UV coordinates. *Done:* image mapped onto geometry.
- **Step 4.6** — Phong lighting (ambient / diffuse / specular), per-pixel, your math. *Done:* lit objects reacting to a moving light.
- **Step 4.7** — PBR path (energy-preserving lighting model, theory skimmed). *Done:* richer, physical-looking highlights.
- **Step 4.8** — shadow mapping (depth from the light's point of view) + PCF softening. *Done:* soft shadows you can move the light and watch.
- **Step 4.9** — instancing: draw many objects in one draw call. *Done:* dozens of objects, one call, no frame drop.
- **Step 4.10** — RenderDoc pass: capture a frame, find the slowest thing, fix it. *Done:* measured improvement committed to the journal.
- **Step 4.11** — engine shell begins: window + main loop + update/draw split. *Done:* the skeleton that Section 8 grows into, rendering the Step 4.8 scene.

---

## Section 5 — GPU Architecture and Shaders (the weekly current)

**Required:** C++ (1), Mathematics (2), OpenGL (4)

**Description:** a low-pressure weekly track that runs *beside* the main work once OpenGL is alive: how a GPU schedules thousands of threads, how memory moves, and a trip up and down the graphics pipeline. Content-heavy but never blocking — its chapter is the blog feed, its artifacts are summaries and sketches.

**Why we need it:** shaders should be *fast*, not just correct. Knowing the hardware makes the RenderDoc and PIX numbers mean something, and "explain what a graphics card does" is the single most-asked interview question.

**What happens without it:** shaders are copy-paste, performance advice is superstition, and the GPU stays a black box after you've drawn with it.

**Lessons (learn first):**
- How a graphics card works (host, streaming multiprocessors — "SMs" in NVIDIA terms, memory).
- A trip through the graphics pipeline — the classic two-part walk from CPU-side geometry to pixels.
- Which parts the hardware runs in parallel and why that's hundreds of times faster.
- Book of Shaders for shader math intuition; a compute shader intro (Section 5's forward peek).

**Steps (the work):**
- **Step 5.1** — Shadertoy habit: one sketch a week *you* wrote (a gradient, turbulence, a moving pattern). *Done:* 8 sketches in the log.
- **Step 5.2** — blog feed: summarize one graphics blog post a week in 3–5 bullet lines in the journal. *Done:* 8 summaries across the track (authors: Courrèges, MJP, iQ, zeux, demofox).
- **Step 5.3** — Book of Shaders, one chapter a week, its concepts sampled in your weekly sketch. *Done:* Book finished; 3 of your sketches later become engine materials.

---

## Section 6 — DirectX 12 (the machine reveals itself)

**Required:** C++ (1), Mathematics (2), OpenGL (4), GPU Architecture (5)

**Description:** Microsoft's modern graphics API and the currency of Montreal studios. You port the exact OpenGL feature list, but now you drive the hardware yourself — swapchains, command lists, descriptors, resource barriers, several frames in flight. An engine renderer is rewritten in this section.

**Why we need it:** it is what game studios actually ship on; it forces you to understand everything OpenGL hid; and a junior graphics résumé without a modern API has a hole a mile wide.

**What happens without it:** you can draw — but not on the platform the industry uses, and the mysteries OpenGL hid stay mysterious.

**Lessons (learn first):**
- The DirectX 12 shape: swapchain (the flip of front/back buffers), command list + command queue (the GPU's todo), descriptors (the GPU's "what resource is this"), resource barriers (say when a buffer changes role), render targets.
- Frames in flight: preparing frame N while the GPU still draws frame N−1.
- PIX as the DirectX-side RenderDoc.
- Skim the gentle intro + tutorial; never re-read chapters — port and build.

**Steps (the work)** — each: port the OpenGL feature, artifact on screen, journal entry:
- **Step 6.1** — window + swapchain + clear + triangle. *Done:* triangle in a window via DirectX 12.
- **Step 6.2** — vertex buffers with your own math (no GLM). *Done:* rotating cube.
- **Step 6.3** — depth buffer + culling. *Done:* correct 3D cube.
- **Step 6.4** — FPS camera port. *Done:* same look/walk as Section 4.
- **Step 6.5** — textures port. *Done:* textured geometry.
- **Step 6.6** — lighting port (Phong → PBR). *Done:* lit objects.
- **Step 6.7** — shadows port (shadow mapping + PCF). *Done:* soft shadows at DirectX 12.
- **Step 6.8** — instancing port. *Done:* many objects, one call.
- **Step 6.9** — PIX pass: capture, find the slowest thing, fix it. *Done:* measured improvement in the journal.
- **Step 6.10** — engine renderer upgrade: the engine shell now renders through DirectX 12. *Done:* Section 8's engine no longer touches OpenGL.

---

## Section 7 — Vulkan (optional, after this plan)

**Required:** DirectX 12 (6). **Marked optional** — the only optional section: take it once the engine demo is done and the job hunt is rolling.

**Description:** the most explicit graphics API — you manage memory and queues by hand. Same pipeline you know, barely any convenience left. A stretch goal, not a gate.

**Lessons (learn first):** validation layers (the API's own checker), explicit memory with VMA, command buffers and queue families, render passes.

**Steps (the work):**
- **Step 7.1** — vkguide triangle. *Done:* triangle in a window via Vulkan.
- **Step 7.2** — textured cube with VMA allocation. *Done:* textured cube.
- **Step 7.3** — lighting + shadows port from the DirectX 12 code. *Done:* the Section 6 scene running on Vulkan; decide whether the engine picks it up.

---

## Section 8 — The Engine (the goal)

**Required:** all sections; it starts its shell during OpenGL (Step 4.11) and its renderer is upgraded at DirectX 12 (Step 6.10).

**Description:** the convergence — everything above collapses into ONE deliverable: your game engine. Parts: renderer, input, ECS, scene graph, physics (2D then 3D), save/load, an editor with Dear ImGui, and a small playable demo you can package. It is the answer to "what can you actually ship?"

**Why we need it:** the plan's entire point. It turns fragments into a story and a portfolio centerpiece.

**What happens without it:** twenty great demos and no engine. The goal is here, not in the chapters.

**Lessons (learn first):**
- Architecture: ECS (entities = ids, components = data, systems = logic; read EnTT for taste), scene graph (parents/children transform together).
- Physics ideas: colliders, positions/velocities integration, a fixed timestep; read Box2D (the classic) for how a real one is structured.
- Serialization for save/load; Dear ImGui for the editor UI; how to structure a repo (Modern CMake, README, releases).

**Steps (the work):**
- **Step 8.1** — shell from Step 4.11: window, main loop, update/draw split, input handling, fixed timestep. *Done:* steady FPS counter, clean exit.
- **Step 8.2** — renderer integrated (currently DirectX 12 from 6.10): scene list → draw calls. *Done:* engine draws a scene, not one hard-coded object.
- **Step 8.3** — ECS + scene graph: entities, components (transform, mesh, light), systems (movement, rendering), parent-child transforms. *Done:* a scene file defines objects; the engine plays them.
- **Step 8.4** — physics 2D → 3D: AABB colliders, gravity, collisions, response; structured after Box2D. *Done:* boxes fall and stack believably.
- **Step 8.5** — save/load: serialize a scene (entities, components, transform, player state) to JSON and restore it. *Done:* save → quit → load → identical scene.
- **Step 8.6** — editor: Dear ImGui window to add/move/delete entities, tweak lights/camera live. *Done:* build a level without touching code.
- **Step 8.7** — playable demo: a small level, an objective, a win state, a packaged EXE with a start screen. *Done:* someone else can download, build or run, and finish it.
- **Step 8.8** — polish: README, one-command build, screenshots/GIF, a release tag, tests green. *Done:* the demo is the employment plan's centerpiece.