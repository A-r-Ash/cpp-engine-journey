# Resources — CG → Engine Master Plan

**Master resource list (never loses anything):**
- Full gist: https://gist.github.com/notnotrobby/ceef71527b4f15869133ba7b397912e9
- Raw text: https://gist.githubusercontent.com/notnotrobby/ceef71527b4f15869133ba7b397912e9/raw/cb43219cd9960c3cfd306ab778afca85a4c4e33c/cgp.md

**How to read this file:** *Primary* = learn from it · *Reference* = look it up when stuck · *Practice* = where the work actually happens.

**Every term used in the plan is defined (with an explanation next to it) in `glossary.md`.**

---

## Section 1 — C++

- **Primary:** LearnCpp ch 15–28 → https://learncpp.com
- **Reference:** cppreference.com → https://en.cppreference.com · Hacking C++ → https://hackingcpp.com · C++ By Example → https://cppbyexample.com
- **Practice:** cppquiz.org → https://cppquiz.org · w3resource C++ exercises → https://www.w3resource.com/cpp-exercises/ · Project Euler → https://projecteuler.net

## Section 2 — Mathematics

- **Primary:** 3Blue1Brown "Essence of Linear Algebra" → https://www.3blue1brown.com/topics/linear-algebra · 3D Math Primer for Graphics and Game Development → https://gamemath.com
- **Reference:** 3D Math Cheat Sheet → https://antongerdelan.net/teaching/3dprog1/maths_cheat_sheet.html · Immersive Math → https://immersivemath.com/ila/index.html
- **Practice:** your math library + GoogleTest harness in the repo

## Section 3 — Software Rendering and Ray Tracing

- **Primary:** Ray Tracing in One Weekend → https://raytracing.github.io · Tiny Renderer → https://github.com/ssloy/tinyrenderer
- **Reference:** Computer Graphics from Scratch → https://gabrielgambetta.com/computer-graphics-from-scratch/ · Scratchapixel → https://www.scratchapixel.com · Basic 2D Rasterization → https://magcius.github.io/xplain/article/raster.html
- **Practice:** Step 3.1, 3.2, 3.3 in the repo

## Section 4 — OpenGL

- **Primary:** LearnOpenGL → https://learnopengl.com (Getting started → Advanced lighting) · GLFW docs → https://www.glfw.org/docs/latest/
- **Reference:** docs.gl → https://docs.gl · Anton's OpenGL 4 Tutorials → https://antongerdelan.net/opengl/ · OpenGL Wiki → https://www.khronos.org/opengl/wiki · open.gl → https://open.gl
- **Practice:** Steps 4.1–4.11 in the repo · RenderDoc → https://renderdoc.org

## Section 5 — GPU Architecture and Shaders

- **Primary:** How Graphics Cards Work → https://computer.howstuffworks.com/graphics-card.htm · A Trip Through the Graphics Pipeline (2-part classic) → https://fgiesen.wordpress.com/2011/07/09/a-trip-through-the-graphics-pipeline-2011-index/ · Book of Shaders → https://thebookofshaders.com · Shadertoy → https://www.shadertoy.com
- **Reference:** PBR → https://pbr-book.org · Intro to compute shaders → https://anteru.net/blog/2018/intro-to-compute-shaders/ · MJP's blog → https://therealmjp.github.io · iq → https://iquilezles.org · demofox → https://blog.demofox.org · zeux → https://zeux.io
- **Practice:** weekly Shadertoy sketch + one blog summary a week in the journal

## Section 6 — DirectX 12

- **Primary:** A Gentle Introduction to DirectX 12 → https://alextardif.com/AGIIDX12.html · Learn DirectX 12 with PAMinerva → https://www.3dgep.com/learning-directx-12-1/
- **Reference:** Microsoft DirectX 12 docs → https://learn.microsoft.com/en-us/windows/win32/direct3d12/direct3d-12-graphics · DirectX-Graphics-Samples → https://github.com/microsoft/DirectX-Graphics-Samples · Minimal D3D12 (d7samurai) → https://gist.github.com/d7samurai/261c69490cce0620d0bfc93003cd1052
- **Practice:** the Step 6.x ports + PIX (in the Windows SDK, or via the Addon installer)

## Section 7 — Vulkan *(optional)*

- **Primary:** vkguide.dev → https://vkguide.dev · Vulkan Tutorial → https://vulkan-tutorial.com
- **Reference:** vkdoc.net → https://vkdoc.net · Vulkan Specification → https://registry.khronos.org/vulkan/specs/latest/html/vkspec.html · Platform data → https://vulkan.gpuinfo.org
- **Practice:** Steps 7.1–7.3 in the repo

## Section 8 — The Engine

- **Primary (read code, then build yours):** Box2D → https://github.com/erincatto/box2d · EnTT (ECS) → https://github.com/skypjack/entt · Godot → https://github.com/godotengine/godot · Doom 3 BFG → https://github.com/id-Software/DOOM-3-BFG
- **Reference:** Dear ImGui → https://github.com/ocornut/imgui · nlohmann/json → https://github.com/nlohmann/json · Modern CMake → https://cliutils.gitlab.io/modern-cmake/ · Pro Git → https://git-scm.com/book/en/v2
- **Practice:** the engine repo + GoogleTest

---

## Tools (used everywhere)

Visual Studio 2022 + MSVC · CMake · Git · AddressSanitizer · GoogleTest · GLFW (Section 4) · RenderDoc (Sections 4+) · PIX (Section 6) · Nsight (optional, NVIDIA)

## Communities (when stuck)

Graphics Programming Discord · r/GraphicsProgramming (Reddit)