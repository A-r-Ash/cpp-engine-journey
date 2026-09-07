# C++ → Game Engine Master Plan — LearnCpp-Paced Edition (v4.0)

A portfolio-first path for a Unity/C# programmer (DCS) targeting junior **C++ / engine / tools** roles in **Montréal** (Eidos-Montréal, Behaviour Interactive, Gameloft, Ludia, Ubisoft, WB Games, Frima).

**Premise:** You are job-hunting *now*. Studios won't wait a year for a portfolio piece. So the goal is not the perfect engine; the goal is **a job** — and the engine you build is the evidence.

## The one change that made v4.0

v3.5 was **topic-paced**: every day mapped to a LearnCpp chapter, but the mapping jumped around the book (Day 2 → ch 5, Day 3 → ch 11, Day 4 → ch 10, Day 5 → ch 20, Day 17 → ch 12). That non-linear jumping is what killed momentum — the plan's own "chapter map" bragged about it.

**v4.0 swaps the spine. No more day-topics. Phase 0 now follows LearnCpp's own chapter order, one chapter at a time, in sequence.** Topics that previously got pulled forward (lambdas, pointers, classes, move semantics) stay in their natural chapter homes. `Day:` numbers only reappear in Phases 1–3, where the pacing is by project milestones and the "days" are effort-sessions, not calendar dates.

- **Phase 0 — LearnCpp Core, linear: ch 10.2 → ch 28** (in progress) → tag `cpp-core`
- **Phase 1 — Toolchain + Math + Graphics v1** (gated on `cpp-core`) → tag `graphics-v1`
- **Phase 2 — Physics 2D + Engine Architecture** (gated on `graphics-v1`) → tag `engine-v1`
- **Phase 3 — Polish, Portfolio, C++ Stretch** (gated on `engine-v1`) → tag `engine-portfolio` / `cpp-mastery-lite`

The finish line is unchanged: **a polished, documented, demonstrable engine + a trailer + applications sent.** How long it takes is now up to LearnCpp's pace — not a fixed Day 140.

## Where you are (tracking)

You track your position in **`J:\Plan_C++\tracker\day-tracker.md`** — one checkbox per milestone, grouped by phase, with the current LearnCpp chapter as the header (`Current: ch 10.1 ✓ → next 10.2`). Milestone tags mark the big claims. The whole journey lives in the git repo rooted at **`J:\Plan_C++\`**, and every milestone ends with a commit.

- **Morning (10 seconds):** open the tracker; confirm the `Current:` line matches where you are in LearnCpp.
- **Evening (10 seconds):** when a milestone's **Done** line is truly true (chapter read, quiz done, build works, cold error reading done), tick it and commit.
- Cadence lives at **block gates** — the last milestone of each block carries an `Interview: Q#` + `Pitch:` line (blocks: ch 10–11, ch 12–13, ch 14–17, ch 18–22, then per engine phase).
- Milestones earn git tags (listed in Appendix A): `cpp-core`, `math-v0.1`, `graphics-v1`, `engine-v1`, `voxel-freeze`, `engine-portfolio` / `cpp-mastery-lite`.

## How to read a milestone (this is the method)

Every milestone has the same shape. Read it in this order:

```
- **Milestone — Title**
  - **In plain words:** what this means, zero jargon — if you only read one line, read this.
  - **Summary:** the same idea in one proper sentence.
  - **Learn:** the ONE LearnCpp lesson/quiz to open before you type anything.
  - **Roadmap:** the search terms — use these ONLY when stuck and need to google.
  - **Build:** the concrete code you write, run, and commit.
  - **Done:** the observable, checkable condition that proves this milestone happened.
```

**Worked example — the milestone you're on:** you read "In plain words" (C++ will quietly change a number's type — sometimes losing data; you learn to spot and stop it). You open the ch 10 lessons in order (implicit conversion → narrowing → `static_cast` → aliases → `auto`), do the chapter quiz, then finish your conversion lab's last warning (the `C4245` at the `singedUnsigned` call — it wants `static_cast<unsigned>(-5)`). Then you tick it and commit.

**Three golden rules:**
1. **Never start a milestone cold.** Read the plain-words line first. If one chapter's lessons take you an hour, take the hour. The Build only works if the idea is warm.
2. **LearnCpp is the teacher; this plan is the order.** The `Learn:` lines always point at learncpp.com (or the explicitly-named exception). Repeat the pattern: read → quiz → predict → build → done.
3. **The verbs in "Done" are how you know.** They are written to be unmissable ("quiz done", "game runs under ASan with zero leaks"). If you can't tick one, the milestone isn't done — extend it, don't skip it. And if one milestone takes a week because a chapter is hard, that's fine: it's still one milestone.

## Rules of the road

1. **A milestone is done when its `Done:` line is true. Extend, don't skip.** Never skip forward in chapter order. This is the whole point of v4.0.
2. **Surgical cuts, not extensions.** Every phase lists must-haves vs nice-to-haves. If you fall a milestone behind by a block gate, cut the block's nice-to-haves *immediately* and protect the must-haves. (A cut is fine when you can name it and justify it — that's scope, not shortcuts.)
3. **Buffer cap:** max **2 skipped chapters** in the core at any time, and every skip **must be written in the Deferred Registry** (see Phase 0). A deferred chapter is a decision, not a hole — you can come back to it, and 90% of the time a later chapter or build pulls it back in.
4. **Cadence at block gates:** at the end of each milestone block — one C++ interview question answered in 5 minutes aloud, and one refresh of the 3-sentence pitch. Block gates in the core: after ch 11, ch 13, ch 17, ch 22. After that, each engine-phase consolidation is a gate. That's 20 interview answers + 20 pitch drafts by the finish line — *that* is your interview prep and portfolio copy.
5. **Networking, minimum one action per phase.** The technical work is necessary but not sufficient — you must be *known*. See Appendix F.
6. **Hard freeze lines:** no new voxel features after the voxel-freeze milestone. **No Vulkan until after the engine is shipped** — "Vulkan is after the finish line. There is no Phase 4." Same for metaverse-of-the-week rabbit holes.
7. **Every session ends with a commit you could defend** — a clean message, a passing build, an honest `Done` check.
8. **Hired mid-plan?** Freeze a `hired-YYYY` tag, keep every code asset, fold the remaining milestones into weekends. The plan is your skill map, not a straitjacket.
9. **The shortcut test** — whenever you're tempted to cut or rush something, ask: *"Could I explain this thing to an interviewer, including why I didn't do it?"* If yes, it's a safe scope cut. If no, it's debt — cut nothing from the must-have list without passing this.
10. **Tools:** MSVC + CMake + Git + VS Code, deps pinned in Appendix B. Everything below runs on your machine.
11. **Rest days are scheduled, not failures.** Three full days off — **no code, no reading, no networking** — land right after the heaviest pushes: **after `cpp-core`, after the Phase 2 mid-point, after the Phase 3 menu block**. They're marked in the tracker as REST DAY 1 / 2 / 3. Taking them is never a slip; you resume exactly where you left off the next day.
12. **One teacher, one order.** LearnCpp chapters run 1 → 28 in the book's own order. The moment two different sources fight about *what to learn next*, LearnCpp wins. You can still skip chapters that feel meh — but they go in the Deferred Registry.

## Your role and my role (the coaching agreement)

- **You** drive: the pace, the order, and which chapter you sit down with today. You read LearnCpp chapter by chapter and try the quiz before looking at answers.
- **I** do exactly four things, on request, and nothing preachy:
  1. **Build & read errors cold** — you bring code (quiz attempt, experiment, lab); I compile/run it with warnings on, and we read every warning/error together.
  2. **Answer what you ask** — a pointed question about a specific error, rule, or line. No lectures, no add-ons.
  3. **Scaffold on request** — a project folder, build setup, or a 5-line probe when you ask for it.
  4. **Keep the tracking honest** — update the tracker/plan when you tell me to.
- No front-loaded lessons. No daily assignments. If a LearnCpp page explains it, LearnCpp explains it.

---

# Phase 0 — LearnCpp Core: ch 10.2 → ch 28, in order

**Outcome:** You finish LearnCpp linearly — type conversion and aliases through dynamic allocation, own your memory model, master classes/copy/move/smart pointers — and leave Phase 0 with a console capstone that runs **leak-free under AddressSanitizer**, the thing every interview will probe.

**Montréal why:** Behaviour (Dead by Daylight) and Eidos interviewers ask about ownership, use-after-free, and RAII before any feature question. This phase is where you learn to *hunt the bugs they care about*.

**Must-haves:** conversions/aliases/`auto`; function templates; references/pointers (the pointer matrix); enums/structs; classes + copy/move; destructors/RAII; `std::vector`/`std::array`; iterators + algorithms; dynamic allocation; function pointers + **lambdas**; operator overloading; smart pointers; virtual functions + vtable model; template classes; exceptions basics; file I/O; the sanitizer/CRT leak workflow; console capstone.
**Nice-to-haves:** deep type-conversion trivia, advanced templates, exception-depth.
**Failure mode:** If 2+ chapters have piled up deferred by the ch 18–22 block, cut that block's nice-to-haves (advanced algorithm fun, deep operator-overloading corners) and protect the memory bootcamp stretch (ch 19, 20, 22). If the capstone is unfinished when you finish ch 28, ship it anyway and cut networking action #1 to a single LinkedIn connect.

## Phase 0 → LearnCpp chapter map (the spine — read strictly in order)

LearnCpp's own order is the law here. Milestones group chapters; every lesson in a chapter is read before the next chapter. "Your state" reflects the room so far.

| Milestone | LearnCpp | Your state |
|---|---|---|
| M1 | ch 1–4 (program model → types) | done via Days 1–3 — skim + quiz |
| M2 | ch 5 (constants, strings, `string_view`) | done — toolkit exists |
| M3 | ch 6 (operators) | **deferred** (skipped meh; skim on first real use) |
| M4 | ch 7 (scope, duration, linkage) | **deferred** (skipped meh; re-surfaces in CMake/multi-file work) |
| M5 | ch 8 (control flow + random) | done — dice game exists |
| — | ch 9 (error detection/handling) | **deferred** → 9.5 cin-validation revisit in Phase 1 input abstraction |
| M6 | **ch 10 (conversions, aliases, deduction)** | **current — 10.1 done, next 10.2** |
| M7 | ch 11 (overloads + function templates) | overloads done; templates new |
| M8 | ch 12 (references and pointers) | new — pointer matrix |
| M9 | ch 13 (enums, structs, aggregates) | new |
| M10 | ch 14 (classes) | new — C# culture shock |
| M11 | ch 15 (destructors, `static`, more classes) | new |
| M12 | ch 16 `std::vector` + ch 17 `std::array` | vector tasted on Day 2; array new |
| M13 | ch 18 (iterators + algorithms) + ch 19 (dynamic allocation) | new |
| M14 | ch 20 (function pointers, **lambdas**, recursion) | **lambdas finally arrive in their own chapter** |
| M15 | ch 21 (operator overloading) | new |
| M16 | ch 22 (move semantics + smart pointers) | memory bootcamp core |
| M17 | ch 23–25 (relationships, inheritance, virtual/vtable) | new |
| M18 | ch 26–28 (template classes, exceptions, I/O) | new |
| **Capstone** | console game with ownership, leak-free under ASan | tag **`cpp-core`** + REST DAY 1 |

## Block gates

Cadence lands at the end of each block — an `Interview: Q#N` + `Pitch:` line rides on the block's last milestone:

- **Block A (ch 10–11):** gate on M7 → Q#1 of 20 · pitch v0.1
- **Block B (ch 12–13):** gate on M9 → Q#2 of 20 · pitch v0.2
- **Block C (ch 14–17):** gate on M13 → Q#3 of 20 · pitch v0.3
- **Block D (ch 18–22):** gate on M16 + Consolidation → Q#4 of 20 · pitch v0.4
- **Phase close (capstone + ch 26–28):** Q#4 rides here if the capstone lands before M16's gate stretches — otherwise Q#4 moves to a Phase-0 close day you calendar. Keep it at **20 answers by the finish line**, that's what matters.

---

## Milestone M1 — The Program Model and Your First Types

- **In plain words:** What a C++ program actually is (files, functions as the only entry point, statements), and the small set of raw types — numbers, floats, booleans, characters — that everything else is built from.
- **Summary:** Re-ground on building blocks you mostly already use from Days 1–3; close any gaps with the chapter quizzes.
- **Learn:** LearnCpp ch 1–4. Lessons to click if any are fuzzy: "Introduction to fundamental data types", "Floating point numbers", "Boolean values", "Introduction to the const keyword". Speed-run: skim each chapter's summary, take the quiz.
- **Roadmap:** fundamental types · `int` vs `float` vs `double` vs `char` vs `bool` · `const` · quiz
- **Build:** Nothing new needed — your Day 1–3 labs already stand. If a quiz answer surprises you, port that surprise into a 5-line probe and we compile it.
- **Done:** ch 1–4 quizzes done in one sitting; any surprise you found is answered by a compiled probe. (Mostly covered — this is a skim milestone.)

## Milestone M2 — Constants, Strings, And string_view

- **In plain words:** Text in C++ comes in two types — the one that owns its letters and the one that just looks at someone else's. And `const` is how you tell the compiler "this must never change."
- **Summary:** `std::string` vs `std::string_view` vs C-strings, and when the view dangles.
- **Learn:** LearnCpp ch 5 — "Introduction to std::string", "std::string_view", the const chapters. cppreference: `std::string_view` if a detail slips.
- **Roadmap:** `std::string` · `std::string_view` · lifetime rule · null termination
- **Build:** Your string toolkit already exists from Day 2 — add one new view-safe helper if a chapter idea sparks one; otherwise just re-read the chapter quiz cold.
- **Done:** Quiz done; you can state the string_view lifetime rule out loud. (Covered — skim milestone.)

## Milestone M3 — Operators (deferred)

- **In plain words:** The symbols that combine values — arithmetic, comparison, logical, bitwise. You've been using most of them without a dedicated pass.
- **Summary:** Arithmetic/comparison/logical operators, precedence, rounding/remainder gotchas.
- **Learn:** LearnCpp ch 6 — deferred. When a later build genuinely trips on precedence or a rounding rule, this is the chapter to open.
- **Roadmap:** precedence · remainder · rounding · floating-point equality traps
- **Build:** None scheduled. Registered in the Deferred Registry.
- **Done:** (When unbracketed — tick only if you loop back and finish it.) Not tickable from here by design.

## Milestone M4 — Scope, Duration, And Linkage (deferred)

- **In plain words:** Where a variable is visible, how long it lives, and how the linker sees your names across files.
- **Summary:** `{}` scopes, storage duration, linkage — the rules that make multi-file programs work.
- **Learn:** LearnCpp ch 7 — deferred. Re-surfaces when CMake and multi-file projects arrive in Phase 1; skim at that moment before Phase 1's Day 23.
- **Roadmap:** scope · stack vs static duration · linkage · forward declarations
- **Build:** None scheduled. Registered in the Deferred Registry.
- **Done:** (When unbracketed — tick only if you loop back and finish it.)

## Milestone M5 — Control Flow And Random Numbers

- **In plain words:** Making the program *decide* — `if`/`switch`, loops — and the real random-number machinery (`mt19937` + a distribution) behind your Day 1 dice game.
- **Summary:** Branching, looping, and true randomness done right.
- **Learn:** LearnCpp ch 8 — "Introduction to if statements", "Introduction to loops", then the random lessons (8.13–8.15). Your dice game already proves most of this.
- **Roadmap:** `if`/`switch` · `for`/`while`/`do` · `std::mt19937` · `uniform_int_distribution` · why `rand()` is a trap
- **Build:** Re-run your Day 1 game; if the chapter adds a trick (e.g. the rare-case randomization note), upgrade the game and commit.
- **Done:** Quiz done; a full round of the dice game plays; you can explain the `rand()` trap. (Covered — skim milestone.)
- **Block gate:** Block A lands here → cadence duties ride on M7 below.

## (Deferred) Chapter 9 — Error Detection And Handling

Skipped by choice. Contains asserts, unit-test culture, and **9.5 `std::cin` validation** — that last one is genuinely useful and gets a scheduled revisit:
**Deferred Registry entry:** ch 9 → revisit 9.5 (cin validation/error states) inside Phase 1's Input Abstraction milestone (Phase 2 "Day 73" in the project pacing). If you want it sooner, say so — it's a 20-minute read.

## Milestone M6 — Conversions, Aliases, And Deduction (current)

- **In plain words:** C++ will quietly change a number from one type to another — and sometimes that change loses data. Today you learn to spot and stop it — and then unclutter your code with names for types and `auto`.
- **Summary:** Implicit vs explicit conversions, narrowing, type aliases, `auto` deduction.
- **Learn:** LearnCpp ch 10 — 10.1 implicit type conversion (done), 10.2 floating-point/integral promotion, 10.3 numeric conversions, 10.4 narrowing conversions, 10.5 arithmetic conversions, 10.6 `static_cast`, 10.7 typedefs/aliases, 10.8 `auto`, 10.9 deduction (functions), then the chapter quiz.
- **Roadmap:** implicit conversion · `static_cast` · narrowing · integer promotion · typedef/using · `auto`
- **Build:** Your conversion lab (`solutions/4_conversion_aliases_deduction`) is the centerpiece — finish it: the `singedUnsigned(-5)` call needs `static_cast<unsigned>(-5)`, and the commented `//int b{3.7};` needs its one-line *why* written beside it. Then add one 3-line demo each for a typedef and an `auto`.
- **Done:** Quiz done at 100%; build runs warning-free under `/W4`; you can explain why narrowing is a silent bug and have found one in your own history (your lab's braces are it).
- **Block gate:** This closes Block A with M7 → **Q#1 of 20** (e.g. *"What's the difference between `std::string` and `std::string_view`, and when does the view dangle?"*) + **pitch v0.1** written.

## Milestone M7 — Overloading And Function Templates

- **In plain words:** Several functions can share a name if their inputs differ; C++ picks the right one. And a "template" is a function written *for any type* — write it once, the compiler makes copies.
- **Summary:** How C++ picks the function you meant, and how templates let you write it once.
- **Learn:** LearnCpp ch 11 — "Introduction to function overloading" (your Day 3 work), "Function overload resolution and ambiguity", "Introduction to function templates", function template instantiation.
- **Roadmap:** overload sets · default arguments · resolution/ambiguity · `= delete` · function templates · why templates live in headers
- **Build:** Your Day 3 overload work stands. Add a `Max<T>` template and instantiate it with two unrelated types; force the *function-template* version of an ambiguity error and read it cold.
- **Done:** Quiz done; your `Max<T>` compiles from a header; you can explain the ODR/header rule for templates.
- **Cadence gate (Block A close):** **Interview:** Q#1 of 20 (string_view dangle / "is answered aloud"). **Pitch:** pitch v0.1 exists and is 3 sentences.

## Milestone M8 — References And Pointers, The Pointer Matrix

- **In plain words:** A pointer is a street address of a variable; a reference is a mask you wear to stand in for a variable. Interviews drill this harder than any other topic.
- **Summary:** References, pointers, `const` placement, decay, pointer arithmetic — the matrix.
- **Learn:** LearnCpp ch 12 — "Introduction to references", "Introduction to pointers" (12.7), "Pointers and const" (12.9), pass-by-reference and return-by-reference. Take the whole-chapter quiz.
- **Roadmap:** `&x` vs `int* p` vs `*p` · `nullptr` · `const int*` vs `int* const` · array decay · pointer arithmetic
- **Build:** A pointer quiz taken to 100%; draw four memory diagrams (a pointer-to-pointer, a const-pointee, an array decaying, `nullptr` guard) *and* verify each against the debugger's memory window.
- **Done:** Diagrams match the debugger for all four; you can explain decay to an interviewer.
- **Cadence gate (Block B close):** on M9 → **Q#2 of 20** + **pitch v0.2** (refreshed with pointer/ownership language).

## Milestone M9 — Enums, Structs, And Aggregate Data

- **In plain words:** Name a set of meaningful values (an enum) and bundle several variables into one box (a struct). The un-flashy basics that 90% of game data is built from.
- **Summary:** Scoped enums and structs — your first real compound types.
- **Learn:** LearnCpp ch 13 — "Scoped enumerations (enum class)" (13.6), "Introduction to structs" (13.7), struct member access/passing.
- **Roadmap:** `enum class` · struct members · aggregate initialization · struct as parameter/return
- **Build:** Make a tiny `Monster` struct with an `enum class MonsterType`, spawn a few in main, print their stats. (This is the seed of your eventual game inventory.)
- **Done:** Quiz done; struct demo compiles and runs; you prefer `enum class` by reflex.
- **Cadence gate (Block B close):** **Interview:** Q#2 of 20 (e.g. *"Walk through what happens when you `push_back` a move-only type"* — answer the pointer version aloud). **Pitch:** pitch v0.2 refreshed.

## Milestone M10 — Classes: The C# Culture Shock

- **In plain words:** Classes in C++ are structs with rules about who can touch what — and a private/public discipline plus a `const` machine that C# never forced on you.
- **Summary:** Members, access control, and the `const` discipline C++ demands.
- **Learn:** LearnCpp ch 14 — "Introduction to classes", "Public and private members and access specifiers", "Member functions", "`const` class objects and const member functions", constructors and member initialization lists.
- **Roadmap:** access specifiers · `const` member functions · `mutable` · ctor init lists · initialization order
- **Build:** A class designed on paper first, then typed; mark every member function with its correct `const` — and let the compiler catch two mistakes on purpose before you fix them the idiomatic way.
- **Done:** Quiz done; you predict a const-error the compiler flags, then fix it the idiomatic way.
- **Cadence gate (Block C):** rides on M13.

## Milestone M11 — Destructors, `static`, And Class Lifetimes

- **In plain words:** In C++ the moment a variable goes out of scope, its cleanup runs — automatically. A destructor is that cleanup hook, and "RAII" is the pattern that uses it so resources never leak. This is C++'s superpower and the most-asked interview idea.
- **Summary:** Deterministic destruction and the pattern that is C++'s superpower.
- **Learn:** LearnCpp ch 15 — "Introduction to destructors" (15.4), destructors and cleanup, `static` members/static variables in the class context, anonymous/unnamed entities as relevant.
- **Roadmap:** destructors · destruction order · `static` members · scope lifetimes · why `new` in a constructor is a trap
- **Build:** Write an RAII `FileGuard` (opens on acquire, closes on release) and prove it closes on a thrown path.
- **Done:** Quiz done; you say the RAII sentence out loud: *"resources are acquired by construction and released by destruction."*

## Milestone M12 — Containers: std::vector And std::array

- **In plain words:** The two workhorse boxes: a run-time-growable list (`vector`) and a fixed-size list (`array`). Range-based `for` is the natural way to walk them.
- **Summary:** `std::vector` and `std::array` — iteration, resizing, bounds.
- **Learn:** LearnCpp ch 16 — "Introduction to containers and arrays", "Introduction to `std::vector`", vector sizing/resizing, range-based `for` (16.8), vectors of objects; then ch 17 — "Introduction to `std::array`".
- **Roadmap:** `std::vector` · `push_back`/`size`/`[]`/`.at()` · iterators + range-for · `std::array` vs vector vs C-array
- **Build:** Upgrade your `Monster` demo (M9): spawn a random monster table into a `std::vector<Monster>` using your M5 randomness, print it sorted-ish. (You tasted this on Day 2 — now it's the actual chapter.)
- **Done:** Quiz done; for any new need you can name the container and justify it.
- **Cadence gate (Block C close):** on M13 → **Q#3 of 20** + **pitch v0.3**.

## Milestone M13 — Iterators, Algorithms, And Dynamic Allocation

- **In plain words:** Algorithms (find, sort, count) that work on *any* container via a common "iterator" handshake — plus `new`/`delete`, the raw way objects get born on the heap, and the leak trap that comes with it.
- **Summary:** The standard algorithm set, and raw dynamic allocation with all its dangers.
- **Learn:** LearnCpp ch 18 — iterators + algorithms (as complete as the chapter is); ch 19 — "Introduction to dynamic memory allocation", `new`/`delete`, lifetime issues.
- **Roadmap:** iterators · `std::find`/`std::sort`/`std::count` · `new`/`delete` · heap lifetime · dangling pointers
- **Build:** Apply `std::sort` + `std::find` to your monster vector; then deliberately allocate a `new int[]`, lose the pointer, watch the leak with the CRT leak checker, and fix it with proper lifetimes.
- **Done:** Quiz done; algorithms compose with your container; you have *seen* a real leak report once and can read it.
- **Cadence gate (Block C close):** **Interview:** Q#3 of 20 (e.g. *"How would you detect a memory leak in a C++ program?"*). **Pitch:** pitch v0.3 refreshed with container/RAII language.

## Milestone M14 — Function Pointers And Lambdas

- **In plain words:** Code can be a value you pass around. A "lambda" is just a little anonymous function you hand to something that'll call it later. This is the C++ version of Unity's delegates — and finally in its rightful chapter.
- **Summary:** Function pointers, lambdas, captures, `std::function`.
- **Learn:** LearnCpp ch 20 — "Function pointers" (20.1, recognize-only), "Introduction to lambdas (anonymous functions)" (20.6), "Lambda captures" (20.7), capture-init and `std::function` (as the chapter covers them).
- **Roadmap:** lambdas · captures (`[=]` vs `[&]`) · capture init · `std::function` · function pointers
- **Build:** Sort and filter your monster container with lambdas (ascending, descending, by name, by type); write one where a capture-by-value and capture-by-reference behave visibly differently.
- **Done:** Quiz done; you pass a lambda into a function and explain capture-by-value vs capture-by-ref from the code in front of you.

## Milestone M15 — Operator Overloading

- **In plain words:** Teach `+`, `<<`, `<`, `[]` what they mean for *your* types, so `vec2 + vec2` and `std::cout << monster` just work.
- **Summary:** Making built-in operators work on your own types.
- **Learn:** LearnCpp ch 21 — "Introduction to operator overloading", overloading arithmetic (`+`), I/O (`<<`/`>>`), comparison (`<`/`==`), subscript (`[]`), and the copy-assignment chapter when it reads cleanest here (that's the one that links to M11/M16).
- **Roadmap:** overload `+` · overload `<<` · overload `<`/`==` · overload `[]` · copy assignment basics
- **Build:** Give `Monster` I/O (`<<`), comparison (`==` on type+name), and give a tiny `Vec2` `+`,`-` (your first math library seed — it reappears in Phase 1).
- **Done:** Quiz done; `std::cout << monster` and `m1 == m2` compile and run with your classes.

## Milestone M16 — Move Semantics And Smart Pointers

- **In plain words:** Sometimes copying is wasteful — the object's about to be thrown away anyway, so why not steal its guts? That's a "move." And smart pointers — `unique_ptr` (one owner), `shared_ptr` (shared owner) — replace Unity's garbage collector by hand. This is the memory bootcamp crown.
- **Summary:** Why `std::move` exists, and the ownership toolkit that replaces raw `new`.
- **Learn:** LearnCpp ch 22 — "Rvalue references" (22.1–22.2), move semantics (22.3–22.4), "`std::unique_ptr`" (22.5), `std::shared_ptr` (22.6), `std::weak_ptr` + cycles (22.7).
- **Roadmap:** rvalue refs · move ctor/assignment · `std::move` · `noexcept` on moves · `unique_ptr` · `shared_ptr` · `weak_ptr` · `make_*`
- **Build:** Migrate your monster program to smart pointers — delete every raw `new`. Then give one class a move constructor and watch a `vector` reallocation use it (log counters).
- **Done:** Zero raw owning pointers remain in the migration; you can state why `shared_ptr` should be rare and why moves must be `noexcept`.
- **Cadence gate (Block D close):** → **Q#4 of 20** (e.g. *"`unique_ptr` vs `shared_ptr`: when would you use each in a game loop?"*) + **pitch v0.4**.

## Milestone M17 — Relationships, Inheritance, And The vtable

- **In plain words:** Composition (a car *has* an engine), inheritance (a Bear *is* an Animal), and the hidden table of function pointers behind `virtual` — C++'s polymorphism, done explicitly.
- **Summary:** Object composition/aggregation, inheritance, and polymorphic dispatch with the vtable mental model.
- **Learn:** LearnCpp ch 23 (composition, aggregation, association), ch 24 (inheritance: basics, constructors/destructors), ch 25 ("Virtual functions and polymorphism" 25.2, "The virtual table" 25.5/25.6, `virtual`/`override`/`final`).
- **Roadmap:** composition vs inheritance · `virtual` · `override` · `final` · vtable model · polymorphic vs templated dispatch
- **Build:** A polymorphic `Shape` demo (Circle/Square override a `name()` and `area()`); draw the vtable diagram, then confirm the call goes through it in the debugger.
- **Done:** Quiz done; diagram matches the debugger; you can defend polymorphism vs a template variant for a use case.

## Milestone M18 — Template Classes, Exceptions, And File I/O

- **In plain words:** Classes written for any type (like `std::vector<T>` itself), the two ways to report failure (throw vs status code), and reading/writing files so your programs can *remember*.
- **Summary:** Template classes, exception basics, and persistent storage.
- **Learn:** LearnCpp ch 26 (template classes), ch 27 (exceptions — basics; note the chapter's "when NOT to use exceptions" game-relevant advice), ch 28 (file I/O: `ifstream`/`ofstream`, binary basics).
- **Roadmap:** class templates · why templates live in headers · `try`/`catch`/`throw` · error codes as alternative · `ifstream`/`ofstream`
- **Build:** A tiny `SaveGame` that writes your monster party to a file and loads it back identical; give your `Vec2` a friendlier file format.
- **Done:** Quiz done; save/load round-trip is exact; you can justify exception-vs-status-code for your save function.

---

## Phase 0 Capstone — Console Game With Ownership

- **In plain words:** Everything this phase taught, in one game: generate loot, hold it in an inventory, manage lifetimes, prove no leaks. This is your first artifact.
- **Summary:** A real little game that exercises everything in Phase 0.
- **Learn:** No new source — the capstone is a no-tutorial build by design.
- **Roadmap:** loot/inventory design · `unique_ptr` items · value vs pointer composition · full lifecycle
- **Build:** A console "dungeon loot" game: your random loot table, an inventory of `unique_ptr` items, a wander/fight/collect loop, a save file via M18.
- **Done:** Plays a full round; runs under AddressSanitizer/CRT leak detection with **zero leaks**; commit message is CD-worthy.

## Phase 0 Close — Tag, Pitch, Networking

- **Build:** Polish the capstone; write its README; tag **`cpp-core`**; append your retrospective into `docs/retrospectives.md` (3 sentences: what went wrong, what you'd change, what surprised you).
- **Networking:** Action #1 — put the capstone public (or a gist) and post one paragraph about it on LinkedIn or a devlog.
- **Interview:** Q#4 of 20 rides here if the capstone outran the Block D gate — the question is *"How would you detect a memory leak in a C++ program?"* (or, if already answered at M16's gate, draw Q#4 from your bank draft).
- **Pitch:** pitch v0.4 hooks the ownership/memory work.
- **Done:** Tag pushed, pitch written, one networking action done, retrospective written.
- **REST DAY 1** — no code, no reading, no networking. Walk away; resume on M1 of Phase 1.

## Deferred Registry (decisions, not holes)

Every skipped chapter lands here so nothing is silently lost. Going forward, whenever you skip a chapter ("meh"), append it — one line, with the trigger that should pull it back in.

| Chapter | Deferred because | Re-entry trigger |
|---|---|---|
| ch 6 | Operators — mostly used already | First surprise in a build involving precedence or rounding |
| ch 7 | Scope/linkage — felt premature | Phase 1 multi-file/CMake work starts (skim then) |
| ch 9 | Error handling — felt meh | **Scheduled:** Phase 2 input abstraction — revisit 9.5 cin validation |

*(Future skips get appended here. A skip is only legal if it's in this table.)*

---

# Phase 1 — Toolchain + Math + Graphics v1

**GATE:** starts when `cpp-core` is tagged. The "Day" numbers below are phase-relative effort-sessions kept from v3.5 so every cross-reference stays valid — they are NOT calendar days and don't restart from Day 1.

**Outcome:** From zero engine code to a **`graphics-v1` showcase scene** — your Mat4 math, a flying camera, a lit + shadowed + instanced scene, RenderDoc-native, driven live by an ImGui overlay.

**Montréal why:** Renderers and tools are central to Eidos (DirectX) and Behaviour; "I have a working renderer and can explain every matrix" reads as a hireable junior.

**Must-haves:** CMake+Git+debugger workflow; your own Vec3/Mat4/Quat; window+shaders+textures; YOUR-matrix transforms; camera; depth/culling; Phong + light types; normal maps; framebuffers (basic); shadow mapping; instancing; RenderDoc autopsy; clang-tidy pass; RAII GL objects; ImGui overlay; showcase scene; Release packaging; README + clip.
**Nice-to-haves:** model-loading depth, post-processing richness, skybox.
**Failure mode:** If 2+ sessions behind by Day 49, cut post-processing (Day 39) to a minimal invert pass and model loading (Day 38) to a textured cube. **Never cut** instancing (Day 45), RenderDoc (Day 46), or the ImGui overlay (Days 50–51).

### Week 4 (Days 22–28) — Toolchain + Math

- **Day 22 — CMake From Zero**
  - **In plain words:** CMake is the "recipe" that turns your C++ files into a program. Today you write your first recipe. Every studio uses it.
  - **Summary:** The build system everything Montréal uses; know it cold.
  - **Learn:** "Modern CMake" (cliutils.gitlab.io/modern-cmake) — chapters 1–4; or the official CMake tutorial step 1.
  - **Roadmap:** `CMakeLists.txt` · targets · `find_package` · `FetchContent` · presets · Debug/Release
  - **Build:** A hello-world console under CMake that builds in both configurations.
  - **Done:** One command builds; presets explain themselves; you can add a new file without thinking.
- **Day 23 — Git Workflow You'll Use Daily**
  - **In plain words:** Git snapshots your code so you can branch, undo, and tag milestones. Today is about the habits (clean commits, tags) that make a repo look trustworthy.
  - **Summary:** Feature branches, tags, clean history — the workflow studios assume.
  - **Learn:** "Pro Git" book (git-scm.com/book) — chapters 2–3, skim; practice beats reading.
  - **Roadmap:** branching · commits that stand alone · tags · `.gitignore` · `git log/status/diff` fluency
  - **Build:** Exercise branches + tags on your repo; create your first milestone tag.
  - **Done:** You produce a feature-branch history and a tagged release without guides.
- **Day 24 — Debugger Workbench**
  - **In plain words:** The debugger lets you freeze a running program and inspect it line by line. Today you learn the six tools you'll use for the next 4 months: breakpoints, watch, locals, call stack, and more.
  - **Summary:** Breakpoints, watch, call stack, locals — the VS2022 muscle memory.
  - **Learn:** Microsoft Learn: "Navigate code with the Visual Studio debugger" + "View values in the debugger". Practice on a deliberate crash.
  - **Roadmap:** breakpoints · conditional breakpoints · call stack · watch/locals · tracepoints
  - **Build:** Deliberately crash a program and find the cause via call stack alone.
  - **Done:** You narrate the fix workflow; you can debug a crash blind.
- **Day 25 — Math: Vec2/Vec3**
  - **In plain words:** A vector is just an x,y,z trio with a few rules (add, scale, dot, cross). Today you write those rules as your own C++ type — the same thing Unity hides in Vector3.
  - **Summary:** Your math library begins — operators, dot, cross, normalize.
  - **Learn:** 3Blue1Brown — "Essence of Linear Algebra" episodes 1–2 (vectors + dot products) — 20 min. Then LearnOpenGL "Transformations" for how games use them.
  - **Roadmap:** component ops · dot/cross · length/normalize · unit tests
  - **Build:** Vec3 with operators + tests under GoogleTest.
  - **Done:** Tests pass; you can derive what dot-product sign means.
- **Day 26 — Math: Mat4**
  - **In plain words:** A 4×4 math grid that performs transformations (move, rotate, scale). One convention choice (column vs row) and every line of renderer code follows it. Today you decide and document.
  - **Summary:** Column-major vs row-major, TRS, and inverse — decide and document.
  - **Learn:** 3Blue1Brown "Essence of Linear Algebra" episode on matrices/linear transformation — then LearnOpenGL "Transformations" for the game-specific view.
  - **Roadmap:** layout convention · multiplication · translation/rotation/scale · inverse · ortho/perspective
  - **Build:** Mat4 with `perspective`, `lookAt`-style view, and TRS; test identity and round-trips.
  - **Done:** Tests pass; you state which convention you chose and why it matters everywhere.
- **Day 27 — Math: Quaternions**
  - **In plain words:** A 4-number thing that represents rotation smoothly without the "gimbal lock" that breaks 3-angle rotation. Today you write it once and never fight it again.
  - **Summary:** The transform type that stops gimbal lock.
  - **Learn:** 3Blue1Brown video "Quaternions and 3D rotation" — then a short "quaternion to matrix" writeup. Keep it to 45 min total.
  - **Roadmap:** quat basics · axis-angle · slerp · toMat4 · compose with TRS
  - **Build:** Quaternion with conversions + tests; rotate a camera-facing vector with it.
  - **Done:** Tests pass; you explain why games convert quats to mats at render time.
- **Day 28 — Consolidation 3: Math From Memory**
  - **In plain words:** Blank file, closed book: rewrite Vec3 and Mat4. If your fingers remember them, they're yours — and Day 32 will make the GPU use them.
  - **Summary:** Rebuild the math core blank-file, closed-book.
  - **Learn:** Re-watch only the 3Blue1Brown clips if truly stuck.
  - **Roadmap:** Vec3 + Mat4 from muscle memory · plus TRS round-trip
  - **Build:** Recreate Vec3 and Mat4 from scratch; tag `math-v0.1`.
  - **Interview:** Q#5 of 20 — e.g. "What's a use-after-free and how do sanitizers catch it?"
  - **Pitch:** Refresh with the math-library line.
  - **Done:** Tests pass with zero reference; Q answered; pitch v0.5.

### Week 5 (Days 29–35) — OpenGL Basics

- **Day 29 — Window And Triangle**
  - **In plain words:** The "Hello World" of graphics: open a window, tell the GPU to draw one triangle. Everything after grows from this.
  - **Summary:** GLFW + GLAD init; the first frame loop.
  - **Learn:** LearnOpenGL — "Getting started", chapters "Window" + "Hello Window" + "Hello Triangle". Follow along exactly for the setup.
  - **Roadmap:** GLFW · GLAD · context creation · swap chain loop · clear color
  - **Build:** A window that opens, clears, and closes cleanly; a triangle renders.
  - **Done:** No GL errors; close button exits politely.
- **Day 30 — Shaders, Hands-On**
  - **In plain words:** Shaders are tiny programs that run on the GPU. Two of them matter today: the vertex shader (where does this corner go?) and the fragment shader (what color is this pixel?). You write them like you'd write a function.
  - **Summary:** Vertex/fragment shaders, VAO/VBO/EBO, uniforms.
  - **Learn:** LearnOpenGL — "Shaders" chapter (the whole thing).
  - **Roadmap:** GLSL basics · uniform passing · VAO/VBO/EBO · error checking
  - **Build:** A two-color triangle driven by a uniform; buffer setup that compiles clean.
  - **Done:** Shader compiles with error path tested; you can explain a VAO.
- **Day 31 — Textures And UVs**
  - **In plain words:** Putting a picture (or a repeatable pattern) onto a 3D shape. Each corner of a shape gets a "where on the picture" coordinate — that's the UV. Today you wire it all up.
  - **Summary:** Loading + sampling: the texture pipeline.
  - **Learn:** LearnOpenGL — "Textures" chapter.
  - **Roadmap:** `stb_image` · texture units · filtering/mipmaps · wrapping · UV mapping
  - **Build:** A textured quad/floor with mipmaps and a wrap mode.
  - **Done:** Texture renders; you explain why mipmaps matter.
- **Day 32 — Transformations With YOUR Mat4**
  - **In plain words:** Remember your Mat4 from Day 26? Today the GPU eats it. Gravity check: a cube rotating using YOUR math, not a library.
  - **Summary:** Connect your math library to the GPU — no GLM.
  - **Learn:** LearnOpenGL — "Transformations" chapter (compare their glm usage to what your Mat4 does).
  - **Roadmap:** model/view/projection · your perspective + view matrices · uniform upload
  - **Build:** A rotating cube transformed by YOUR Mat4 pipeline.
  - **Done:** The cube is unambiguously your math (prove it by printing your perspective matrix).
- **Day 33 — FPS Camera**
  - **In plain words:** Move the world instead of moving the looker. WASD + mouse move three angles; your view matrix does the rest. This is the camera you'll fly for the next 4 months.
  - **Summary:** A real fly camera: yaw/pitch, look-at, movement.
  - **Learn:** LearnOpenGL — "Camera" chapter.
  - **Roadmap:** yaw/pitch · view matrix · WASD+mouse · frame-rate independence
  - **Build:** Fly through the scene with the mouse and WASD.
  - **Done:** Camera feels like an FPS; no roll artifacts.
- **Day 34 — Depth And Culling**
  - **In plain words:** A buffer that remembers "what's closest here" so far — that's depth, and it stops far cubes drawing over near ones. Face culling skips the backs of objects. Two switches that fix most "broken looking" scenes.
  - **Summary:** Depth testing and face culling done right.
  - **Learn:** LearnOpenGL — "Coordinate Systems" (depth clip) + "Advanced OpenGL — Depth testing", "Face culling".
  - **Roadmap:** depth buffer · `glDepthFunc` · back-face culling · winding order
  - **Build:** Overlapping boxes render correctly; culling on without artifacts.
  - **Done:** Depth is correct; you can toggle culling and predict the artifact.
- **Day 35 — Consolidation 4: Textured Cube From Memory**
  - **In plain words:** From blank file to a texture-mapped cube you can fly around — no tutorial open. That's essentially a mini-interview answer by itself.
  - **Summary:** Rebuild a textured, camera-flying scene from a blank file.
  - **Learn:** Re-open LearnOpenGL chapters only if stuck.
  - **Roadmap:** buffers + shader + texture + camera in one sitting
  - **Build:** The whole textured-cube-with-camera, from scratch.
  - **Interview:** Q#6 of 20 — e.g. "What does RAII mean and show a real example."
  - **Pitch:** Refresh with the renderer progress line.
  - **Done:** Scene runs with zero reference; Q answered; pitch v0.6.

### Week 6 (Days 36–42) — Lighting And A First Scene

- **Day 36 — Phong Lighting**
  - **In plain words:** Three ingredients make surfaces look lit: the flat glow (ambient), the side facing a light (diffuse), and the shiny highlight (specular). A few multiplications in the shader and suddenly it looks real.
  - **Summary:** Ambient, diffuse, specular — the model every engine builds on.
  - **Learn:** LearnOpenGL — "Basic Lighting" chapter.
  - **Roadmap:** ambient/diffuse/specular · material structs · light structs · normal transformation
  - **Build:** A lit cube/sphere scene; move lights and watch response.
  - **Done:** Lighting matches expectations; you can explain why normals use the inverse-transpose.
- **Day 37 — Lighting Maps And Light Types**
  - **In plain words:** Three kinds of lights (sun-like, bulb-like, flashlight-like) plus textures that control how material reflects. This is the day your scene starts looking like a game.
  - **Summary:** Diffuse/specular maps plus directional, point, and spot lights.
  - **Learn:** LearnOpenGL — "Materials" + "Lighting maps" + "Light casters".
  - **Roadmap:** diffuse map · specular map · directional · point · spot · attenuation
  - **Build:** A scene with a mapped object lit by all three light kinds.
  - **Done:** Each light type visibly differs; attenuation tweak is hands-on.
- **Day 38 — Model Loading**
  - **In plain words:** Stop hand-typing cube corners; load a real 3D model file. A couple of libraries read the file for you — you take the triangles and texture references. Keep it lean today.
  - **Summary:** Mesh loading beyond cubes (keep it lean).
  - **Learn:** LearnOpenGL — "Model loading + Assimp" OR the `tinyobjloader` README (pick one loader; tinyobjloader is lighter).
  - **Roadmap:** `tinyobjloader` or assimp · vertex layout · per-mesh textures · winding
  - **Build:** Load a real model (e.g. a rock/ship) with its textures.
  - **Done:** Model renders correctly-oriented with textures; nice-to-have, not gospel — if it eats time, stop late afternoon and move on.
- **Day 39 — Framebuffers And A Post Pass**
  - **In plain words:** Render everything to an off-screen "photo", then display the photo through a filter. That's how every post-processing (greyscale, toast-mode, focus) works. Today you do the simplest version.
  - **Summary:** Render-to-texture and one post-processing effect.
  - **Learn:** LearnOpenGL — "Framebuffers" chapter (up to and including the post-processing example).
  - **Roadmap:** FBO · RTT · screen-space quad · a post shader (invert/greyscale)
  - **Build:** Render the scene to a texture, then draw it through a post shader; toggle on/off.
  - **Done:** Post effect toggles cleanly; buffers are cleaned up.
- **Day 40 — Normal Mapping**
  - **In plain words:** Make a flat surface look bumpy by faking the lighting angles. Cheap trick, huge visual win — and a great "explain it" question.
  - **Summary:** Bumpy surfaces on cheap geometry.
  - **Learn:** LearnOpenGL — "Advanced Lighting — Normal mapping".
  - **Roadmap:** normal maps · tangents · TBN · why lighting needs tangent space
  - **Build:** A surface with a normal map vs one without, side by side.
  - **Done:** The bump is obvious; you can explain tangent space simply.
- **Day 41 — Scene Objects And A Renderer Module**
  - **In plain words:** Stop drawing one object at a time by hand. A "scene" is a list of objects (mesh + position + material); the renderer walks the list. Today you also add a counter that counts draw calls — you'll need it later.
  - **Summary:** Your first abstraction: scene objects and a render loop.
  - **Learn:** No new source needed — this is applying Days 25–32 to a list. (Habit: write the loop, count the calls.)
  - **Roadmap:** mesh/transform/material structs · per-object uniforms · state-change minimization · draw-call counting
  - **Build:** A scene of N objects drawn with per-object uniforms; add a draw-call counter.
  - **Done:** N objects render; counter proves the call count.
- **Day 42 — Consolidation 5: Lighting From Memory**
  - **In plain words:** Blank-file rebuild of a lit, textured object you can move a light around — the "I know lighting" claim, proven.
  - **Summary:** Rebuild lit + mapped + post from a blank file (post optional).
  - **Learn:** Re-open LearnOpenGL lighting chapters only if stuck.
  - **Roadmap:** Phong + normal map + one light type, closed book
  - **Build:** A lit, mapped object with a light you can move.
  - **Interview:** Q#7 of 20 — e.g. "`unique_ptr` vs `shared_ptr`: when would you use each in a game loop?"
  - **Pitch:** Refresh with the lighting line.
  - **Done:** Lit scene runs; Q answered; pitch v0.7.

### Week 7 (Days 43–49) — Job-Worthy Rendering Features

- **Day 43 — Shadow Mapping Basics**
  - **In plain words:** Draw the scene from the light's point of view into a "depth picture"; any pixel that's farther than that picture says "I'm in shadow." That one idea is every shadow in modern games.
  - **Summary:** The depth-pass idea behind every modern shadow.
  - **Learn:** LearnOpenGL — "Advanced Lighting — Shadow mapping" (part 1: shadow mapping).
  - **Roadmap:** depth pass · shadow map texture · light-space matrices · sampling
  - **Build:** Directional shadows on the ground from a light you move.
  - **Done:** Shadows track the light; artifacts are acknowledged by name.
- **Day 44 — Shadow Quality**
  - **In plain words:** Raw shadows look pixelated ("acne"). A blur trick called PCF plus small bias tuning makes them soft and clean. Today is about the trade-eye.
  - **Summary:** PCF blur and the acne/bias trade-off.
  - **Learn:** LearnOpenGL — same "Shadow mapping" chapter, the PCF and bias sections.
  - **Roadmap:** PCF · bias tuning · acne and peter-panning · why both exist
  - **Build:** Soft-ish PCF shadows; tune bias until artifacts vanish.
  - **Done:** Acne gone; you can explain the bias trade-off to an interviewer.
- **Day 45 — Instancing, The Hiring Hook**
  - **In plain words:** One draw command that draws thousands of copies, each with its own position. This is how games have forests of grass. It's also the single most impressive resume line in this phase.
  - **Summary:** Thousands of objects, one draw call.
  - **Learn:** LearnOpenGL — "Advanced OpenGL — Instancing".
  - **Roadmap:** instanced rendering · instance buffers · per-instance data layout
  - **Build:** 100k instanced cubes at 60fps; draw-call counter proves a single call.
  - **Done:** Counter shows ~1 draw call; fps holds; you can explain when NOT to instance.
- **Day 46 — RenderDoc Frame Autopsy**
  - **In plain words:** A tool that photographs exactly what your GPU did each frame — every draw call, every shader, every buffer — so you can find why something looks wrong. Studios live in this tool.
  - **Summary:** Learn the tool that studios use to debug renderers.
  - **Learn:** RenderDoc official docs: "Getting started" page; then capture YOUR scene and click the draw-call list.
  - **Roadmap:** capture · draw call inspector · buffer/shader viewer · frame timing
  - **Build:** Capture your scene; find one real inefficiency and fix it.
  - **Done:** A genuine bug or waste found via RenderDoc and fixed; write up 3 lines about it.
- **Day 47 — clang-tidy + Code Review Day**
  - **In plain words:** An automated code reviewer. It flags risky or ugly patterns the compiler ignores. Today you run it, fix what it finds, and keep its config in the repo.
  - **Summary:** Make the compiler's smart friend part of the loop.
  - **Learn:** clang.llvm.org "clang-tidy" page — the usage section; then run it on your own code.
  - **Roadmap:** `clang-tidy` config · fixes · readability/performance checks · why not all warnings are equal
  - **Build:** Run clang-tidy over the renderer; fix everything reasonable; commit the config.
  - **Done:** Tidy-clean on your code; you've read and understood each fired rule.
- **Day 48 — GL Lifetime And Error Handling**
  - **In plain words:** GPU resources get leaked too. Today you wrap every GL object in RAII (M11's pattern) so a closed window can never crash or leak.
  - **Summary:** RAII GL objects, error callbacks, safe teardown.
  - **Learn:** Microsoft Learn "RAII" concept page + apply the M11 pattern to GL; check GL error calls in LearnOpenGL discussion pages.
  - **Roadmap:** RAII wrappers · glGetError loop · teardown ordering · resize-safety
  - **Build:** Wrap your resources in RAII; break resize and watch it survive.
  - **Done:** Resize handled; teardown leaks nothing; errors surface loudly.
- **Day 49 — Consolidation 6: Shadow Pass From Memory**
  - **In plain words:** Blank-file rebuild of a shadowed scene. If you can produce shadows without a tutorial, you can say "I can do shadows" in an interview without lying.
  - **Summary:** Rebuild shadow mapping from a blank file.
  - **Learn:** Re-open the LearnOpenGL shadow chapter only if stuck.
  - **Roadmap:** depth pass + shadow-map application, closed book
  - **Build:** A shadowed scene, from scratch.
  - **Interview:** Q#8 of 20 — e.g. "Why do games avoid `std::shared_ptr` in hot paths?"
  - **Pitch:** Refresh with the shadows/instancing line.
  - **Done:** Shadows render with zero reference; Q answered; pitch v0.8.

### Week 8 (Days 50–56) — ImGui, Showcase, And Close

- **Day 50 — ImGui Embedded**
  - **In plain words:** A free, instant debug UI. Panels with sliders and counters drawn inside your window. Every engine you'll ever work in has something like it.
  - **Summary:** The debug UI every engine has, wired into yours.
  - **Learn:** Dear ImGui official README + download the demo; follow the "getting started with GLFW+OpenGL" section.
  - **Roadmap:** Dear ImGui · docking branch · frame integration · live counters
  - **Build:** An FPS/draw-call/API-info overlay rendered inside your viewport.
  - **Done:** Overlay updates live and doesn't disturb rendering.
- **Day 51 — Debug UI For The Engine**
  - **In plain words:** Now control your scene from the UI instead of recompiling: move a light with a slider. This is the moment your project stops being a demo and becomes a tool.
  - **Summary:** Editing the scene from a panel, not the code.
  - **Learn:** Dear ImGui demo + API reference (the "SliderFloat", "Checkbox", "InputText" pages).
  - **Roadmap:** transform editor · light editor · camera controls · ImGui-driven params
  - **Build:** Panels that edit transforms and lights live.
  - **Done:** Change a light's color in the UI and see the scene react.
- **Day 52 — Showcase Scene Assembly**
  - **In plain words:** Put everything from this phase into One Beautiful Scene: lit objects, a shadowed ground, instanced grass, free camera. This is the screenshot you'll show recruiters for the next three months.
  - **Summary:** One polished scene that sells you.
  - **Learn:** No new source — composing Days 29–51. Tune until it screenshots well.
  - **Roadmap:** composition · ground + shadows · instanced grass/rocks · lighting setup · framing
  - **Build:** The showcase scene: lit, shadowed, instanced, camera-free-fly.
  - **Done:** Runs >60fps; a screenshot is pitch-material.
- **Day 53 — Performance Pass 1**
  - **In plain words:** Before you fix anything, measure. A frame budget with timing queries tells you where the milliseconds go — then you fix the #1 cost and re-measure.
  - **Summary:** Measure first, fix the top bottleneck.
  - **Learn:** LearnOpenGL — "Advanced GLSL" (timing) or the "Performance" notes + RenderDoc frame timing from Day 46.
  - **Roadmap:** frame budget · GPU timing queries · CPU profiling · before/after discipline
  - **Build:** Profile, find the #1 cost, fix it, re-measure.
  - **Done:** Measured improvement or a documented reason it's already fine.
- **Day 54 — Build Scripts + Release Presets**
  - **In plain words:** A single command that builds a release version anyone can run. Recruiters clone, run, see it work — that's the whole demo.
  - **Summary:** A one-command Release build that anyone can run.
  - **Learn:** Modern CMake — the "CMake presets" page.
  - **Roadmap:** Release preset · asserts off · packaging · symbol stripping vs crash logs
  - **Build:** A Release build that runs standalone; document the command in the README.
  - **Done:** Fresh clone → one command → running showcase.
- **Day 55 — README + Demo Clip 1**
  - **In plain words:** Make the work readable in 90 seconds: an honest README, screenshots, and a short clip. This is the first thing a recruiter sees — treat it like a product page.
  - **Summary:** Make the work visible to a recruiter in 90 seconds.
  - **Learn:** GitHub "About: READMEs" doc + look at 2 engine repos you admire and copy their structure.
  - **Roadmap:** README structure · screenshots · short clip · controls · tech list
  - **Build:** Engine README with screenshots + a 30–60s clip + controls.
  - **Done:** A stranger understands the project from the README alone.
- **Day 56 — Phase 1 Close: graphics-v1 Tag + Pitch + Networking 2**
  - **In plain words:** Claim the phase, put the clip in front of humans, and answer "why is this impressive" in 30 seconds.
  - **Summary:** Claim `graphics-v1` and put it in front of humans.
  - **Learn:** No new source — polish pitch and post.
  - **Roadmap:** milestone tag · pitch v0.9 · public post
  - **Build:** Tag `graphics-v1`; finalize pitch v0.9 (showcase → shadows/instancing/RenderDoc).
  - **Networking:** Action #2 — post the clip with a 2-line pitch (LinkedIn/devlog); comment on one Montréal game-dev post.
  - **Interview:** Q#9 of 20 — e.g. "What happens behind the scenes when you draw an instanced mesh?"
  - **Retrospective:** 3 sentences into `docs/retrospectives.md` — what went wrong in Phase 1, what you'd change, what surprised you.
  - **Done:** Tag + post live; you can answer why the scene is impressive in 30 seconds; retrospective written.

---

# Phase 2 — Physics 2D + Engine Architecture

**GATE:** starts when `graphics-v1` is tagged. Day numbers are phase-relative effort-sessions kept from v3.5.

**Outcome:** A 2D physics core merged into your renderer, a minimal ECS, resource management, save/load, editor panels — and a **`engine-v1`** mini-game ("Knock the Tower") that is legitimately playable and demo-able.

**Montréal why:** Behavior's DBD depends on custom systems and stability; Ludia/Gameloft ship pick-up-and-play games. A playable game with clean systems is exactly the portfolio a small-studio hiring manager scrolls to.

**Must-haves:** fixed-timestep integration; AABB/circle/capsule + 2D SAT; impulse resolution + friction/restitution; rigid bodies + stable stacks; raycasts/picking; 2D character controller; ECS (minimal); transform component + scene graph; input abstraction; camera system; physics→renderer bridge; resource manager; JSON save/load; ImGui editor panels; module refactor; Knock-the-Tower mini-game; stability (ASan + leak-free).
**Nice-to-haves:** joints/springs (Day 65), DOD timing results (Day 68).
**Failure mode:** If 2+ sessions behind by Day 77, cut Day 65 (joints) and reduce Day 68 to a half-day reading. **Never cut** the ECS (Day 71), resource manager (Day 78), save/load (Day 80), or mini-game (Days 86–87).
**Deferred chapter re-entry:** the ch 9.5 **cin-validation** revisit lands here — the Input Abstraction session (Day 73) is where input errors become a real thing.

### Week 9 (Days 57–63) — 2D Physics Core

- **Day 57 — Integration And The Fixed Step**
  - **In plain words:** "Position changes by velocity, velocity changes by gravity — every frame." If you do it at a fixed rate, things move the same every time. This is Unity's FixedUpdate, built by you.
  - **Summary:** The half-jittery heart of every game physics loop.
  - **Learn:** "How to Create a Custom 2D Physics Engine" (K. Sun, archived series) — the integration chapter. Or the classic "How to build a physics engine" video by Randy Gaul.
  - **Roadmap:** fixed timestep · Euler vs verlet · damping · units (metres, not pixels)
  - **Build:** A bouncing circle at 60fps with stable, non-jittery motion.
  - **Done:** Circle lands identically frame to frame; you explain why fixed step matters.
- **Day 58 — Collision Detection**
  - **In plain words:** The math of "is this touching that?" For boxes and circles it's a few comparisons. Today you write the tests that prove it — the same tests you'd write with Unity's colliders, but yours.
  - **Summary:** AABB/circle/capsule pairwise tests + broadphase intuition.
  - **Learn:** K. Sun physics series — the "collision detection" chapters.
  - **Roadmap:** AABB · circle · capsule · point queries · broadphase vs narrowphase
  - **Build:** Pairwise collision tests under GoogleTest.
  - **Done:** Tests pass; you can name when broadphase earns its keep.
- **Day 59 — Impulse Resolution**
  - **In plain words:** When two things overlap, "kick" them apart — a single instantaneous push called an impulse. Bouncey and friction come from tweaking it. Tomorrow your boxes will be alive.
  - **Summary:** The contact math that makes things bounce and slide.
  - **Learn:** K. Sun physics series — "impulse resolution" chapter.
  - **Roadmap:** normal impulse · restitution · friction basics · sequential impulses
  - **Build:** Boxes bounce with restitution; friction slows slides.
  - **Done:** Tuning restitution/friction visibly changes behavior; tests stay green.
- **Day 60 — Rigid Bodies**
  - **In plain words:** An object with mass, velocity, and a spin rate. The "Rigidbody2D" of Unity — now with the numbers you can see. Five boxes stack: today's magic trick.
  - **Summary:** Mass, inverse mass, centre of mass, angular basics.
  - **Learn:** K. Sun physics series — "rigid body" chapters.
  - **Roadmap:** mass · inverse mass · inertia · angular velocity · torque ignition
  - **Build:** A stack of 5 boxes that rests stably.
  - **Done:** Stack is stable for 5 seconds with no float creep visible.
- **Day 61 — 2D SAT And Polygon Shapes**
  - **In plain words:** Today shapes can be rotated boxes. The test for any two convex shapes: if you can find one line where they don't overlap, they don't touch. That's the Separating Axis Theorem.
  - **Summary:** Oriented boxes and polygons collide correctly.
  - **Learn:** K. Sun physics series — "Separating Axis Theorem (SAT)" chapter, + sat diagram explainers (Metanet SAT tutorial).
  - **Roadmap:** SAT 2D · face normals · overlap axis · contact points
  - **Build:** Oriented boxes bounce and lie at rest convincingly.
  - **Done:** SAT tests pass; resting contact is visually stable.
- **Day 62 — Raycasts And Picking**
  - **In plain words:** Shoot an invisible line from the mouse into the scene and ask "what did I hit?" Unity does this with physics.Raycast; today you write the line yourself.
  - **Summary:** Ask the physics world "what's under the cursor?"
  - **Learn:** K. Sun series — "raycasting" chapter; cppreference not needed.
  - **Roadmap:** ray vs shape · point queries · picking in screen space
  - **Build:** Click objects in the rendered scene and pick them via physics raycast.
  - **Done:** Picking is reliable; cast direction matches the camera.
- **Day 63 — Consolidation 7: Impulses From Memory**
  - **In plain words:** Blank-file rebuild of a bouncy box demo. If bounces come out of your fingers, physics is real for you.
  - **Summary:** Rebuild impulse resolution closed-book.
  - **Learn:** Re-open the physics series only if stuck.
  - **Roadmap:** contact + impulse + restitution in one sitting
  - **Build:** Bouncy boxes from a blank file.
  - **Interview:** Q#10 of 20 — e.g. "Why is a fixed timestep important, and what could go wrong without one?"
  - **Pitch:** Refresh with the physics line.
  - **Done:** Bouncy demo runs; Q answered; pitch v0.9.

### Week 10 (Days 64–70) — Physics Depth + Demo

- **Day 64 — Stacking And Solver Iterations**
  - **In plain words:** Stacked boxes fall apart and jitter because one correction fights the next. Solving a tiny bit several times per frame (iterations) + pushing out overlaps makes towers hold. Same trick Unity physics uses.
  - **Summary:** The stability trick that separates toy physics from engine physics.
  - **Learn:** K. Sun series — "solver iterations / positional correction" sections; Randy Gaul "Impulse Engine" notes are a strong extra.
  - **Roadmap:** positional correction · solver iterations · warm starting (mentioned)
  - **Build:** A 10-box stack resting without jitter.
  - **Done:** Stack holds; you can explain why iterations help.
- **Day 65 — Joints: Distance, Revolute, Spring (Nice-To-Have)**
  - **In plain words:** Ropes, hinges, springs — connecting two bodies so they move together. Fun and satisfying, but officially optional: if the afternoon fights you, stop and cut it.
  - **Summary:** Connections between bodies — the fun day.
  - **Learn:** K. Sun series — "joints" chapters.
  - **Roadmap:** distance joint · revolute joint · spring behaviour
  - **Build:** A pendulum that swings and a box held at distance.
  - **Done:** Pendulum swings believably; nice-to-have, so stop at lunchtime if the solver fights you.
- **Day 66 — 2D Character Controller**
  - **In plain words:** The *feel* of a jump: buffered jumps, coyote time (a tiny grace period), variable height. Unity has a CharacterController; today you pretend to be it.
  - **Summary:** The jump feel that separates games from simulations.
  - **Learn:** "Build a 2D character controller" articles/handmade.network thread (search the terms in Roadmap); you already know the *feel* from Unity — you're recreating it.
  - **Roadmap:** gravity · jump buffering · coyote time · one-way platforms · variable jump height
  - **Build:** A character that walks, jumps, and feels right.
  - **Done:** Jump feels tuned; you can list the three feel-variables you adjusted.
- **Day 67 — 2D Physics Mini-Demo**
  - **In plain words:** Assemble everything into one playground: balls, boxes, a pendulum, a controlled character — with a physics-budget counter proving the cost.
  - **Summary:** Combine physics into one playable playground.
  - **Learn:** No new source — composing Days 57–66.
  - **Roadmap:** balls + boxes + pendulum + controlled character · physics budget counter
  - **Build:** The playground scene inside your renderer.
  - **Done:** Demo runs with a physics-budget counter; it's shareable.
- **Day 68 — Data-Oriented Thinking, First Contact**
  - **In plain words:** Two ways to organize physics data: one object at a time, or all x's together, then all y's. The second is often much faster because of how RAM works. Today you get a measured number for it.
  - **Summary:** SoA vs AoS and why physics hates polymorphism (nice-to-have depth).
  - **Learn:** Mike Acton, "Data-Oriented Design and C++" (CppCon talk) — or read the AoS vs SoA notes at cpp github. Half a day, cap it.
  - **Roadmap:** SoA vs AoS · SIMD-friendly layout · why objects-of-pointers cache-miss
  - **Build:** A tiny AoS vs SoA timing comparison; record numbers.
  - **Done:** You have measured numbers and can quote one.
- **Day 69 — Stability Pass: Race + Leak Sweep**
  - **In plain words:** Attack your physics code with the leak tools from the core. Whatever they find, you fix. Sanitizer-clean physics is a bragging right.
  - **Summary:** Your physics stack under attack.
  - **Learn:** Microsoft Learn ASan page (revisit from the core capstone) + the thread-sanitizer concept page.
  - **Roadmap:** ASan on the physics tests · CRT leak check · clang-tidy for the module · race detector (TSan/ASan where supported)
  - **Build:** Run the physics tests under sanitizers; fix everything surfaced.
  - **Done:** Full physics test suite leak-free and tidy-clean.
- **Day 70 — Consolidation 8: Rigid Bodies From Memory**
  - **In plain words:** Blank-file rebuild of a rigid body and two colliding shapes. Physics from muscle memory.
  - **Summary:** Rebuild a rigid body + two shapes closed-book.
  - **Learn:** Re-open the physics series if stuck.
  - **Roadmap:** rigid body + circle/AABB collision from muscle memory
  - **Build:** Bouncing body demo from scratch.
  - **Interview:** Q#11 of 20 — e.g. "Explain `std::move` — when is it actually a move?"
  - **Pitch:** Refresh with the stability/results line.
  - **Done:** Demo runs; Q answered; pitch v1.0 (first stable draft, pasted into a note).

### Week 11 (Days 71–77) — ECS And Engine Architecture

- **Day 71 — ECS, The Minimal Version**
  - **In plain words:** Instead of one big class for every object, an entity is just an ID number, and each kind of data (position, speed) lives in its own array. Systems loop over arrays. It's how modern engines structure the world — and what Unity ECS does.
  - **Summary:** Entities as IDs, components in arrays, systems that iterate.
  - **Learn:** The EnTT README/wiki (skypjack/entt) — the "entity-component-system" overview; or Mike Acton's ECS talk.
  - **Roadmap:** entity ID · component storage (sparse maps) · systems · iteration over archetypes-lite
  - **Build:** Your ECS drives N game objects, rendered by the engine. — from Unity you already know this pattern; here you *implement* it.
  - **Done:** ECS-spawned objects render; adding a component is a code-in-one-place change.
- **Day 72 — Transforms And A Scene Graph**
  - **In plain words:** Parent-child! When a parent moves, children come along: that's composing local transforms into world ones. The hierarchy panel of Unity, in math.
  - **Summary:** Hierarchy: local vs world, dirty flags.
  - **Learn:** LearnOpenGL "Transformations" (revisit) for matrix compose; a "scene graph" article (search the term).
  - **Roadmap:** transform component · parent/child · local vs world · dirty flags · lossy scale caveat
  - **Build:** Parented objects move with parents; toggling hierarchy updates correctly.
  - **Done:** A child under a moving parent behaves correctly; you know your matrix compose order.
- **Day 73 — Input Abstraction** *(re-entry point for the deferred ch 9.5 cin-validation revisit)*
  - **In plain words:** Decouple "jump" from "Spacebar." Game code asks "is Jump pressed?" A config file says which key is Jump. Rebinding becomes one line. While you're here: make input *fail loudly* instead of silently eating bad values (that's the ch 9.5 lesson).
  - **Summary:** Keys → actions → gameplay, rebindable.
  - **Learn:** Search "input abstraction / action mapping game engine" — use the pattern from any engine input system article. Open LearnCpp 9.5 for the cin error-state part.
  - **Roadmap:** action mapping · poll vs event · rebindability via config · focus handling · cin error states
  - **Build:** WASD/keys drive an "action"; rebinding via a config file works; a typo in the config produces a loud, friendly error.
  - **Done:** Rebind a key and see gameplay follow; input module has one clean API; the Deferred Registry's ch 9 row is ticked closed.
- **Day 74 — Camera System**
  - **In plain words:** Make the camera a thing in the world (a component), not a special case. Follow logic, aspect handling, resize survival. Your Day 33 camera, architected.
  - **Summary:** Cameras as components, follow logic, viewport config.
  - **Learn:** No new source — apply Day 33 camera + Day 72 hierarchy. Re-open LearnOpenGL "Camera" if needed.
  - **Roadmap:** camera component · follow logic · aspect/viewport · switching cameras
  - **Build:** A follow camera that tracks the player; aspect survives resize.
  - **Done:** Camera follows smoothly; resize doesn't distort.
- **Day 75 — The Physics→Renderer Bridge**
  - **In plain words:** Physics world and render world are separate; each frame you copy physics positions onto render objects — with interpolation so motion isn't choppy. This is the reason games look smooth at low tick rates.
  - **Summary:** One physics world, one render world, no jitter.
  - **Learn:** The "fixed timestep + interpolation" classic article (search "interpolate your game loop GafferOnGames") — 15 minutes that will never leave you.
  - **Roadmap:** interpolation · fixed-step accumulation · physics→transform sync
  - **Build:** Physics drives render transforms with interpolation at 60fps.
  - **Done:** Motion is smooth; you can freeze physics and see interpolation hold.
- **Day 76 — Module Facade + Header Hygiene**
  - **In plain words:** Clean up the front door of your engine: a short, readable list of public headers that other code includes, everything else private. It makes your codebase look like a product.
  - **Summary:** Clean public APIs; the engine becomes a library.
  - **Learn:** "What is a header file" + "include what you use" concept pages; read one engine's public API (e.g. Box2D's b2 header).
  - **Roadmap:** public/private headers · pimpl where useful · include-what-you-use discipline · the engine-as-library layout
  - **Build:** Engine compiles as a library with a deliberately small public API.
  - **Done:** A game main links the lib; public headers are a short, readable list.
- **Day 77 — Consolidation 9: ECS From Memory**
  - **In plain words:** Blank-file rebuild of a minimal ECS. If IDs + arrays + one system come out of your head, this foundational idea is owned.
  - **Summary:** Rebuild the minimal ECS closed-book.
  - **Learn:** Re-open the EnTT README if stuck.
  - **Roadmap:** entities + components + one system, from scratch
  - **Build:** ECS with a movement system fed by test data.
  - **Interview:** Q#12 of 20 — e.g. "What is RAII and where does the GPU-side of it live in a renderer?"
  - **Pitch:** Refresh with the ECS/architecture line.
  - **Done:** ECS demo runs; Q answered; pitch v1.1.

### Week 12 (Days 78–84) — Content, Editor, Save/Load

- **Day 78 — Resource Manager**
  - **In plain words:** Load each texture/mesh/shader once; everyone asks the manager for it and gets the same object. One load, shared forever, hot-reloaded.
  - **Summary:** Load once, share forever, count references.
  - **Learn:** A "resource manager" article (search the term) + your core RAII pattern applied.
  - **Roadmap:** texture/mesh/shader cache · `shared_ptr`-style refcounts · reload-on-change
  - **Build:** Load a texture once; a second request hits the cache.
  - **Done:** Cache hit proven by counter; hot-reload works for textures.
- **Day 79 — Asset Pipeline Basics**
  - **In plain words:** A manifest file lists your assets; the engine loads from it, not from guesswork. Missing asset → friendly error. The baby version of Unreal's asset registry.
  - **Summary:** Conventions and manifests so assets survive renames.
  - **Learn:** Search "asset manifest / asset pipeline game engine"; compare with Unreal's documented asset registry concept.
  - **Roadmap:** asset manifest · import/cook conventions · folder layout · IDs vs paths
  - **Build:** Assets load from a JSON manifest; missing asset = loud error.
  - **Done:** Manifest-driven load works; error path is friendly.
- **Day 80 — Save/Load With JSON**
  - **In plain words:** Your Unity "Save Scene" in code: entities become one text file (JSON); reading it back rebuilds the scene. Two functions. That's the whole day, and it's the day the engine feels real.
  - **Summary:** Serialize the world, reload it identical.
  - **Learn:** `nlohmann/json` README + the "Serialization" example page.
  - **Roadmap:** `nlohmann/json` · entity serialization · transform/camera persistence · version field
  - **Build:** Save scene → edit wildly → load → identical starting state.
  - **Done:** Round-trip is exact; a versioned scene file exists.
- **Day 81 — ImGui Editor Panels**
  - **In plain words:** An Inspector panel: click an entity in a tree, edit its numbers in a side panel, watch it move. Unity's editor, as a feature.
  - **Summary:** Hierarchy list + properties panel + scene picker.
  - **Learn:** Dear ImGui demo (the tree + table demos) — you built the overlay Days 50–51; now extend to editing.
  - **Roadmap:** hierarchy tree · properties table · selection · entity picking integration
  - **Build:** Select an entity in the tree, edit its transform, see it move.
  - **Done:** Edit-transform cycle works end to end.
- **Day 82 — Scene File Format v1**
  - **In plain words:** Give your save files a version number and a friendly error when something breaks. Corrupt file → "line 3 is bad," not a crash.
  - **Summary:** A real `.scene` text format with versioning and error handling.
  - **Learn:** Search "scene file format versioning" + skim how Unity's YAML warns; you're re-walking that road simpler.
  - **Roadmap:** custom text/tagged format · versioning · load-time validation · friendly errors
  - **Build:** Write the .scene importer; a corrupted file yields a helpful message.
  - **Done:** Corrupt file → clear error, not a crash.
- **Day 83 — Play Mode And Game Actions**
  - **In plain words:** A Play button: edit in peace, press Play, the scene resets and runs, press Stop, back to edit. You have built a tiny part of Unity itself.
  - **Summary:** A start/stop runtime loop bridging editor and game.
  - **Learn:** No new source — apply Day 80–82 patterns + your ECS.
  - **Roadmap:** play/stop states · runtime entity spawn · game-mode systems · editor-vs-runtime separation
  - **Build:** Press "Play", the scene resets and runs; "Stop" returns to edit state.
  - **Done:** Play/stop round-trips cleanly; save/load survives it.
- **Day 84 — Consolidation 10: Save/Load From Memory**
  - **In plain words:** Blank-file: serialize a scene, destroy it, load it back identical — with your own code and no library beyond JSON. The interview question "how do scenes save?" answered by your hands.
  - **Summary:** Rebuild the save/load round-trip closed-book.
  - **Learn:** Re-open the nlohmann/json example if stuck.
  - **Roadmap:** JSON serialize + deserialize of one scene, from scratch
  - **Build:** A scene saved and loaded to identical state with no serialization helpers (your code only).
  - **Interview:** Q#13 of 20 — e.g. "How would you prevent a vector of transforms from thrashing the cache?"
  - **Pitch:** Refresh with the editor/save-load line.
  - **Done:** Round-trip exact; Q answered; pitch v1.2.

### Week 13 (Days 85–91) — Refactor, Mini-Game, engine-v1

- **Day 85 — Codebase Refactor Pass**
  - **In plain words:** Clean the house before guests arrive. Modules get clear homes, dead code dies, names become truthful. Your interviewer will read this tree.
  - **Summary:** Make the repo legible to a stranger (your interviewer).
  - **Learn:** No new source; apply header hygiene from Day 76 + README conventions.
  - **Roadmap:** module boundaries · dead code removal · naming hygiene · `.editorconfig` · include resolution
  - **Build:** One clean pass across the engine; document the layout in the README.
  - **Done:** Directory tree is predictable; every include resolves; no dead code remains (that you can prove).
- **Day 86 — Mini-Game: Knock The Tower**
  - **In plain words:** When a stranger can play your thing, it's a game. Ball-knocks-over-blocks is small, fun, and demos your physics + renderer together. This is your Phase 2 demo reel.
  - **Summary:** The physics portfolio piece: a ball knocking over boxes.
  - **Learn:** No new source — composing ECS + physics + renderer.
  - **Roadmap:** gameplay design · spawn + aim + fire · physics scoring · win/lose loop
  - **Build:** A playable ball-vs-blocks game inside the engine.
  - **Done:** A full round plays; it's fun enough to demo twice.
- **Day 87 — Mini-Game Polish**
  - **In plain words:** Score, restart, reset, and a menu — enough that a stranger plays it cold and understands it. Polish is a different skill than building; this is its first lesson.
  - **Summary:** Score, reset, restart, menus via ImGui.
  - **Learn:** Dear ImGui demo (windows, buttons) — extend your Day 81 panels.
  - **Roadmap:** scoring · restart/reset · menu panels · feedback (sounds optional, text OK)
  - **Build:** Polish the loop until a stranger can play unassisted.
  - **Done:** Anyone can play, restart, and understand score with zero instructions.
- **Day 88 — Performance Pass 2**
  - **In plain words:** Double the objects, keep 60fps. Two profilers speak now: frame budget from Day 53 + a physics budget line. Measure, fix the #1, re-measure.
  - **Summary:** Profile physics + render together; re-earn 60fps.
  - **Learn:** Revisit Day 53 timing methods; RenderDoc for GPU cost again if needed.
  - **Roadmap:** integrated profiling · budget overlay · worst-case entity count
  - **Build:** Double entity count; keep 60fps or document the hard ceiling.
  - **Done:** Measured result; frame-budget overlay in the corner.
- **Day 89 — Stability Pass: Whole-Game Under Sanitizers**
  - **In plain words:** Ten full rounds under the leak tools. Every leak, every crash-on-bad-input fixed. "The game cannot crash on bad input" is the sentence Behaviour pays for.
  - **Summary:** A full play session, leak-free and crash-proof.
  - **Learn:** Revisit the core ASan workflow; add "fuzz-ish" bad-input tests to your scene loader.
  - **Roadmap:** play session under ASan · CRT leak check · error paths · crash reporting hook
  - **Build:** Play 10 full rounds under sanitizers; fix everything found.
  - **Done:** Full session leak-free; the game cannot crash on bad input.
- **Day 90 — README + Demo Clip 2**
  - **In plain words:** The gameplay clip and the systems list, side by side. This README section is what you'll link in every application email.
  - **Summary:** Gameplay clip + systems list for the repo.
  - **Learn:** Revisit Day 55 conventions; copy a good portfolio-README structure you like.
  - **Roadmap:** gameplay clip · tech description · systems list · screenshots · "what's next"
  - **Build:** A 60s gameplay clip + polished README section.
  - **Done:** The clip sells the physics; the README explains the systems.
- **Day 91 — Phase 2 Close: engine-v1 Tag + Pitch + Networking 3**
  - **In plain words:** Tag, post, and message one real person in the Montréal scene. The game exists; now people must know it exists.
  - **Summary:** Claim `engine-v1` with a playable, documented build.
  - **Learn:** No new source — pitch + post.
  - **Roadmap:** milestone tag · pitch v1.3 · public post · target-studio note
  - **Build:** Tag `engine-v1`; write pitch v1.3 (playable game, clean systems, save/load, editor).
  - **Networking:** Action #3 — post the gameplay clip; message one Montréal dev/recruiter with a question about their stack.
  - **Interview:** Q#14 of 20 — e.g. "Design a tiny ECS storage. Why arrays over list-of-variants?"
  - **Retrospective:** 3 sentences into `docs/retrospectives.md` — what went wrong in Phase 2, what you'd change, what surprised you.
  - **Done:** Tag + post live; a stranger can play your game from the repo; retrospective written.
  - **REST DAY 2** — after this phase's heaviest stretch (no new code, decompress; resume on Day 92).

---

# Phase 3 — Polish, Portfolio, C++ Stretch

**GATE:** starts when `engine-v1` is tagged. Day numbers are phase-relative effort-sessions kept from v3.5.

**Outcome:** The "wow" voxel module, a curated deep-C++ menu, real interview reps, and a **job-seeking machine**: polished repo + trailer + résumé + applications on the final day.

**Montréal why:** The voxel module shows systems thinking; the interview stretch is calibrated to behaviour on the DBD/engine loops; the networking wave gets you a callback.

**Must-haves:** voxel module (chunk + instancing + noise terrain + greedy meshing + threaded meshing + editing + save/load); menu 60% (4 topics × 3 sessions); interview bank + drills + mock; repo audit + devlog; trailer; CI build; application pushes.
**Nice-to-haves:** the 4th menu topic, whiteboard fluency depth, CI badge, a second mock.
**Failure mode:** If 2+ sessions behind by Day 119, cut menu topic 4 entirely and merge interview drills to whiteboard-only. **Never cut** the trailer (Day 134) or the application days (137–138). **Voxel freeze: no new voxel features after Day 103.**

### Week 14 (Days 92–98) — Voxel Mini-Module 1

- **Day 92 — Voxels: World Structure And Instancing**
  - **In plain words:** Minecraft thinking: a world is a grid of blocks, grouped into chunks. You draw a chunk with the instancing superpower from Day 45. The voxel engine's zero-hour.
  - **Summary:** Think in blocks and chunks.
  - **Learn:** CodePulse voxel engine series on YouTube (episode 1) — visual and beginner-friendly.
  - **Roadmap:** chunk · block palette · coordinate conventions · instancing for chunks
  - **Build:** One 32×32×32 chunk of boxes rendered via your instancing.
  - **Done:** 32³ renders fast; draw call stays tiny.
- **Day 93 — Terrain Generation**
  - **In plain words:** Height from noise: a smooth mathematical wobble becomes hills and plains. Same seed → same world, every time. Procedural generation's first real taste.
  - **Summary:** Deterministic noise to landforms.
  - **Learn:** CodePulse episode on terrain gen; or "Perlin noise explained" (search the term).
  - **Roadmap:** Perlin/simplex noise · height sampling · seed determinism · block palette rules
  - **Build:** Hills/plains from noise; same seed → same world.
  - **Done:** Two runs with one seed are identical; terrain is walkable.
- **Day 94 — Greedy Meshing**
  - **In plain words:** Instead of 6 quads per block (even where hidden), merge big flat areas into giant quads. Fewer triangles = faster. You'll measure the win today.
  - **Summary:** Merge coplanar faces into a few big quads.
  - **Learn:** The classic "Greedy meshing" article on 0fps.net ("Mesh simplification") + CodePulse's meshing episode.
  - **Roadmap:** face merging · greedy algorithm · quad vertex counts
  - **Build:** Greedy mesh a chunk; count vertices before/after.
  - **Done:** 3×+ vertex reduction measured and recorded.
- **Day 95 — Threaded Chunk Meshing**
  - **In plain words:** Build meshes on background workers while the game keeps running; the main thread only uploads finished work. Your first taste of parallel programming — and its new bugs (races).
  - **Summary:** Background workers build meshes; the main thread just uploads.
  - **Learn:** CodePulse multithreading episode; cppreference `std::thread`/`mutex` pages.
  - **Roadmap:** worker threads · job queue · atomic flags · main-thread upload · no data races
  - **Build:** Chunks mesh on threads as they generate.
  - **Done:** World builds with no frame hit; race detector is quiet.
- **Day 96 — Editable Voxels**
  - **In plain words:** Click to remove a block / place a block; the chunk remakes its mesh instantly. The moment it becomes an editor, not a demo.
  - **Summary:** Click to place/remove, remesh on change.
  - **Learn:** CodePulse editing episode; your Day 62 picking logic reused.
  - **Roadmap:** block picking · add/remove · affected-chunk remesh · undo-lite (optional)
  - **Build:** Place and delete blocks (through a reach/range) with live remesh.
  - **Done:** Editing feels instant; world stays consistent.
- **Day 97 — Save/Load The Voxel World**
  - **In plain words:** Your Day 80 skill, applied: save chunks to disk, restart, identical world. Persistence = it's real.
  - **Summary:** Persist chunks and edits.
  - **Learn:** Reuse `nlohmann/json`; the pattern is Day 80.
  - **Roadmap:** chunk serialization · world file versioning · incremental saves
  - **Build:** Save the edited world; restart; it reloads identical.
  - **Done:** Round-trip exact; format is versioned.
- **Day 98 — Consolidation 11: Chunk From Memory**
  - **In plain words:** Blank-file: data storage + greedy meshing from scratch. The voxel "I can actually do this" checkpoint.
  - **Summary:** Rebuild a greedy-meshed chunk closed-book.
  - **Learn:** Re-open 0fps meshing article if stuck.
  - **Roadmap:** chunk data + greedy meshing from scratch
  - **Build:** A chunk that meshes with greedy quads.
  - **Interview:** Q#15 of 20 — e.g. "What is a data race and how do you avoid one in chunk meshing?"
  - **Pitch:** Refresh with the voxel line.
  - **Done:** Chunk meshes; Q answered; pitch v1.4.

### Week 15 (Days 99–105) — Voxel Mini-Module 2 + Freeze

- **Day 99 — Voxel Face Shading + Ambient Term**
  - **In plain words:** Make blocks readable: top faces brighter, sides darker. The cheap trick instead of fancy ambient occlusion (AO — now a v2 idea, not today's).
  - **Summary:** Cheap readability without AO (AO is a v2 idea).
  - **Learn:** No new source — a shader 30 min; compare with AO tutorials you'll bookmark for later.
  - **Roadmap:** face-based darkening · simple ambient · why real AO is deferred
  - **Build:** Directional face shading makes blocks readable.
  - **Done:** World is legible in all lighting; AO noted in the v2-journal.
- **Day 100 — Player Collision In The Voxel World**
  - **In plain words:** Your Day 66 character controller, now standing on block ground: gravity, walking, world bounds. Two systems (voxel + player) touching.
  - **Summary:** Stand on blocks; your own physics answers.
  - **Learn:** Reuse the Day 66 controller; block collision = block bounds.
  - **Roadmap:** voxel colliders · player physics from Module 2 · gravity · world bounds
  - **Build:** The 2D-character controller (adapted) walks across terrain.
  - **Done:** You can walk, fall, and stand on the world.
- **Day 101 — Voxel Debug Overlays**
  - **In plain words:** X-ray vision: chunk wireframes, mesh stats, rebuild counters — proof the internals behave, and great interview talking points.
  - **Summary:** See the chunks think.
  - **Learn:** Reuse Days 50–51 ImGui panels.
  - **Roadmap:** chunk wireframe toggle · mesh stats · rebuild counters · camera clipping fixes
  - **Build:** Overlays for chunk bounds and stats via ImGui.
  - **Done:** Toggle shows chunk structure live; you can explain the meshing counts.
- **Day 102 — Voxel Polish + Cinematic**
  - **In plain words:** One flythrough clip that looks like a product screenshot reel. Your Day 33 camera plays director.
  - **Summary:** One flythrough clip that looks like a product.
  - **Learn:** No new source — camera + editing.
  - **Roadmap:** flythrough path · time-of-day/fog-lite · clip capture
  - **Build:** A polished flythrough of the editable world.
  - **Done:** A 30s clip that is pitch-material.
- **Day 103 — VOXEL FEATURE FREEZE**
  - **In plain words:** The discipline day: every cool idea (water, caves, AO, LODs) goes in a journal, zero into code. Scope control is a skill — this is its test.
  - **Summary:** The hard rule: nothing new after today.
  - **Learn:** No new source — this is a "saying no" day.
  - **Roadmap:** scope control · the "voxel-v2 ideas" journal · saying no out loud
  - **Build:** Write every cool idea (biomes, water, AO, LODs, caves…) into the v2-journal; add zero features.
  - **Done:** Journal page is full; features added today: none.
- **Day 104 — Voxel Module Packaging**
  - **In plain words:** Document the module alone: its README, data layout, perf numbers, screenshots. A stranger understands it without you.
  - **Summary:** Document the module so it stands alone.
  - **Learn:** Reuse the Day 55 README method for this module.
  - **Roadmap:** module README · perf numbers · data layout description · screenshots
  - **Build:** A standalone docs page for the voxel module.
  - **Done:** A reviewer understands the module without you.
- **Day 105 — Consolidation 12: Teach The Voxel Module**
  - **In plain words:** Record yourself explaining your own design: data, threading, meshing, editing. If you can teach it, you can defend it in an interview.
  - **Summary:** Explain the whole module out loud — that's the interview.
  - **Learn:** No new source — this is the teach-back day; record yourself, no scripting.
  - **Roadmap:** data layout · threading · meshing · editing — all narrated
  - **Build:** A narrated walkthrough of the module (recorded, 5 min).
  - **Interview:** Q#16 of 20 — e.g. "Why did you use one big draw call for chunks?"
  - **Pitch:** The voxel line folds into the master pitch v1.5.
  - **Done:** You can teach it coherently; recording exists.

### Week 16 (Days 106–112) — Deep C++ Menu, Part 1

- **Day 106 — Menu Decision Day**
  - **In plain words:** You are NOT finishing a checklist. You choose 4 deep topics relevant to Montreal studios, write one line of "why" each, and skip the rest — on purpose, and able to say why.
  - **Summary:** Pick your 60% with your target studios in mind — this is a menu, not a checklist.
  - **Learn:** Skim each menu option's primer page (5 minutes each): threads, allocators, DOD, templates, engine source, Unreal idioms.
  - **Roadmap:** menu options: concurrency · allocators · data-oriented design · template metaprogramming · reading engine source (Box2D/Godot/Doom3) · Unreal idioms
  - **Build:** Choose 4 stack topics; write one line of rationale for each tied to a target studio. Then spend 30 more minutes filling your **topic sheet**: for each of the 4, write its **primary source**, one **"why games care"** example, and one **interview-style question you would ask**. Add the new sources to Appendix D.
  - **Done:** Selection written and justified; each topic has a source + a "why games care" example + one interview question on the sheet (this sheet powers Days 107–118); you feel the guilt of skipping the rest — that's the point.
- **Day 107 — Menu Topic 1, Morning**
  - **In plain words:** First deep topic, day 1: the fundamentals + one working demo + "why games care."
  - **Summary:** Your first pick, deep end first.
  - **Learn:** The topic's assigned source (see your Day 106 choice sheet).
  - **Roadmap:** (your topic) fundamentals · canonical example · "why games care"
  - **Build:** A working piece of code demonstrating the topic.
  - **Done:** The demo runs; you can define the topic in one sentence.
- **Day 108 — Menu Topic 1, Deep**
  - **In plain words:** Day 2 of the topic: I push it until it breaks — and understand the breakage.
  - **Summary:** The topic under real conditions.
  - **Learn:** Same source, the "gotchas" sections.
  - **Roadmap:** edge cases · failure modes · real-world trade-offs
  - **Build:** An adversarial test for your demo (data race, allocator blowout, etc.).
  - **Done:** The failure is reproduced, understood, fixed or written up.
- **Day 109 — Menu Topic 1, Teach-Back**
  - **In plain words:** Day 3 of the topic: teach it in 200 words + 3 minutes. Teaching is the deepest form of knowing.
  - **Summary:** You're the instructor now.
  - **Learn:** No new source — write from your own demo.
  - **Roadmap:** explanation · diagram · one interview-style question answered
  - **Build:** A writeup (200 words) + a 3-minute spoken explanation.
  - **Done:** A non-expert could follow the writeup.
- **Day 110 — Menu Topic 2, Morning**
  - **In plain words:** Second deep topic begins — same rhythm: fundamentals, demo, why-it-matters.
  - **Summary:** Second pick, deep end first.
  - **Learn:** The topic's assigned source.
  - **Roadmap:** (your topic) fundamentals · canonical example · "why games care"
  - **Build:** A working code demo.
  - **Done:** Demo runs; one-sentence definition ready.
- **Day 111 — Menu Topic 2, Deep**
  - **In plain words:** Push topic 2 until it breaks; learn the failure.
  - **Summary:** Under real conditions again.
  - **Learn:** The source's gotchas sections.
  - **Roadmap:** edge cases · failure modes · trade-offs
  - **Build:** An adversarial test; fix or write up.
  - **Done:** Failure understood and documented.
- **Day 112 — Menu Topic 2, Teach-Back + Cadence**
  - **In plain words:** Teach topic 2 + the weekly cadence duties (interview Q, pitch refresh) ride along.
  - **Summary:** Topic 2 explained; cadence day duties ride along.
  - **Learn:** Write from your own demo.
  - **Roadmap:** explain · diagram · answer a question
  - **Build:** Topic 2 writeup + spoken walkthrough.
  - **Interview:** Q#17 of 20 — e.g. "What's an allocator arena and why do games use them?"
  - **Pitch:** Refresh with a mastery line.
  - **Done:** Writeup done; Q answered; pitch v1.6.

### Week 17 (Days 113–119) — Deep C++ Menu, Part 2

- **Day 113 — Menu Topic 3, Morning**
  - **In plain words:** Third deep topic begins — same rhythm.
  - **Summary:** Third pick, deep end first.
  - **Learn:** The topic's assigned source.
  - **Roadmap:** (your topic) fundamentals · canonical example · "why games care"
  - **Build:** Working demo.
  - **Done:** Demo runs; one-sentence definition ready.
- **Day 114 — Menu Topic 3, Deep**
  - **In plain words:** Push topic 3 until it breaks.
  - **Summary:** Under real conditions.
  - **Learn:** The source's gotchas sections.
  - **Roadmap:** edge cases · failure modes · trade-offs
  - **Build:** Adversarial test; fix or write up.
  - **Done:** Failure understood and documented.
- **Day 115 — Menu Topic 3, Teach-Back**
  - **In plain words:** Teach topic 3 in 200 words + 3 minutes.
  - **Summary:** Explain topic 3.
  - **Learn:** Write from your own demo.
  - **Roadmap:** writcup + spoken walkthrough
  - **Build:** 200-word writeup + 3-minute explanation.
  - **Done:** Writeup stands alone.
- **Day 116 — Menu Topic 4, Morning**
  - **In plain words:** Fourth deep topic (cut it if you're behind — the failure mode is real). Same rhythm.
  - **Summary:** Fourth pick (cut if you're behind — per failure mode).
  - **Learn:** The topic's assigned source.
  - **Roadmap:** fundamentals · canonical example · "why games care"
  - **Build:** Working demo.
  - **Done:** Demo runs; definition ready in one sentence.
- **Day 117 — Menu Topic 4, Deep**
  - **In plain words:** Push topic 4 until it breaks.
  - **Summary:** Under real conditions.
  - **Learn:** The source's gotchas sections.
  - **Roadmap:** edge cases · failure modes · trade-offs
  - **Build:** Adversarial test; fix or write up.
  - **Done:** Failure understood and documented.
- **Day 118 — Menu Topic 4, Teach-Back**
  - **In plain words:** Teach topic 4 in 200 words + 3 minutes.
  - **Summary:** Explain topic 4.
  - **Learn:** Write from your own demo.
  - **Roadmap:** writeup + spoken walkthrough
  - **Build:** 200-word writeup + 3-minute explanation.
  - **Done:** Writeup stands alone.
- **Day 119 — Consolidation 13: Teach One Topic + Justify The Menu**
  - **In plain words:** Prove the menu was a choice, not a to-do list: teach your best topic, then defend the skips. That defense IS an interview answer.
  - **Summary:** Prove the menu was a choice, not a to-do list.
  - **Learn:** No new source.
  - **Roadmap:** pick your best topic · teach it · defend skipping the rest
  - **Build:** A 5-minute recorded explanation of your best menu topic.
  - **Interview:** Q#18 of 20 — e.g. "Pick one thing you skipped recently and explain your trade-off."
  - **Pitch:** Refresh with a confidence line.
  - **Done:** Recording exists; you can defend each skip.
  - **REST DAY 3** — after the heaviest stretch (no new code, decompress; resume on Day 120).

### Week 18 (Days 120–126) — Interview Reps

- **Day 120 — Interview Question Bank**
  - **In plain words:** Build YOUR 50-question drill set from the places interviewers actually steal questions. You'll meet these questions again — in actual interviews.
  - **Summary:** Assemble your own 50-question drill set.
  - **Learn:** cppquiz.org (start), plus your own plan's topics, plus C++ interview question lists you'll find on GitHub.
  - **Roadmap:** categories: memory · ownership · containers · OOP · templates · concurrency · rendering · game loops · C#→C++
  - **Build:** A categorized question bank (from CppQuiz, StackOverflow, your own phases) with sources.
  - **Done:** 50 questions categorized; you've read all of them.
- **Day 121 — Memory/Ownership Drills**
  - **In plain words:** The three questions every Montreal C++ interview asks, answered in YOUR words: unique_ptr transfer, shallow-copy bug, use-after-free. Under 2 minutes each.
  - **Summary:** The three questions every Montréal C++ interview asks.
  - **Learn:** Revisit your core writeups (copy semantics, move semantics, pointers); cppreference if a detail slips.
  - **Roadmap:** unique_ptr transfer · shallow-copy bug · use-after-free symptoms
  - **Build:** Write the three answers in your own words with code sketches.
  - **Done:** You can deliver all three in under 2 minutes each.
- **Day 122 — CppQuiz/LeetCode Session 1**
  - **In plain words:** Timed reps: 10 questions, 5 minutes each, mercy = notes on every miss. The muscle-memory of interview-day speed.
  - **Summary:** Timed reps with mercy.
  - **Learn:** cppquiz.org for conceptual; LeetCode "Top 75" C++ for coding.
  - **Roadmap:** 10 timed C++ problems · review failures · pattern notes
  - **Build:** 10 problems, 5 minutes each, notes on misses.
  - **Done:** 10 attempted; every fail has a one-line fix note.
- **Day 123 — Whiteboard Mechanics**
  - **In plain words:** Solve on paper, narrate out loud, recover from mistakes publicly. Interviews are about the narration, not the answer.
  - **Summary:** Solving on paper, narrating out loud.
  - **Learn:** Any "how to solve code problems out loud" article; then practice.
  - **Roadmap:** paper solve · narrative · error recovery in public
  - **Build:** One problem solved entirely on whiteboard/paper with voice narration.
  - **Done:** A stranger could follow your narration.
- **Day 124 — "Architect A Renderer" (Junior Edition)**
  - **In plain words:** The design question, answered from YOUR own engine: entry point, modules, scene → draw → present. You'll have done it for real; now say it.
  - **Summary:** The design question, answered at your level.
  - **Learn:** No new source — your engine is the case study.
  - **Roadmap:** entry point · modules · scene → draw → present · what you'd cut
  - **Build:** A 15-minute recorded answer using YOUR engine as the case study.
  - **Done:** Recording exists; you answer in actual architecture terms.
- **Day 125 — Mock Interview 1**
  - **In plain words:** A real human interviews you. The single highest-ROI session in Phase 3. Ask a peer/mentor for 45 minutes.
  - **Summary:** A real person asks real questions.
  - **Learn:** Ask your mock interviewer to use your Day 120 bank.
  - **Roadmap:** find a peer/mentor · 45-minute mock on your project + C++ basics · notes
  - **Build:** Full mock; write the top 3 weak spots afterwards.
  - **Done:** Mock done; weak-spot list written; one fix scheduled.
- **Day 126 — Consolidation 14: Rapid-Fire Summit**
  - **In plain words:** 5 questions, 60 seconds each, on the record. Your 30-second pitch should now be memorized.
  - **Summary:** 5 questions, 60 seconds each, out loud.
  - **Learn:** Your own bank (Day 120).
  - **Roadmap:** random draw from your bank · timed answers · self-score
  - **Build:** 5 rapid-fire answers recorded.
  - **Interview:** Q#19 of 20 — drawn from your own bank.
  - **Pitch:** Your 30-second verbal pitch is now memorized.
  - **Done:** All 5 answered; weakest one gets a fix note.

### Week 19 (Days 127–133) — Portfolio And Application Arsenal

- **Day 127 — Portfolio Repo Audit**
  - **In plain words:** Judge your repo like a hiring manager: README, tech list, screenshots, structure, branches. Fix every finding. This is the court you'll be judged in.
  - **Summary:** Judge your repo like a hiring manager.
  - **Learn:** Revisit Day 55 README standards; look at 2 more admired repos.
  - **Roadmap:** README · tech-stack align · screenshots/clips · structure · branch hygiene
  - **Build:** Fix every audit finding.
  - **Done:** Checklist is green; a stranger 60 seconds in knows the value.
- **Day 128 — Devlog: The Engine's Story**
  - **In plain words:** Write the journey — what broke, how you fixed it, what you learned. Stories get callbacks; screenshots get glanced at.
  - **Summary:** Write the journey — struggle, fix, result.
  - **Learn:** Read one good game-dev devlog for tone; then write yours.
  - **Roadmap:** narrative craft · before/after moments · performance wins · how-to-find-me
  - **Build:** Publish one honest devlog about building the engine.
  - **Done:** It's live somewhere linkable.
- **Day 129 — Target Studio List + Tracking Sheet**
  - **In plain words:** Name your targets (Eidos-Montréal, Behaviour, Gameloft, Ludia, Ubisoft, WB, Frima…) and track every application: role, URL, status, tailored note, date. 10+ rows.
  - **Summary:** Montréal C++/engine/tools junior roles, tracked.
  - **Learn:** The studios' career pages + LinkedIn jobs search "junior C++ Montreal games".
  - **Roadmap:** Eidos-Montréal · Behaviour · Gameloft · Ludia · Ubisoft · WB · Frima · reflectors-of-the-scene
  - **Build:** A tracking sheet: role, URL, status, tailored-note, deadline.
  - **Done:** 10+ roles tracked with application dates set.
- **Day 130 — LinkedIn + Portfolio Page**
  - **In plain words:** A recruiter landing on your LinkedIn should get the story in 5 seconds: headline, featured project, one link.
  - **Summary:** Your online self sells the engine.
  - **Learn:** Skim two "game dev LinkedIn" micro-guides; copy the good headlines.
  - **Roadmap:** profile alignment · featured project · posts · a one-page portfolio URL
  - **Build:** Project featured, headline rewritten, portfolio page live (or a solid GitHub profile).
  - **Done:** Recruiter landing on your LinkedIn gets the story in 5 seconds.
- **Day 131 — Résumé, Rewritten Around Outcomes**
  - **In plain words:** Results, not responsibilities: "built a physics-driven mini-game" + a number, not "responsible for gameplay." One human reads it before you send it.
  - **Summary:** Results over responsibilities.
  - **Learn:** Skim 2 "game dev resume" guides; then write. Send to a human for feedback.
  - **Roadmap:** outcome phrasing · project impact numbers · tech list · DCS + self-directed credibility
  - **Build:** A new résumé precedented around the engine and its results.
  - **Done:** One human has read and commented on it.
- **Day 132 — Cover Letter Factory**
  - **In plain words:** One template + three tailored letters, each mentioning something REAL about the studio's work. Three, not thirty.
  - **Summary:** One template, three tailored letters.
  - **Learn:** Read each studio's site/about page for the "real thing" to mention.
  - **Roadmap:** template · role-tailoring · studio-specific paragraph
  - **Build:** One template + 3 done letters for your top targets.
  - **Done:** 3 letters each mention something real about the studio's work.
- **Day 133 — Consolidation 15: Pitch Rehearsal**
  - **In plain words:** Two lengths, airtight: 30-second elevator + 3-minute deep dive. Record both; then refine from the recording.
  - **Summary:** 30-second and 3-minute versions, airtight.
  - **Learn:** No new source — your pitch drafts (20 of them by now) are the material.
  - **Roadmap:** 30s elevator · 3m deep-dive · questions you'll get
  - **Build:** Practice both live; refactor your 3 lines into the 3-minute version around the engine's choices.
  - **Interview:** Q#20 of 20 — drawn from your bank.
  - **Pitch:** 30s + 3m variants nailed; recorded.
  - **Done:** You can pitch at two lengths on demand.

### Week 20 (Days 134–140) — Ship And Apply

- **Day 134 — Final README + Trailer**
  - **In plain words:** The 60-second sell of everything: one short trailer (showcase + voxel + mini-game) + final README. This is the "why hire me" door.
  - **Summary:** The 60-second sell of everything.
  - **Learn:** Reuse Day 55 README method + your clips.
  - **Roadmap:** trailer (30–60s): showcase + voxel + mini-game · final README · links
  - **Build:** Edit and publish the trailer; finalize the README.
  - **Done:** Trailer < 60s, pitch-quality, linkable.
- **Day 135 — Build Hygiene + CI**
  - **In plain words:** Your repo builds itself: GitHub Actions runs the build + tests on every push. A green badge whispers "I know how projects get shipped."
  - **Summary:** Your repo builds itself now.
  - **Learn:** GitHub Actions "C++ build" quickstart (orphan tutorial in GitHub docs).
  - **Roadmap:** GitHub Actions · one-command release · tags · badge
  - **Build:** A CI workflow that builds and tests on push.
  - **Done:** Green badge; fresh clone builds via CI. If it eats the whole day, cut to a single green build badge and finish CI after the finish line — never trade an application-send day for a badge.
- **Day 136 — Testing Pass**
  - **In plain words:** Sweep your tests, and write the honest "what's tested and why" note for the README. Discipline displayed, not claimed.
  - **Summary:** Show the discipline behind the demo.
  - **Learn:** Reuse the math GoogleTest setup from Phase 1.
  - **Roadmap:** unit coverage summary · key tests documented · CI runs them
  - **Build:** Sweep tests; write a coverage note for the README.
  - **Done:** Tests all green in CI; README states what's tested and why.
- **Day 137 — Application Push 1**
  - **In plain words:** The first 3–5 real applications, tailored letter + résumé + link. This is what everything before was for.
  - **Summary:** Top targets, tailored materials.
  - **Learn:** Your Day 129 tracker + Day 132 letters.
  - **Roadmap:** 3–5 applications · tailored letter + résumé + link set
  - **Build:** Submit batch 1; update tracking sheet.
  - **Done:** 3–5 sent with tailored materials; tracking updated.
- **Day 138 — Application Push 2**
  - **In plain words:** Second wave + a follow-up template so no application goes silent without a touch.
  - **Summary:** The second wave.
  - **Learn:** Reuse Day 132 letters; write the follow-up template.
  - **Roadmap:** next 3–5 applications · follow-up etiquette drafted
  - **Build:** Submit batch 2; write your follow-up template.
  - **Done:** Second batch sent; follow-up template ready.
- **Day 139 — Networking Wave 4**
  - **In plain words:** People, not portals: one meetup/event RSVP + one direct recruiter/dev message + three conversations. This is the part that actually gets callbacks.
  - **Summary:** Recruiters and humans, not just portals.
  - **Learn:** IGDA Montréal / game-dev meetup lists; LinkedIn "message a dev" etiquette article, 5 min.
  - **Roadmap:** Montreal game-dev meetups / IGDA · recruiter DMs · insightful comments · the 30-second pitch live
  - **Build:** 3+ human conversations started (event, DM, comment thread).
  - **Networking:** Action #4 — one meetup/event RSVP + one direct recruiter/Dev message.
  - **Done:** Three genuine contacts made; your name is no longer a stranger's.
- **Day 140 — engine-portfolio Tag + Final Pitch + Next 90 Days**
  - **In plain words:** Close the loop: final tag, final pitch published, and the "next 90 days" plan written — because momentum is the rarest thing you'll build here.
  - **Summary:** Close the loop and keep the momentum.
  - **Learn:** No new source.
  - **Roadmap:** final tag `engine-portfolio` / `cpp-mastery-lite` · final 3-sentence pitch · the continuing plan
  - **Build:** Tag everything; publish the final pitch and trailer; write your "next 90 days" plan (whichever direction the job search bends).
  - **Interview:** Q#21 bonus for the road — the single hardest question in your bank, on the record.
  - **Retrospective:** The final one into `docs/retrospectives.md` — what went wrong across all four phases, what you'd change, what surprised you. (4 retrospectives = the story of how you learned, and it closes the portfolio.)
  - **Done:** Final tag + pitch live; next-90-days plan written; retrospective #4 written; *the next morning* defined.

---

# Appendices

## Appendix A — Milestone checklist

| Gate | Tag / Milestone | What "done" means |
|------|-----------------|-------------------|
| Phase 0 capstone | `cpp-core` | LearnCpp finished linearly through ch 28; console capstone runs leak-free under ASan; Q#4 answered; networking #1 done |
| Phase 1, Day 28 | `math-v0.1` | Vec3 + Mat4 pass tests rebuilt from memory |
| Phase 1, Day 56 | `graphics-v1` | Showcase scene: your-math matrices, shadows, instancing, RenderDoc workflow, ImGui overlay; pitch v0.9 posted |
| Phase 2, Day 91 | `engine-v1` | Knock-the-Tower playable; ECS + resources + save/load + editor panels; ASan-clean session; pitch v1.3 posted |
| Phase 3, Day 103 | `voxel-freeze` | Voxel module feature-frozen; v2-journal filled |
| Phase 3, Day 140 | `engine-portfolio` / `cpp-mastery-lite` | Trailer + README + CI + tests green; 6–10 applications sent; final pitch published; next-90-days plan written |

Habit checks that ride along every milestone/session: commit that stands alone · sanitizer session at least weekly once the core's leak tools land · clang-tidy nearing clean in Phase 1+ · 20 interview questions done by the finish line · 20 pitch refreshes banked · milestone retrospectives written (cpp-core, Phase 1, Phase 2, final).

## Appendix B — Toolchain and dependencies

- **Compiler/IDE:** Visual Studio 2022 (MSVC) at `J:\VS 2022 community`; VS Code for quick edits.
- **Build:** CMake (at `C:\Program Files\CMake`) + presets; Debug and Release configurations.
- **VCS:** Git; feature-branch workflow; tags every milestone.
- **Graphics:** GLFW + GLAD (OpenGL 3.3+); your own math library only — no GLM.
- **Assets:** `stb_image` for textures; `tinyobjloader` (or assimp) for meshes.
- **UI:** Dear ImGui (docking branch).
- **Data:** `nlohmann/json` for save/load + asset manifests.
- **Tests:** GoogleTest (`FetchContent`).
- **Debugging/QA:** VS2022 debugger; AddressSanitizer + MSVC CRT leak detection; RenderDoc 1.x for GPU frames; `clang-tidy` via CMake target.
- **CI:** GitHub Actions — build + test on push (Day 135).
- **Pinned**: all deps via `FetchContent` or vcpkg, pinned to specific versions so builds are reproducible.

## Appendix C — Montréal studio concept map (your C# knowledge → C++ reality)

| Unity/C# mental model | C++ reality you now own | Where it shows up here |
|---|---|---|
| `MonoBehaviour` lifecycle | RAII + explicit update/start/stop | Phase 0; Day 83 Play Mode |
| `GameObject`/components | Minimal ECS: entity IDs + components in arrays | Day 71 |
| Garbage-collected references | `unique_ptr`/`shared_ptr`/`weak_ptr` + ownership transfer | M16 |
| `Transform.localToWorldMatrix` | Your Mat4 TRS + scene graph compose | Phase 1 Day 26; Day 72 |
| FixedUpdate + interpolation | Fixed timestep + physics–render sync | Day 57, 75 |
| Physics `Raycast` | Your 2D raycast + picking | Day 62 |
| ScriptableObjects / serialization | JSON save/load + .scene format | Days 80–82 |
| Profiler / Frame Debugger | RenderDoc + timing queries + budget overlay | Days 46, 53 |
| **Unreal head-start (your actual hiring target)** | | |
| `UObject`/reflection | Struct-of-bits + explicit serialization you control | M17 (relationships), Days 71, 80 |
| `TArray`/`TSharedPtr` | `std::vector` + smart pointers — the ideas transfer | Phase 0 |
| `FVector`/`FTransform` | Your Vec3/Mat4/Quat — same math, different names | Phase 1 Days 25–27 |
| Unreal's asset registry / cooking | Your manifest-based asset pipeline | Day 79 |

## Appendix D — The Sources Map (learn these once, reuse forever)

The same handful of free resources power the whole journey. **Learn** = what to read/watch before you build. **Reference** = the dictionary to look things up in when stuck. **Practice** = where the "Build" tasks live. **This map is a living document** — when you find a better source than one listed, swap it in and add a row.

| Purpose | Source | How to use it |
|---|---|---|
| C++ course | **learncpp.com** | YOUR full course and the spine of Phase 0 — read it linearly, chapters in order, at your pace. |
| C++ reference | **cppreference.com** | The dictionary. Never read like a chapter; search the term, read the first lines. |
| OpenGL course | **learnopengl.com** | THE graphics course — Phases 1–2 draw from it chapter-by-chapter. |
| Math intuition | **3Blue1Brown — "Essence of Linear Algebra"** (YouTube) | Watch the matched episodes before the math sessions (Phase 1 Days 25–28). 20 min each. |
| Physics-from-scratch | **K. Sun, "How to Create a Custom 2D Physics Engine"** (free archive series); alternates: **Randy Gaul's Impulse Engine / "How to build a physics engine"** (tutsplus) and the **Box2D manual** | The core of Phase 2 physics. Follow chapters, write your own in your engine. If a K. Sun lesson doesn't click, switch teachers instantly — same physics, different voice, no guilt. |
| Graphics debugging | **RenderDoc** (renderdoc.org) | Install, then Phase 1 Day 46 teaches you to capture your own frames. |
| ImGui | **Dear ImGui** README + built-in demo | The demo IS the tutorial — run it and copy panels. |
| CMake | **Modern CMake** (cliutils.gitlab.io/modern-cmake) | Chapters 1–4 + the presets page cover everything this plan needs. |
| Git | **Pro Git** (git-scm.com/book) | Chapters 2–3, skim. Practice is the teacher. |
| Voxel engines | **CodePulse** (YouTube voxel series) + **0fps.net** (greedy meshing) | Videos for intuition, 0fps for the greedy-meshing math. |
| Data-oriented design | **Mike Acton — "Data-Oriented Design and C++"** (CppCon) | Watch before Day 68; keynotes the whole ECS mindset. |
| ECS | **EnTT** (skypjack/entt) README/wiki | The structure Day 71 builds; read their overview. |
| Allocators / performance | **Casey Muratori — "Performance-Aware Programming"** (free) | Optional depth for the menu; the best free treatment exists. |
| Interview drills | **cppquiz.org** + LeetCode C++ | Use from Day 120 onward; 10 problems × 5 min sessions. |
| C++/Unreal idioms | **Unreal Engine docs** (UObject, TArray, reflection) | Bookmark for the menu option + after-hire. |
| Debugger/sanitizers | **Microsoft Learn** (VS debugger pages; AddressSanitizer) | The exact VS2022 pages for the leak-workflow and Phase 1 Day 24. |

## Appendix E — Interview bank seed (20 answers banked by the finish line)

Core gates (Q#1–4) · Phase 1 (Q#5–9) · Phase 2 (Q#10–14) · Phase 3 (Q#15–20) — all drawn from or extending this seed:

1. `std::string` vs `std::string_view` — and when does the view dangle?
2. Walk through `push_back` of a move-only type.
3. How would you detect a memory leak in a C++ program?
4. `unique_ptr` vs `shared_ptr`: when each in a game loop?
5. What is a use-after-free and how do sanitizers catch it?
6. What does RAII mean — give a real example.
7. Why do games avoid `shared_ptr` in hot paths?
8. What happens behind the scenes when you draw an instanced mesh?
9. Why is a fixed timestep important?
10. When is `std::move` actually a move?
11. Where does RAII live on the GPU side of a renderer?
12. How do you keep a vector of transforms cache-friendly?
13. Design a tiny ECS storage — why arrays?
14. What is a data race and how do you avoid one in chunk meshing?
15. Why use one big draw call for chunks?
16. What's an allocator arena and why do games use one?
17. Defend skipping something you deliberately didn't learn.
18. (From your bank) — random draw.
19. (From your bank) — hardest remaining.
20. The hardest one left, on the record.

## Appendix F — Networking / visibility menu (minimum one per phase)

- Post the phase's artifact with a 3-sentence pitch (LinkedIn/devlog) — the gates already schedule this.
- Attend one Montréal game-dev meetup / IGDA Montréal event (even online) per phase and introduce yourself to one person.
- Endorse-comment on a Montréal studio's dev post; ask one real question about their stack.
- DM one recruiter/developer with **their** problem in mind ("saw your renderer post, here's how I'd approach X").
- Publish one devlog (Day 128 is scheduled) and cross-link it.
- Keep the repo public, canonical link everywhere, README with a human-voice first paragraph.

---

## The last word

**Continue where you are today, not next week.** The plan is now paced by LearnCpp — you are sitting at **ch 10.1**, and 10.2 is one click away. Read it, take the quiz, finish the last warning in your conversion lab, commit it, and come back for 10.3. No jumping ahead, no backtracking into meh chapters unless you put them in the Deferred Registry.

And when a Roadmap line still makes you go *"wtf is that?"* — that's not a failure of you. It's the signal to read the plain-words line again, open the LearnCpp lesson, and search the term. Every one of those terms was intimidating to every C++ programmer in the world once. The difference is only that you have a chapter, a quiz, and a build task pointed at it.

*LearnCpp teaches. The plan keeps the order. You keep the pace. The engine follows — and the job is the point.*