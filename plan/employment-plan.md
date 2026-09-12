# Employment Plan — CG → Engine Master Plan

**Status:** skeleton. Filled in once the engine demo is playable (Section 8) — the portfolio bar below is the trigger.

## Why this exists

The effect of building the engine is a body of work you can hold in one hand. The portfolio bar mirrors engine milestones; this file turns the milestone into a target, a role, an application, and a conversation.

## Targets (Montréal + remote, junior roles)

| Studio | Focus | Role type |
|--------|-------|-----------|
| Eidos-Montréal | AAA — Deus Ex / Tomb Raider | Engine / Tools / Graphics programmer |
| Behaviour Interactive | Live-service — Dead by Daylight | Engine / Tools / C++ gameplay |
| Gameloft | Mobile/AAA multiplatform | Engine / C++ tools |
| Ludia | Mobile — Jurassic World | C++ / tools |
| Ubisoft (Montréal) | AAA — Assassin's Creed | Engine / graphics programmer |
| WB Games (Montréal) | AAA — Batman/Shadow | Engine / tools |
| Frima | Creative studio, smaller teams | Generalist C++ |

**Résumé role line:** junior C++ / engine / tools programmer — "renders, lights, and serializes in DirectX 12; built a small engine end-to-end."

## Portfolio bar (the milestone ↔ application mapping)

| Engine milestone (Section 8) | Portfolio-ready at | What it proves to a recruiter |
|---|---|---|
| Step 8.1–8.3 (shell + renderer + ECS/scene graph) | — | Can structure a nontrivial C++ program |
| Step 8.4 (physics) | — | Can read Box2D and re-implement ideas |
| Step 8.5 (save/load) | — | File I/O, serialization discipline |
| Step 8.6 (ImGui editor) | — | Tooling — the "tools programmer" pitch |
| Step 8.7 (playable demo, packaged EXE) | **apply once here** | Ships; the centerpiece |
| Step 8.8 (polish, README, release tag) | apply + networking | Presents like a professional |

## Application pipeline

- [ ] One-page résumé rewritten around the demo (skills from track.md, all provable).
- [ ] Portfolio page: repo + demo GIF/YouTube + README with a screenshot on line one.
- [ ] Applications tracker sheet — columns: studio, role, URL, applied date, response date, next step. (Lives in the repo as `docs/applications.csv`.)
- [ ] Batch of 3 applications a week, each cover letter customized by studio (2 sentences of why that studio+you).

## Networking actions

- [ ] Graphics Programming Discord — visibly building; screenshot progress in the showcase channel once a month.
- [ ] LinkedIn: one post at each portfolio bar crossing (screenshot + 3 lines).
- [ ] Game dev meetups in Montréal — come with the demo on a USB.
- [ ] Referral asks: ex-colleagues/classmates before cold applications, always.

## Interview topic bank

Drawn from the plan — by section, so each has a spoken answer you can give from your own code:

- C++ (S1): ownership, RAII, leaks, move semantics, smart pointers, bug-hunt answers.
- Math (S2): "explain a projection matrix", dot/cross product uses, quaternions vs angles.
- Software rendering (S3): "explain ray tracing / rasterization", the both-sides note.
- OpenGL (S4): pipeline stages, depth, lighting, shadows, instancing, draw calls.
- GPU (S5): "explain what a graphics card does", parallelism, bandwidth vs compute.
- DirectX 12 (S6): command lists, descriptors, barriers, frames in flight, PIX workflow.
- Engine (S8): ECS, scene graph, fixed timestep, serialization, how the editor works.

**Practice format:** whiteboard one topic a day from the tracker's active section; one mock architecture question a week from the completed sections.

## Open questions (fill later)

- Work permit / sponsorship status for studios.
- Remote-first shortlist if relocation isn't wanted.
- Two demo "stories" (what to say about the Lost Key capstone and the engine) once both ship.