# CG → Engine Master Plan

## How this plan works

- **One line = one day.** Open the file, find today's line, do it.
- **Half a chapter is a win.** Tick it. Move on.
- **4 hours is the target.** Finished early? Start tomorrow's first step. Finished late? That's fine, it's still one day.
- **One spine.** C++ first. Graphics starts after. No parallel tracks.
- **The tracker has one line: `Today:`.** You write tomorrow's `Today:` before bed. You do not re-plan in the morning.
- **If a day takes 2 days, that's the plan working.** Not failing.

---

## Where you are

- **LearnCpp:** ch 16.4 done → **today starts at 16.5**
- **Goal:** your own engine, built on math you can explain
- **Timeline:** ~6 months of C++, then ~5 months of graphics + engine. No deadline. Progress is the point.

---

# PHASE A — Finish C++ (Days 1–52)

**Rule for this phase:** LearnCpp only. No graphics. No side projects. Every day is one LearnCpp chunk + one tiny build.

**Done when:** ch 28 quiz passed + capstone leak-free under ASan.

---

## Block A1 — Containers (Days 1–7)

- **Day 1** — ch 16.5 (arrays and loops) + write a 10-line program that sums a `std::vector<int>`.
- **Day 2** — ch 16.6 (arrays and enum) + ch 16.7 (introduction to `std::vector`). Read only. No code.
- **Day 3** — ch 16.8 (range-based for) + rewrite Day 1's sum using range-for.
- **Day 4** — ch 16.9 (`std::vector` resizing) + write a program that grows a vector to 100 and prints sizes at 1, 10, 100.
- **Day 5** — ch 16.10 (`std::vector` and stack behaviour) + ch 16.11 (`std::vector<bool>`) — skim 16.11, it's a quirk. Quiz 16.
- **Day 6** — ch 17.1–17.3 (`std::array` intro, length, indexing). Write a `std::array<int, 5>` and print it.
- **Day 7** — ch 17.4–17.6 (array of structs, passing to functions, quiz). **Block A1 done.** Commit + tag `ch16-17`.

## Block A2 — Iterators & Algorithms (Days 8–14)

- **Day 8** — ch 18.1–18.2 (iterators intro, `begin`/`end`). Write a loop using iterators instead of `[]`.
- **Day 9** — ch 18.3 (`std::sort`) + sort your Day 4 vector. Print before/after.
- **Day 10** — ch 18.4 (`std::find`, `std::count`, `std::count_if`). Find a value in a vector.
- **Day 11** — ch 18.5 (`std::min_element`, `std::max_element`) + ch 18.6 (quiz).
- **Day 12** — ch 19.1 (dynamic allocation with `new`/`delete`). Write a `new int`, delete it, print the value before delete.
- **Day 13** — ch 19.2 (dynamic arrays) + deliberately leak one, watch the CRT leak report, fix it.
- **Day 14** — ch 19.3–19.4 (pointers and const, `new`/`delete` pitfalls). **Block A2 done.** Tag `ch18-19`.

## Block A3 — Functions as Values (Days 15–21)

- **Day 15** — ch 20.1 (function pointers) — recognize-only, don't master. Skim.
- **Day 16** — ch 20.6 (introduction to lambdas). Write your first lambda.
- **Day 17** — ch 20.7 (lambda captures). Write one capture-by-value and one capture-by-ref, make them behave differently.
- **Day 18** — ch 20.8 (capture-init + `std::function`). Pass a lambda to a function.
- **Day 19** — ch 20.9 (`std::function`) + sort a vector of structs by a field using a lambda.
- **Day 20** — ch 20.10 (recursion review). Write a recursive factorial, then a recursive vector-sum.
- **Day 21** — quiz ch 20. **Block A3 done.** Tag `ch20`.

## Block A4 — Operators & Memory (Days 22–32)

- **Day 22** — ch 21.1–21.2 (operator overloading intro, arithmetic). Overload `+` on a `Vec2`.
- **Day 23** — ch 21.3 (`<<` and `>>`). Make `std::cout << vec2` work.
- **Day 24** — ch 21.4 (comparison operators). Make `vec2 == vec2` and `vec2 < vec2` work.
- **Day 25** — ch 21.5 (increment/decrement) + ch 21.6 (subscript). Skim.
- **Day 26** — quiz ch 21.
- **Day 27** — ch 22.1–22.2 (rvalue references, move semantics intro). Read twice. This is the hard one.
- **Day 28** — ch 22.3 (move constructor and move assignment). Write a class with both, log every call.
- **Day 29** — ch 22.4 (`std::move`). Prove a move happens by counting copies.
- **Day 30** — ch 22.5 (`std::unique_ptr`). Replace one raw `new` with `make_unique`.
- **Day 31** — ch 22.6 (`std::shared_ptr`) + ch 22.7 (`weak_ptr`). Skim 22.7.
- **Day 32** — quiz ch 22. **Memory bootcamp done.** Tag `ch21-22`. **Rest day.**

## Block A5 — Inheritance & Polymorphism (Days 33–41)

- **Day 33** — ch 23.1–23.2 (object relationships, composition). Write a `Car` that owns an `Engine`.
- **Day 34** — ch 23.3 (aggregation) + ch 23.4 (association). Skim.
- **Day 35** — ch 24.1–24.2 (inheritance basics, `protected`).
- **Day 36** — ch 24.3 (constructors/destructors in inheritance order). Prove the order with prints.
- **Day 37** — ch 24.4 (inheritance + access) + ch 24.5 (derived class access). Skim.
- **Day 38** — ch 25.1 (pointers/references to base). Read carefully.
- **Day 39** — ch 25.2 (virtual functions). Write a `Shape` with `virtual area()`.
- **Day 40** — ch 25.3–25.4 (`override`, `final`, virtual destructors). Make one mistake on purpose, read the error.
- **Day 41** — ch 25.5–25.6 (vtable model). Draw the vtable on paper. Confirm in debugger. **Block A5 done.** Tag `ch23-25`.

## Block A6 — Templates, Exceptions, I/O (Days 42–50)

- **Day 42** — ch 26.1–26.2 (class templates). Write `Array<T>` holding 3 items.
- **Day 43** — ch 26.3 (template non-type params) + ch 26.4 (template specialization) — skim.
- **Day 44** — ch 27.1 (exception basics). Write `try/catch/throw`.
- **Day 45** — ch 27.2 (exceptions, functions, stack unwinding).
- **Day 46** — ch 27.3 (exceptions, classes, inheritance). Write a custom exception class.
- **Day 47** — ch 27.4 (exceptions, destructors) + ch 27.5 (exceptions, `noexcept`). Skim.
- **Day 48** — ch 28.1 (file I/O with `ifstream`/`ofstream`). Write a file, read it back.
- **Day 49** — ch 28.2 (random file access) — skim + ch 28.3 (quiz).
- **Day 50** — quiz ch 26–28. **Block A6 done.** Tag `ch26-28`.

## Block A7 — Capstone (Days 51–52 + buffer)

- **Day 51** — start "The Lost Key" (5-room text adventure). Rooms, items, commands.
- **Day 52** — finish it. Save/load to `save.txt`. Run under AddressSanitizer. **Tag `cpp-core`. Phase A done.**
- **Rest day.** No code. No reading.

---

# PHASE B — Math (Days 53–66)

**Rule:** one math idea per day, then write it in C++. No graphics yet.

- **Day 53** — vectors: add, subtract, scale. Write `Vec2`.
- **Day 54** — dot product. Add it to `Vec2`. Explain in one sentence what it means.
- **Day 55** — cross product. Add to `Vec3`. Explain in one sentence.
- **Day 56** — length, normalize. Add to `Vec3`.
- **Day 57** — matrices: what 4×4 means. Write a `Mat4` that holds 16 floats.
- **Day 58** — matrix multiplication. Implement it. Test identity × identity.
- **Day 59** — translation matrix. Test moving a point.
- **Day 60** — rotation matrix. Test rotating a point.
- **Day 61** — scale matrix. Test scaling a point.
- **Day 62** — TRS composition. Combine translate × rotate × scale.
- **Day 63** — perspective projection matrix. Write it. Feed it a point.
- **Day 64** — view matrix (lookAt). Write it. Feed it a point.
- **Day 65** — quaternions: what problem they solve. Write axis-angle → quat.
- **Day 66** — quat → matrix. **Phase B done.** Tag `math-v1`.

---

# PHASE C — OpenGL (Days 67–105)

**Rule:** one LearnOpenGL chapter per day, one artifact on screen. No exceptions.

- **Day 67** — window (GLFW) + clear screen.
- **Day 68** — first triangle. GLAD setup.
- **Day 69** — shaders: vertex + fragment. Two-color triangle.
- **Day 70** — VAO/VBO/EBO. Understand what each stores.
- **Day 71** — uniforms. Animate the triangle's color.
- **Day 72** — textures: `stb_image`. Draw a textured quad.
- **Day 73** — texture units, filtering, mipmaps. Improve Day 72.
- **Day 74** — matrices in the shader. Rotate a cube **using your own Mat4** (no GLM).
- **Day 75** — coordinate systems. Local → world → view → clip.
- **Day 76** — FPS camera (yaw/pitch). Walk around.
- **Day 77** — depth testing. Overlapping cubes render correctly.
- **Day 78** — face culling. Toggle on/off, predict the artifact.
- **Day 79** — Phong lighting: ambient.
- **Day 80** — Phong lighting: diffuse.
- **Day 81** — Phong lighting: specular. Move the light.
- **Day 82** — materials. Diffuse + specular maps.
- **Day 83** — light types: directional.
- **Day 84** — light types: point + attenuation.
- **Day 85** — light types: spot.
- **Day 86** — multiple lights in one shader.
- **Day 87** — model loading (`tinyobjloader`). Load a real model.
- **Day 88** — model loading: textures from the model file.
- **Day 89** — framebuffers. Render to a texture.
- **Day 90** — post-processing: invert pass.
- **Day 91** — post-processing: greyscale + kernel blur.
- **Day 92** — normal mapping. Side-by-side comparison.
- **Day 93** — shadow mapping: depth pass from the light.
- **Day 94** — shadow mapping: apply to the scene.
- **Day 95** — shadow PCF. Soften the edges.
- **Day 96** — shadow bias tuning. Kill the acne.
- **Day 97** — instancing: 1000 cubes.
- **Day 98** — instancing: 100k cubes. Measure the draw call.
- **Day 99** — RenderDoc: capture your scene. Find one thing to fix.
- **Day 100** — fix the thing from Day 99. Commit before/after numbers.
- **Day 101** — ImGui: an FPS/draw-call overlay.
- **Day 102** — ImGui: sliders that move a light.
- **Day 103** — scene object list (mesh + transform + material). Render N objects.
- **Day 104** — RAII for GL objects (textures, buffers, shaders). No leaks.
- **Day 105** — showcase scene. Everything from Phase C in one scene. **Phase C done.** Tag `graphics-v1`.

---

# PHASE D — Engine (Days 106–165)

**Rule:** you're building the engine now. Each day is one feature. You can see progress every session.

## Block D1 — Shell (Days 106–112)

- **Day 106** — engine shell: window + main loop + update/draw split.
- **Day 107** — input handling: keyboard state.
- **Day 108** — input handling: mouse + camera controls.
- **Day 109** — fixed timestep loop. Interpolate render.
- **Day 110** — scene list: render N objects from a list.
- **Day 111** — scene list: per-object uniforms (model matrix).
- **Day 112** — FPS counter + frame budget overlay. **Block D1 done.** Tag `engine-shell`.

## Block D2 — ECS (Days 113–120)

- **Day 113** — entities as IDs. `Entity` type = `uint32_t`.
- **Day 114** — components as arrays. `Position`, `Velocity` as plain structs.
- **Day 115** — systems: a movement system that updates all positions.
- **Day 116** — render system: read transform + mesh, push to renderer.
- **Day 117** — add/remove components at runtime.
- **Day 118** — scene graph: parent/child transforms.
- **Day 119** — scene graph: dirty flags for efficiency.
- **Day 120** — spawn 1000 entities from code. **Block D2 done.** Tag `ecs`.

## Block D3 — Physics 2D (Days 121–130)

- **Day 121** — fixed timestep integration. Position += velocity * dt.
- **Day 122** — AABB colliders. Test overlap.
- **Day 123** — collision resolution: push apart.
- **Day 124** — rigid bodies: mass, inverse mass.
- **Day 125** — restitution (bounce) + friction.
- **Day 126** — stacking: solve iterations.
- **Day 127** — 10-box stack that doesn't jitter.
- **Day 128** — raycasts: click objects.
- **Day 129** — 2D character controller: gravity, jump, coyote time.
- **Day 130** — mini-game: "Knock the Tower." Playable. **Block D3 done.** Tag `physics-2d`.

## Block D4 — Save/Load + Editor (Days 131–140)

- **Day 131** — JSON setup (`nlohmann/json`).
- **Day 132** — serialize one entity.
- **Day 133** — serialize the whole scene.
- **Day 134** — deserialize. Save → quit → load → identical.
- **Day 135** — scene file versioning. Corrupt file → friendly error.
- **Day 136** — ImGui hierarchy panel.
- **Day 137** — ImGui properties panel. Edit transform.
- **Day 138** — ImGui entity picker. Click → select.
- **Day 139** — play/stop mode: reset scene, run, stop.
- **Day 140** — build a level entirely in the editor. **Block D4 done.** Tag `editor`.

## Block D5 — Polish (Days 141–150)

- **Day 141** — resource manager: load textures/meshes once.
- **Day 142** — asset manifest. Missing asset → loud error.
- **Day 143** — performance pass: profile, find #1 cost.
- **Day 144** — fix the #1 cost. Commit before/after.
- **Day 145** — ASan sweep. Whole engine leak-free.
- **Day 146** — clang-tidy pass. Fix what it finds.
- **Day 147** — demo game: objective + win state.
- **Day 148** — demo game: polish + restart.
- **Day 149** — Release build. One command to run.
- **Day 150** — README with screenshots + GIF. **Block D5 done.** Tag `engine-v1`.

## Block D6 — Portfolio (Days 151–165)

- **Day 151** — 60-second trailer: record clips.
- **Day 152** — edit the trailer.
- **Day 153** — GitHub Actions CI build.
- **Day 154** — test coverage note in README.
- **Day 155** — résumé rewritten around outcomes.
- **Day 156** — LinkedIn updated + project featured.
- **Day 157** — target studio list (10+ roles in Montréal).
- **Day 158** — cover letter template + 3 tailored letters.
- **Day 159** — interview Q bank: 50 questions.
- **Day 160** — drill 10 questions out loud.
- **Day 161** — whiteboard practice: 1 problem, narrate.
- **Day 162** — mock interview with a peer.
- **Day 163** — application push 1: 3–5 studios.
- **Day 164** — application push 2: 3–5 more.
- **Day 165** — post the trailer. **Phase D done.** Tag `engine-portfolio`.

---

# Optional (after everything)

- **Section 3 — Ray tracing** (after the engine ships): *Ray Tracing in One Weekend*, then *Tiny Renderer*.
- **DirectX 12:** port the engine renderer. Not a new plan, just a port.
- **Vulkan:** after DX12. Only if the job hunt needs it.

---

## The tracker format

`tracker/track.md` looks like this:
