# LOG — dated history

Every gate passed, every commit, every artifact worth remembering.
Newest at the top. Nothing is edited, only appended.

---

## Format

`date | gate | commit hash | one-line journal entry`

- One row per gate passed. Sub-gates (B1.1–B1.5) roll into the parent row (B1).
- Provisional gates get `(prov.)` after the name.
- When a provisional gate is re-derived, add a new row: `<gate> — re-derived`.
- The commit hash is the one that *contains* the Done condition being met.
- The journal line is one sentence: what was built, what surprised you.
- **The file only grows.**

---

## Logging schedule — when to log

This section is the plan's mirror: for every gate in `PLAN.md`, this tells you
exactly when to commit, when to log, and when (if ever) to produce content.

### Rules that apply to every gate

- **Commit at the end of every session**, even if the gate is not finished.
  Commit message: `<gate> WIP: <what you did>`.
- **Commit when the Done condition is met.** Commit message: `<gate>: <Done summary>`.
- **Log one row in this file the moment a gate's Done condition is met.** Not at
  the end of the day. Not "later." The moment it passes, add the row.
- **Journal line** goes in the row. One sentence.
- **Content** (devlog post, screenshot, LinkedIn) is triggered only where marked
  below. Not every gate is content. Most are just commits and a log row.
- **If a gate spans multiple days:** one row per session in the "In progress"
  scratch area at the bottom, and one final row at the top when Done.

---

### Phase A — C++ Core

#### Gate A0 — LearnCpp ch 1–16.4

- **Commit trigger:** after each chapter group (A0.1, A0.2, ...).
- **Log trigger:** one row when A0.15 passes: `A0 | ch 1–16.4 complete`.
- **Content:** none.

#### Gate A1 — Containers

- **Commit trigger:** end of each sub-gate (A1.1 through A1.7).
- **Log trigger:** one row when A1.7 passes.
- **Content:** none.

#### Gate A2 — Iterators & Algorithms

- **Commit trigger:** end of each sub-gate. The deliberate-leak exercise in A2.6
  gets its own commit: `A2.6: deliberate leak, ASan catches it, fixed`.
- **Log trigger:** one row when A2.7 passes.
- **Content:** none.

#### Gate A3 — Functions as Values

- **Commit trigger:** end of each sub-gate.
- **Log trigger:** one row when A3.7 passes.
- **Content:** none.

#### Gate A4 — Operators & Memory

- **Commit trigger:** end of each sub-gate. A4.7 (move ctor/assignment with call
  logging) and A4.8 (`std::move` copy-count proof) each get their own commit —
  these are the ones you'll want to look back at.
- **Log trigger:** one row when A4.11 passes.
- **Content:** none.

#### Gate A5 — Inheritance and Polymorphism

- **Commit trigger:** end of each sub-gate. A5.8 (deliberate `override`/`final`
  mistake) gets a commit with the compiler error quoted in the commit message body.
- **Log trigger:** one row when A5.9 passes, including the vtable-diagram sentence.
- **Content:** none yet.

#### Gate A6 — Templates, Exceptions, I/O

- **Commit trigger:** end of each sub-gate.
- **Log trigger:** one row when A6.9 passes.
- **Content:** none.

#### Gate A7 — Capstone "The Lost Key"

- **Commit trigger:** one per sub-gate (A7.1, A7.2, A7.3). A7.3's commit is
  tagged `cpp-core`.
- **Log trigger:** one row when A7.3 passes, with the ASan result in the line.
- **Content:** *first devlog post.* Screenshot of a play session + 3 lines.
  This is the first time an outsider can look at what you built and understand it.

#### Gate A8 — Bug-hunt drills

- **Commit trigger:** one per bug (A8.1 through A8.5). Commit message format:
  `A8.x: <bug type>, found in <n> min, fix: <one line>`.
- **Log trigger:** one row when A8.5 passes, with all five bugs listed in the
  journal line as a compact summary.
- **Content:** none. This is internal.

**Phase A is done.** → **Content trigger:** a single "Phase A done" devlog post.
Screenshot of the capstone, three lines on what the phase taught you.

---

### Phase B — Mathematics

#### Gate B1 — Vectors

- **Commit trigger:** end of each sub-gate (B1.1–B1.5). B1.5 (GoogleTest green)
  gets its own commit.
- **Log trigger:** one row when B1.5 passes, with "cross test passes, normalize
  to 1e-6" in the line.
- **Content:** none.

#### Gate B2 — Matrices

- **Commit trigger:** end of each sub-gate. B2.1 (layout decision) gets a commit
  that also updates the README with the chosen layout.
- **Log trigger:** one row when B2.4 passes.
- **Content:** none.

#### Gate B3 — Affine Transforms

- **Commit trigger:** one per sub-gate.
- **Log trigger:** one row when B3.4 passes, with "cube corner verification at
  3 rotation angles" in the line.
- **Content:** none.

#### Gate B4 — Coordinate Systems and the Projection

- **Commit trigger:** one per sub-gate. B4.4 (pipeline diagram) gets a commit
  that adds the diagram to `docs/`.
- **Log trigger:** one row when B4.4 passes, with the near/far point test result.
- **Content:** **one screenshot** — the pipeline diagram from `docs/`. Post it
  as a devlog image with three lines explaining the derivation. This is the
  first "I derived it myself" artifact.

#### Gate B5 — Quaternions I

- **Commit trigger:** one per sub-gate.
- **Log trigger:** one row when B5.4 passes, with "5 random rotations, quat vs
  matrix, 1e-6 agreement" in the line.
- **Content:** none.

#### Gate B6 — Quaternions II

- **Commit trigger:** one per sub-gate.
- **Log trigger:** one row when B6.3 passes, with the slerp-vs-lerp observation.
- **Content:** none.

#### Gate B7 — Coordinate-System Drill

- **Commit trigger:** one commit for the drill script, one for the hand-computed
  results file in `docs/`.
- **Log trigger:** one row when B7.3 passes, with "hand vs code, 1e-4 agreement."
- **Content:** none.

#### Gate B8 — Math Library Freeze

- **Commit trigger:** one commit when the blank-file rebuild passes, tagged
  `math-v1`. The commit message should include the time taken (target: < 90 min).
- **Log trigger:** one row when B8.2 passes.
- **Content:** **one devlog post** — "Math library frozen." Screenshot of the
  green test output + the tag. This is the gate that unblocks Phase C. Announce it.

**Phase B is done.** → **Content trigger:** a summary post: what the math
library contains, what was hardest, what you'd redo. This post is the one a
recruiter will read.

---

### Phase C — OpenGL

#### Gate C1 — Window and Clear — ✅ *(provisional)*

- Already passed. No log row until re-derivation. Re-derivation is triggered by
  B8 passing (see below).

#### Gate C2 — Triangle, Shaders, VAO/VBO/EBO — ✅ *(provisional)*

- Already passed. Same rule: log row deferred until re-derivation.

#### Gate C5 — Textures

- **Commit trigger:** one per sub-gate (C5.1, C5.2, C5.3).
- **Log trigger:** one row when C5.3 passes.
- **Content:** none.

#### Gate C9 — RenderDoc Basics

- **Commit trigger:** one commit for the capture file (`.rdc`) + the writeup in
  `docs/`.
- **Log trigger:** one row when C9.3 passes, with "found <n> wasted draw calls,
  fix: <one line>."
- **Content:** **one devlog post.** Screenshot of the RenderDoc pipeline view.
  This is the first "I used a real graphics tool" post.

#### Re-derivation trigger — C1, C2 after B8

- **When B8 passes**, immediately re-derive C1 and C2 using your own `Mat4` for
  the shader transform.
- **Commit trigger:** one commit: `C1, C2: re-derived with own math`.
- **Log trigger:** two new rows at the top: `C1 — re-derived` and `C2 — re-derived`.
  The `(prov.)` marker in `PLAN.md` is removed in place.
- **Content:** none. The re-derivation is housekeeping, not a milestone.

#### Gate C3 — Your Matrices on the GPU

- **Commit trigger:** one per sub-gate. C3.4 (cube rotating with your matrices)
  gets the milestone commit.
- **Log trigger:** one row when C3.4 passes.
- **Content:** **one devlog post.** GIF of the rotating cube + 3 lines: "first
  time my own matrix code drove the GPU."

#### Gate C4 — Coordinate Systems in Practice

- **Commit trigger:** one per sub-gate. C4.2 gets a RenderDoc capture committed
  alongside the code.
- **Log trigger:** one row when C4.2 passes.
- **Content:** none. (C3's post covers the visual.)

#### Gate C6 — FPS Camera

- **Commit trigger:** one per sub-gate.
- **Log trigger:** one row when C6.3 passes, with "no gimbal lock at ±89°."
- **Content:** **one devlog post.** Short GIF of walking through the scene.
  This is the first "feels like a game" moment.

#### Gate C7 — Lighting

- **Commit trigger:** one per sub-gate. C7.5 (PBR) gets its own commit.
- **Log trigger:** one row when C7.5 passes.
- **Content:** **one devlog post.** Before/after lighting screenshots. Three
  lines on what changed.

#### Gate C8 — Shadows

- **Commit trigger:** one per sub-gate. C8.4 (bias tuned) gets its own commit —
  include a screenshot in the commit body if your git host supports it.
- **Log trigger:** one row when C8.4 passes.
- **Content:** **one devlog post.** Shadow-acne-before / clean-after comparison.
  This is a classic "I fought the GPU and won" post.

#### Gate C10 — Instancing

- **Commit trigger:** one per sub-gate. C10.3 (measurement) gets a commit with
  the before/after numbers in the commit message body.
- **Log trigger:** one row when C10.3 passes, with the numbers in the journal line.
- **Content:** **one devlog post.** 100k cubes screenshot + the frame-time
  numbers. This is a performance post.

#### Gate C11 — RAII for GL Objects

- **Commit trigger:** one per wrapper (C11.1, C11.2, C11.3). C11.4 (ASan clean)
  gets a commit with the ASan output quoted.
- **Log trigger:** one row when C11.4 passes.
- **Content:** none.

#### Gate C12 — Engine Shell

- **Commit trigger:** one per sub-gate. C12.3 tags `engine-shell`.
- **Log trigger:** one row when C12.3 passes, with the tag named in the line.
- **Content:** **one devlog post.** "Engine shell done." Screenshot of the
  repo tree + the shell running. This is a phase transition; mark it.

**Phase C is done.** → **Content trigger:** a summary post: everything from
Phase C in one showcase scene, with a full breakdown of what's in it.

---

### Phase D — Engine

#### Gate D0 — Choose Specialty

- **Commit trigger:** one commit updating the top of `PLAN.md` with the specialty
  and three target job postings.
- **Log trigger:** one row when D0.2 passes.
- **Content:** **one devlog post.** "I'm going the <renderer / tools / systems>
  route, here's why." This post is deliberately public — it commits you.

#### Gate D1 — Fixed Timestep Loop

- **Commit trigger:** one per sub-gate.
- **Log trigger:** one row when D1.2 passes.
- **Content:** none.

#### Gate D2 — ECS

- **Commit trigger:** one per sub-gate.
- **Log trigger:** one row when D2.4 passes, with "1000 entities, <n> ms/frame."
- **Content:** none.

#### Gate D3 — Scene Graph

- **Commit trigger:** one per sub-gate.
- **Log trigger:** one row when D3.2 passes.
- **Content:** none.

#### Gate D4 — Physics 2D

- **Commit trigger:** one per sub-gate. D4.4 (10-box stack stable) gets its own
  commit with a GIF if your git host supports it.
- **Log trigger:** one row when D4.4 passes.
- **Content:** **one devlog post.** GIF of the stable stack + 3 lines. Physics
  is the first "it feels alive" moment.

#### Gate D5 — Save / Load

- **Commit trigger:** one per sub-gate. D5.3 (corrupt file handling) gets its own
  commit — include the error message in the commit body.
- **Log trigger:** one row when D5.3 passes.
- **Content:** none.

#### Gate D6 — Editor

- **Commit trigger:** one per sub-gate. D6.5 (level built entirely in the editor)
  is the milestone commit — attach a screenshot of the level.
- **Log trigger:** one row when D6.5 passes.
- **Content:** **one devlog post.** "I built a level without touching code."
  Screenshot of the editor + the level.

#### Gate D7 — Playable Demo

- **Commit trigger:** one per sub-gate. D7.3 (release build runs) tags `demo-v1`.
- **Log trigger:** one row when D7.3 passes.
- **Content:** **one devlog post.** Playthrough GIF + three lines. This is the
  moment the engine becomes a game.

#### Specialty gates — D8r/t/s-a/b/c

- **Commit trigger:** one per sub-gate (3 commits for your chosen track).
- **Log trigger:** one row per sub-gate when it passes, with numbers/links.
- **Content:** **three devlog posts, one per sub-gate.** Each post is the
  evidence a recruiter will read. Renderer: frame breakdown. Tools: walkthrough
  of another person using your editor. Systems: before/after profiling.

#### Gate D9 — Release Build + README

- **Commit trigger:** one commit tagged `release-v1`. README committed in the
  same commit.
- **Log trigger:** one row when D9 passes.
- **Content:** **one devlog post.** Link to the release + the README screenshot
  on line one.

#### Gate D10 — Trailer

- **Commit trigger:** one commit adding the trailer link to the README.
- **Log trigger:** one row when D10 passes.
- **Content:** the trailer itself is the content. Post everywhere.

#### Gate D11 — Portfolio Page

- **Commit trigger:** one commit adding `portfolio.md` or equivalent.
- **Log trigger:** one row when D11 passes.
- **Content:** the portfolio page is the content. Share it.

**Phase D is done.** → **Content trigger:** a final post — "Engine shipped."
Link the repo, the trailer, the portfolio.

---

### Content calendar (summary)

Total content triggers across the whole plan: **~18 posts.**

| Trigger | Post |
|---|---|
| A7 passes | Capstone screenshot + 3 lines |
| Phase A done | Phase A summary |
| B4 passes | Pipeline diagram |
| B8 passes | Math library frozen |
| Phase B done | Math library summary |
| C9 passes | RenderDoc pipeline view |
| C3 passes | First own-matrix cube (GIF) |
| C6 passes | FPS camera walkthrough (GIF) |
| C7 passes | Lighting before/after |
| C8 passes | Shadow acne before/after |
| C10 passes | 100k cubes + numbers |
| C12 passes | Engine shell done |
| Phase C done | Phase C showcase |
| D0 passes | Specialty announcement |
| D4 passes | Stable physics stack (GIF) |
| D6 passes | Level built in editor |
| D7 passes | Playable demo playthrough |
| D8x (×3) | Three specialty evidence posts |
| D9 passes | Release + README |
| D10 passes | Trailer |
| D11 passes | Portfolio page |
| Phase D done | Engine shipped |

**Cadence rule:** no two consecutive posts more than 3 weeks apart. If three
weeks pass with no post, one of two things is true — either a gate is dragging,
or you've forgotten the rule. Both are fixable.

---

## In progress (scratch)

Use this area for sessions where a gate spans multiple days. Move the entry to
the dated log above when the gate's Done condition is met.

- `<date>` | `B1` | `<commit>` | started `Vec3`; dot + cross passing, normalize next.

---

## Dated log

Newest at the top.

### 2026

#### September

- — | B1 | — | **active gate**
- — | C2 Triangle + shaders *(prov.)* | — | VAO/VBO/EBO, indexed draw, colored quad
- — | C1 Window + clear *(prov.)* | — | GLFW window, GLAD, clear color
- — | A4 Operators & memory | — | ch 21–22, move semantics, smart pointers, rest day
- — | A3 Functions as values | — | ch 20, lambdas, `std::function`, recursion
- — | A2 Iterators & algorithms | — | ch 18–19, deliberate-leak drill fixed under ASan
- — | A1 Containers | — | ch 16.5–17.6 with quizzes
- — | A0 LearnCpp ch 1–16.4 | — | pre-plan foundation