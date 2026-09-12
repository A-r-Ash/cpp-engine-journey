# Glossary — CG → Engine Master Plan

Every term used in the plan, each with its explanation right next to it. If a term is not here, the plan named it wrong.

**This file grows as Sections 4–8 are written.**

---

## Plan-level terms

- **Section** — one part of the plan. This plan has 8 of them, numbered 1–8.
- **Required** — the sections (by number) that must be understood before this section starts.
- **Lessons** — what you learn before starting the work of a section.
- **Steps** — the actual work and implementation of a section; doing, not just reading.
- **Foundation** — a section nothing depends on; the base other sections build on. Sections 1 and 2 here.
- **Optional** — explicitly non-mandatory. The only optional section is 7 (Vulkan), and it comes after this plan.
- **Done (condition)** — the checkable result that marks a Step finished. A section is done when all its Done conditions are true.
- **The Engine** — the goal: your own game engine. The renderer, physics, input, scenes, editor, and a playable demo, all written by you.

## Section 1 — C++

- **C++** — the programming language everything in this plan is written in: graphics APIs, game engines, and yours.
- **Graphics API** — API = Application Programming Interface. Software that lets your program send work to the graphics card. OpenGL, DirectX 12, and Vulkan are graphics APIs.
- **Game engine** — a program that assembles a game from parts: rendering, physics, input, scenes, an editor. You are building one.
- **LearnCpp** — the free online C++ course → https://learncpp.com. You are nearly done with it (through ch 15).
- **Class** — a blueprint for an object: data plus the functions that operate on that data. Example: a `Camera` class.
- **Destructor** — the function a class runs automatically when an object is destroyed; used to free what the object owns.
- **Move semantics** — transferring an object's resources (memory, handles) to a new object instead of copying them; fast, and the reason `std::move` exists.
- **Smart pointer** — a class that owns a piece of memory and frees it automatically when no one needs it. Prevents leaks.
- **unique_ptr** — a smart pointer with exactly one owner; the memory is freed when that owner dies.
- **shared_ptr** — a smart pointer with several owners; the memory is freed when the last owner dies.
- **weak_ptr** — a smart pointer that watches a shared_ptr without owning it; breaks "holds-a-holds-a" loops between objects.
- **Container** — a ready-made data structure from the C++ standard library: `vector`, `array`, `map`, and more.
- **vector** (`std::vector`) — the resizable dynamic array; the most-used container in graphics code.
- **array** (`std::array`) — the fixed-size array, sized at compile time.
- **Inheritance** — building one class "in terms of" a more general base class; the "is-a" relationship.
- **Virtual function** — a function a derived class can override; the right version is chosen at runtime (via the vtable).
- **Class template** — a blueprint parameterized by a type, so the same code works for many types (`vector<float>`, `vector<int>`, ...).
- **Exception** — the C++ way to report an error: you `throw` it, code further up `catch`es it.
- **File input/output** — reading and writing files; your engine's save/load needs it.
- **Ownership** — the rule that one object is responsible for freeing a resource; know who owns what, and there are no leaks.
- **RAII** — Resource Acquisition Is Initialization. An object acquires a resource (like memory) when it is created and frees it when it is destroyed; the C++ style that makes leaks impossible by structure.
- **Memory leak** — memory a program keeps but never frees; leaks accumulate and crash long-running programs.
- **AddressSanitizer** — a compiler instrument (in MSVC and clang) that finds leaks and out-of-bounds errors while you run your tests.
- **Leak-free** — runs with zero memory leaks under AddressSanitizer.
- **Console game** — a game running in the terminal window; the Section 1 capstone is one.
- **Capstone** — the final build of a section, meant to prove, from scratch, that the section's lessons work together. The Section 1 capstone is "The Lost Key" (brief in master-plan.md, Step 1.3).
- **Build-first** — the working style of this plan: skim a lesson, then build; pull knowledge up at the moment you need it instead of reading ahead for hours. Every session ends with a working artifact.
- **Just-in-time learning** — looking a thing up exactly when a build needs it, rather than pre-reading everything first.
- **Spaced repetition** — recalling a fact at growing intervals so it sticks; the anti-re-reading method. 10 minutes a day.
- **Anki** — the spaced-repetition flashcard app; your glossary terms become its deck (one card per term, added as each section is written).
- **Bug-hunt drill** — a short program with one planted bug for you to find and fix under AddressSanitizer; a build, not a lesson.
- **Journal (devlog)** — `docs/journal.md`: after each build, 3–5 sentences on what you built and what surprised you. It is the proof-of-work record.
- **Chapter summary and quiz** — the page LearnCpp puts at the end of every chapter (e.g., "15.7 — Chapter 15 summary and quiz"). It recaps the chapter and exercises everything with questions. "Quizzes done" = you completed each of these pages for the chapters in the Step.
- **Momentum** — the habit of finishing small pieces regularly; the old plan lost it by being too big.

## Section 2 — Mathematics

- **Mathematics** — here: the vectors, matrices, and quaternions used to place, move, rotate, and aim 3D objects and cameras.
- **Vector** — a quantity with direction and length: a position or an offset in 3D space, `(x, y, z)`. Written as `Vec3` in your code.
- **Matrix** — a grid of numbers that transforms vectors. Graphics uses 4×4 matrices (a 3×3 can rotate and scale but cannot move an object).
- **Mat4** — your 4×4 matrix type.
- **Transformation** — any operation that moves, rotates, or scales an object.
- **Translation** — moving an object (changing its position).
- **Rotation** — turning an object around an axis.
- **Scale** — making an object bigger or smaller.
- **Matrix multiplication** — combining two matrices; applying the result applies both transformations. Order matters.
- **Dot product** — two vectors in, one number out: how much two directions agree (0 = perpendicular; 1 = same direction). Used for lighting — a surface facing the light is bright.
- **Cross product** — two vectors in, a third vector out, perpendicular to both. Used to build a surface's normal and camera axes.
- **Normal** — the perpendicular direction of a surface; lighting reads it to decide brightness.
- **Quaternion** — a 4-number rotation unit with no gimbal lock; the standard for smooth camera and object orientation.
- **Gimbal lock** — the failure of three-angle (yaw/pitch/roll) rotation: two rotation axes line up and a direction of turning is lost. Quaternions avoid it.
- **Axis-angle** — describing a rotation as "axis, then degrees around it". Quaternions store rotation in this spirit.
- **Slerp** — spherical linear interpolation; the smooth way to blend between two orientations (two quaternions).
- **Interpolation** — computing values in between given ones; used for smooth movement and smooth rotation.
- **Coordinate system** — a frame that says where things are relative to an origin. Graphics chains several: local → world → view → screen.
- **Local space** — a point measured relative to its own object ("the tip of the cube's nose").
- **World space** — a point measured relative to the whole scene (the origin is the scene's zero).
- **View space** — a point measured relative to the camera (camera at the origin, looking down one axis).
- **Screen space** — after projection, the 2D pixel coordinates of what the camera sees.
- **Right-handed / left-handed** — the two conventions for which direction the z-axis points; they affect cross products and camera math. You pick one and document it.
- **Row-major / column-major** — two ways of laying a matrix's numbers in memory; they change how you index `Mat4` entries. You pick one and document it.
- **Yaw** — turning the camera left/right (around the vertical axis).
- **Pitch** — tilting the camera up/down (around the horizontal axis).
- **View matrix** — the math that moves the whole world into the camera's coordinate system (view space).
- **Projection matrix** — the math that squashes the 3D view into the 2D image, setting the field of view and the near/far plane.
- **FPS camera** — first-person shooter camera: free look with yaw and pitch, plus forward/strafe movement.
- **GoogleTest** — the C++ testing framework your math library is verified with.
- **Tests green** — the tests pass.
- **Field of view** — how wide the camera's view angle is; the projection matrix encodes it.

## Section 3 — Software Rendering and Ray Tracing

- **Renderer** — anything that turns a 3D description into an image.
- **Pixel** — one colored dot; an image is a grid of pixels ("picture element").
- **CPU** — the Central Processing Unit: your computer's main, general-purpose processor.
- **GPU** — the Graphics Processing Unit: specialized hardware made to run massive amounts of math in parallel.
- **Graphics card** — the physical card containing the GPU and its own memory.
- **Software rendering** — computing pixels on the CPU, in plain code, with no graphics hardware involved. It is the GPU's job, done slowly and understandably.
- **Ray tracing** — rendering method: an imaginary ray is sent from the camera through each pixel; where the ray first hits a surface, the surface's color is computed (and rays bounce further for reflections).
- **Ray** — a straight line with a start point and a direction.
- **Intersection** — the point where a ray meets a surface. Ray-meets-sphere (Section 2 math) is your first one.
- **Reflection** — a ray bouncing off a surface like a mirror; a ray tracer shoots a new ray from the bounce point.
- **Rasterization** — rendering method: project the 3D triangles of a model onto the 2D image, then fill the pixels inside each triangle, nearest winning.
- **Triangle** — the basic flat shape a 3D object is built from; a model ("mesh") is thousands of triangles.
- **Vertex** — the corner of a triangle, holding a position. Later it also carries color, normals, texture coordinates.
- **Z-buffer** — also called the depth buffer. It stores, for every pixel, how far away the currently drawn surface is; a new surface only overwrites the pixel if it is nearer. This is the depth test.
- **Depth order** — which surface is nearest to the camera; the z-buffer enforces it.
- **Flat shading** — coloring each triangle with a single color based on its normal, so the model's shape reads clearly. The simplest lighting.
- **Image file** — the output of a renderer. Early courses use PPM, a simple human-readable image format.
- **Parallelism** — doing thousands of computations at the same time. A GPU runs pixel work in massively parallel blocks; that is why it is so much faster than a CPU for rendering.
- **Frame** — one finished image in the stream a renderer emits.
- **Shadow** — an area a light cannot reach because an object blocks it; computed later (OpenGL section) by testing depth from the light's point of view.

## Section 4 — OpenGL

- **OpenGL** — the teaching graphics API: software that turns your draw calls into GPU work, hiding much of the hardware. Sections 4 and 5 use it.
- **GLFW** — the small library that opens a window, handles input, and hands OpenGL a drawing surface on Windows, macOS, and Linux.
- **GLSL** — the shader programming language OpenGL uses; C-like, GPU-targeted.
- **Graphics pipeline (rendering pipeline)** — the fixed sequence a GPU runs to turn 3D geometry into pixels: vertex processing → (geometry/tessellation, optional) → rasterization → fragment shading → output. You program part of it (shaders); the rest is hardware.
- **Vertex** — a corner point of a triangle, carrying position (and later color, normal, texture coordinates). Exists already in Section 3; here it becomes typed GPU data.
- **Vertex shader** — the shader that runs once per vertex: transforms its position (your view/projection matrices from Section 2) and passes data onward.
- **Fragment shader** — the shader that runs once per pixel (fragment): decides the pixel's final color (lighting, textures).
- **VBO (vertex buffer object)** — the GPU memory holding your vertex data (positions, colors, ...).
- **VAO (vertex array object)** — the GPU object that remembers what's inside a VBO and how to read it; you bind it and draw.
- **EBO (element buffer object)** — index data: lets vertices be reused ("draw triangle 1 and 3 with vertices 0,1,2"). Also called index buffer.
- **Uniform** — a value you set once per draw (e.g., the current view or projection matrix) that every shader invocation reads.
- **Texture** — an image loaded into GPU memory and sampled by shaders; laid over geometry via UV coordinates.
- **UV coordinates** — the 0–1 texture space: which part of the image each part of the surface shows.
- **Sampler** — the GPU object that says *how* to read a texture at each pixel (repeat/clamp, nearest/linear, mipmaps).
- **Mipmap** — pre-shrunk copies of a texture (halved sizes) sampled when a surface is far away; kills aliasing shimmer.
- **Face culling** — skipping triangles that face away from the camera; halves the work for closed objects.
- **Phong lighting** — the classic lighting model: ambient (a base floor), diffuse (how much the surface faces the light — the dot product), specular (the bright hotspot). Computed per pixel.
- **PBR (physically based rendering)** — a lighting family that keeps physical energy: no light magically appears; lets one set of art values look right everywhere. The industry standard.
- **Shadow mapping** — rendering depth from the light's point of view first, then comparing pixels against it: if something nearer than you occludes the light, you're in shadow.
- **PCF (percentage-closer filtering)** — sampling the shadow depth several times around each pixel and averaging, giving soft shadow edges instead of hard ones.
- **Instancing** — sending one draw call that places the same geometry thousands of times with per-instance differences; huge speedup for crowds of identical objects (forests, particles).
- **Draw call** — one CPU command that says "render this geometry with this state." Fewer, bigger draw calls = more GPU time, less CPU overhead.
- **Render target / framebuffer** — the memory a pass draws into (the screen, or an intermediate image like the shadow map).
- **RenderDoc** — the GPU inspector: capture a frame, then look at every draw call, texture, and shader state inside it. The tool for "why is this wrong/slow."
- **Fixed-function** — the old GPU style where stages were hard-wired options you couldn't program; replaced by programmable shaders.

## Section 5 — GPU Architecture and Shaders

- **Streaming multiprocessor (SM)** — the GPU's work unit (NVIDIA's name; AMD calls it a CU): a group of cores that runs small batches of threads together. A card holds many.
- **Warp / wavefront** — the batch of 32 (NVIDIA) or 64 (AMD) threads that run in lockstep on one SM; the unit of GPU scheduling.
- **Occupancy** — how full each SM is with ready threads; higher occupancy hides latency (waiting for memory) with other work.
- **Compute shader** — a shader that runs arbitrary math without drawing triangles; used for the engine's future effects (particles, post-processing, simulation).
- **Memory hierarchy (GPU)** — the GPU's layered memory: registers → shared memory → L2 cache → video memory (VRAM). Getting data close to the SM is the whole perf game.
- **Bandwidth** — how many bytes the GPU can move per second; usually the real bottleneck, not math speed.
- **Shadertoy** — a website where you write fragment shaders in the browser and see the result instantly; the sandbox for shader intuition.
- **Blog feed** — the graphics blogs to follow for Section 5's weekly summaries: MJP, iq, demofox, zeux, Courrèges.

## Section 6 — DirectX 12

- **DirectX 12** — Microsoft's modern graphics API; the renderer's target. It exposes the hardware much more directly than OpenGL: you drive queues, memory, and synchronization yourself.
- **Swapchain** — the round-robin of front/back buffers you draw into; when you "present," the front and back swap so the image appears without tearing (with vsync control).
- **Frame in flight** — drawing frame N while the GPU is still busy with frame N−1; requires several different buffers per frame so you never overwrite what the GPU still reads.
- **Command list** — the GPU's "todo list": a list of operations (draws, binds, transfers) you record on the CPU and then hand to a queue.
- **Command queue** — where the GPU picks from: you submit recorded command lists and the GPU executes them in order.
- **Descriptor** — the GPU's identification tag for a resource ("buffer #3 as a shader-readable input"). DirectX 12 asks you to manage these explicitly, where OpenGL hid them.
- **Root signature** — the fixed layout of what a pipeline will feed shaders (constants, descriptors, tables); validated so shaders never see mismatched data.
- **Resource barrier** — your explicit statement that a buffer is changing role on the GPU (e.g., from "write depth" to "read as texture"), so the hardware never reads stale data.
- **PIX** — Microsoft's GPU capture tool for DirectX 12 (RenderDoc's DirectX-side counterpart); captures, inspects, and profiles frames.
- **Present** — the command that flips the swapchain: make the drawn buffer the visible one.

## Section 7 — Vulkan *(optional)*

- **Vulkan** — the newest, most explicit graphics API: you allocate memory, manage queues, and order work yourself. Same underlying pipeline as DirectX 12, fewer conveniences.
- **Validation layers** — Vulkan's built-in checker: catches API misuse (bad lifetimes, illegal state) and reports it during development. The API policing itself.
- **VMA (Vulkan Memory Allocator)** — the standard library for Vulkan memory allocation; sane memory management without hand-rolling it.
- **Queue family** — the separate GPU queues Vulkan exposes (graphics, compute, transfer); you pick which family each task uses.
- **Render pass** — Vulkan's explicit declaration of what a pass draws into and what happens at its borders (e.g., "clear at start, don't touch afterward") so the GPU can optimize.

## Section 8 — The Engine

- **Entity** — an id, nothing else, in an ECS: a number that tags a thing in the world ("the player", "lamp #3").
- **Component** — pure data attached to an entity in an ECS: `Transform`, `Mesh`, `Light`, `Health`. No logic, just data.
- **System** — pure logic that runs over components in an ECS: one system moves everything with a `Transform` and velocity; another renders everything with a `Mesh`. Data and logic live apart.
- **ECS (Entity Component System)** — the data-oriented engine architecture made of the three above; cache-friendly, simple to extend. EnTT is the reference implementation to read.
- **Scene graph** — the parent/child tree of scene objects; a child inherits its parent's transform ("move the ship, its turrets move with it").
- **Fixed timestep** — calling physics with the same time step every tick regardless of frame rate, so simulations don't change speed on different machines.
- **Input system** — the engine part that turns raw keyboard/mouse/controller events into a steady "what is the player pressing now" service any system can read.
- **Collider** — the simplified shape used for collision (box, sphere) instead of the real mesh; cheap, fast physics.
- **Physics engine** — the subsystem integrating positions/velocities and resolving collisions. Box2D is the classic 2D one — read its structure, then build simple.
- **Serialization** — turning engine state (entities, components) into a file and back; the save/load machinery. JSON via nlohmann is the plan's format.
- **Dear ImGui** — the immediate-mode UI library: call it once per frame, it draws the tool window; the editor's backbone.
- **Editor** — a window where you build a level (add/move/delete entities, tune lights and camera live) without touching code.
- **Release build** — the optimized, packaged build someone downloads; packaged as an EXE with the demo.
- **Devlog / journal** — see Journal (working style).

## Tools (plan-wide)

- **Visual Studio 2022** — the IDE you develop in on Windows.
- **MSVC** — the Microsoft C++ compiler inside Visual Studio.
- **CMake** — the standard build tool: it generates project files and wires up the build.
- **Git** — version control. It saves snapshots (commits) of your project so work is never lost.
- **Commit** — a saved snapshot in Git.
- **RenderDoc** — a tool that captures a frame from the GPU and lets you inspect every draw call; used from Section 4 on.
- **OpenGL** — the teaching graphics API (Sections 4, 5). Cross-platform, huge docs, ideal to learn the pipeline.
- **DirectX 12** — Microsoft's modern graphics API (Sections 5, 6); the renderer's target. Montreal studios use it.
- **Vulkan** — the newest and most explicit graphics API; a planned optional section after this plan.
- **ECS** — Entity Component System: a game-architecture pattern (entities = ids, components = data, systems = logic); used in Section 8.