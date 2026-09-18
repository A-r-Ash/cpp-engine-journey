# Tracker — CG → Engine Master Plan

Every term in bold lives in `plan/glossary.md`. One session, one Step, in order.

## Now

- Section 1 in progress → **Step 1.1**

## Scorecard

### Section 1 — C++ _(Required: —)_

- [X] Lessons: ch 15–22 (classes, move, smart pointers, containers) + memory hygiene
- [X] **Step 1.1** LearnCpp ch 15–22, quizzes
- [ ] **Step 1.2** LearnCpp ch 23–28, quizzes
- [ ] **Step 1.3** Capstone "The Lost Key" (win + lose + save/load, leak-free)
- [ ] **Step 1.4** Bug-hunt drills (5 planted bugs, one-line note each)

### Section 2 — Mathematics _(Required: —)_

- [ ] Lessons: vectors · matrices · quaternions · coordinate systems
- [ ] **Step 2.1** `Vec3` / `Mat4` / `Quaternion` + GoogleTest
- [ ] **Step 2.2** blank-file rebuild (no reference)
- [ ] **Step 2.3** camera math: view + projection + yaw/pitch (FPS camera)
- [ ] **Step 2.4** coordinate-system drill: local → world → view → screen, hand vs code

### Section 3 — Software Rendering and Ray Tracing _(Required: 1, 2)_

- [ ] Lessons: ray tracing · rasterization · the comparison
- [ ] **Step 3.1** Ray Tracing in One Weekend — sphere scene to image, leak-free
- [ ] **Step 3.2** Tiny Renderer — model renders in colored triangles
- [ ] **Step 3.3** "both sides" note (≥5 CPU vs GPU differences) → `docs/`

### Section 4 — OpenGL _(Required: 1, 2; 3 deepens it)_

- [ ] Lessons: pipeline · shaders · VBO/VAO/EBO · uniforms · textures (skimmed)
- [ ] **Step 4.1** window + triangle (raw OpenGL + GLFW)
- [ ] **Step 4.2** your Section 2 matrices on the GPU (no GLM)
- [ ] **Step 4.3** depth + face culling
- [ ] **Step 4.4** FPS camera (Section 2 math)
- [ ] **Step 4.5** textures + UV
- [ ] **Step 4.6** Phong lighting
- [ ] **Step 4.7** PBR path
- [ ] **Step 4.8** shadow mapping + PCF
- [ ] **Step 4.9** instancing
- [ ] **Step 4.10** RenderDoc pass (measure → fix → journal)
- [ ] **Step 4.11** engine shell begins (window + loop + update/draw)

### Section 5 — GPU Architecture and Shaders _(Required: 1, 2, 4 — weekly track, runs in parallel)_

- [ ] Lessons: how a graphics card works · pipeline trip · parallelism
- [ ] **Step 5.1** Shadertoy habit (8 sketches)
- [ ] **Step 5.2** blog feed (8 summaries in journal)
- [ ] **Step 5.3** Book of Shaders (3 sketches → engine materials)

### Section 6 — DirectX 12 _(Required: 1, 2, 4, 5)_

- [ ] Lessons: swapchain · command lists/queues · descriptors · barriers · frames in flight · PIX
- [ ] **Step 6.1** swapchain + clear + triangle
- [ ] **Step 6.2** buffers with own math
- [ ] **Step 6.3** depth + culling
- [ ] **Step 6.4** FPS camera port
- [ ] **Step 6.5** textures port
- [ ] **Step 6.6** lighting port (Phong → PBR)
- [ ] **Step 6.7** shadows port
- [ ] **Step 6.8** instancing port
- [ ] **Step 6.9** PIX pass (measure → fix → journal)
- [ ] **Step 6.10** engine renderer upgrade → engine renders via DirectX 12

### Section 7 — Vulkan _(optional, after this plan — Required: 6)_

- [ ] Lessons: validation layers · VMA · queue families · render passes
- [ ] **Step 7.1** triangle (vkguide)
- [ ] **Step 7.2** textured cube (VMA)
- [ ] **Step 7.3** lighting + shadows port

### Section 8 — The Engine _(Required: all — shell starts at 4.11, renderer upgraded at 6.10)_

- [ ] Lessons: ECS · scene graph · physics · serialization · ImGui · repo structure
- [ ] **Step 8.1** shell (window + loop + input + fixed timestep)
- [ ] **Step 8.2** renderer integrated (scene list → draw calls)
- [ ] **Step 8.3** ECS + scene graph
- [ ] **Step 8.4** physics 2D → 3D (AABB, gravity, collisions)
- [ ] **Step 8.5** save/load (JSON serialization)
- [ ] **Step 8.6** editor (Dear ImGui)
- [ ] **Step 8.7** playable demo + packaged EXE
- [ ] **Step 8.8** polish (README, build doc, release tag, tests green)

## Log (done ↔ date ↔ commit)

| Piece | Date | Commit |
|-------|------|--------|
| — | — | — |