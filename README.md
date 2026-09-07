# C++ Game Engine Master Plan — LearnCpp-Paced (v4.0)

Portfolio-first roadmap from Unity/C# programmer to junior **C++ / engine / tools** roles.

**The one rule that defines v4.0:** Phase 0 follows LearnCpp's own chapter order, one chapter at a time — no jumping. Skipped chapters are recorded in the tracker's Deferred Registry, never silently dropped.

## Layout

| Path      | What lives here |
|-----------|-----------------|
| `plan/`   | The single master plan — `cpp-engine-master-plan-v3.5` (v4.0 content, filename kept for continuity) |
| `tracker/`| `day-tracker.md` — scorecard per milestone; header shows the current chapter (`ch 10.1 ✓ → next 10.2`) |
| `solutions/` | Labs and builds — one folder per day/milestone |
| `docs/`   | Devlog, interview bank, pitch refresh (added through the phases) |

## Ritual (10 seconds, twice a session)

1. **Before you read:** confirm the tracker's `Current:` line matches the chapter you're on.
2. **When a milestone's `Done` line is true** (chapter read, quiz done, build compiles warning-free), tick it and commit:
   `git add -A` then `git commit -m "M<x>: <what you built>"`, then `git push`.
3. Cadence rides on block gates: interview Q# + pitch refresh at the end of each milestone block.
4. Milestone tags: `cpp-core` (Phase 0 capstone), `math-v0.1`, `graphics-v1`, `engine-v1`, `voxel-freeze`, `engine-portfolio` / `cpp-mastery-lite`.

**Rest days are scheduled, not failures:** three full days off (no code, no reading) land after the `cpp-core` capstone, after the Phase 2 heavy stretch, and after the Phase 3 menu block — marked REST DAY 1/2/3 in the tracker.

The full rules live in `plan/cpp-engine-master-plan-v3.5.md` (including the golden rule: *extend, don't skip*).

You're at **ch 10.1 — Conversions, Aliases, Deduction**. Next: 10.2.