# Day 24 — Debugger Workbench (full lesson, beginner grade)

**Today's build:** `solutions/D9_Crash` — a program made to crash on purpose.
**Your job:** use the debugger to find out *why* it crashes — without reading the code aloud.

---

## 1. What is a debugger, and why does it exist?

Imagine you wrote a recipe and the cake comes out burnt. You don't rewrite the
whole recipe. You stop the oven, look inside, and check each ingredient as the
recipe runs.

A **debugger** lets you do exactly that to your program:

- **Pause** it in the middle of running (a *breakpoint*).
- **Look inside** the variables (a *watch* / the *locals window*).
- **See the path** that led here (the *call stack*).
- **Step** forward one line at a time (F10 / F11).

Programs don't usually crash because of bad luck. They crash because some
**rule was broken** (called a function 12,000 times without returning = stack
overflow, like your `D9_Crash`). A debugger turns "it exploded somewhere" into
"here is exactly the line, and here is every clue".

> **60-IQ translation:** the debugger is a time-machine + x-ray for your code.
> You freeze a moment, look inside, and see the story.

---

## 2. The five windows you'll live in

| Window | What it shows | When you need it |
|---|---|---|
| **Breakpoints** (F9 to toggle) | Red dots on lines where the program *must pause* | "It goes bad somewhere after line X" |
| **Step Over** (F10) | Run the current line, but skip *inside* other functions | Walking through a function line-by-line |
| **Step Into** (F11) | Run the current line *and* go inside the function it calls | When the bug hides inside the call |
| **Locals / Watch** | Live values of variables, updating as you step | "What is `depth` right now?" |
| **Call Stack** (Ctrl+Alt+C) | The ladder of *who called whom*, top = now | Crashes, and "why did we even get here?" |

**The golden rule of debugging:** *never guess — look*. If you're about to say
"I think it's the recursion", you are guessing. Put a breakpoint, watch `depth`,
and *watch it happen*.

---

## 3. Stop 1 — run D9_Crash under the debugger and catch the crash

1. Open `solutions/D9_Crash/build/D9_Crash.sln` in Visual Studio 2022.
2. Press **F5** (Start Debugging).
3. Watch the console: it prints `A(...)` and `B(...)` forever... then VS
   **breaks** and complains about an exception: **`0xC00000FD` (Stack overflow)**.
4. VS now highlights the exact line that was executing when the stack ran out.

That's the "crime scene". The program wasn't stopped by your hand — the crash
**stopped it**, and the debugger caught the moment.

---

## 4. Stop 2 — read the Call Stack (the whole story)

Press **Ctrl+Alt+C**. You'll see a long list that ends with frames like:

```
main()            ← the bottom of the ladder (the first caller)
  turnA(...)
    turnB(...)
      turnA(...)
        turnB(...)   ← thousands of these
          ...
            turnA(...)  ← the very top = where it crashed (current line)
```

Read it bottom-to-top: `main` called `turnA`, which called `turnB`, which called
`turnA`, which called `turnB`... The same two names repeating **thousands of
times**.

> **Aha moment:** a healthy program's call stack is *short* — three or four
> frames. A stack that is thousands deep is the bug itself talking. This is a
> **stack overflow**: the stack ran out of memory because nobody ever returned.

---

## 5. Stop 3 — prove it with the Locals/Watch window

1. While broken, open **Locals** (Debug ▸ Windows ▸ Locals) or add a **Watch**
   entry for `depth`.
2. Note the number (e.g. `depth = 1972`).
3. **Break all** (pause), then press **F5** to resume. Watch it creep up:
   1972, 1989, 2001... then it crashes again, slightly higher each time.

Now you've *proven* the code never stops climbing. Each call adds one to
`depth` and recurses again — **the exit condition can't be reached before the
stack is full** (`n` has to go from 1,000,000 to 0, but the stack only fits
~12,000 frames).

**The bug in plain words:** `turnA` calls `turnB` which calls `turnA`... forever.
`n` shrinking doesn't save us — we run out of *stack memory* long before `n`
reaches 0.

---

## 6. Stop 4 — the fix (in your head, don't type it yet)

A recursion that never returns is the bug. Any of these would fix it:

- Make `turnA(1000000)` a *small* number (like `turnA(3)`) so the recursion
  ends before the stack fills.
- Write it as a **loop** instead (no growing stack at all).
- Add a guard: `if (depth > 1000) return -1;` — a "circuit breaker".

The debugger's job isn't to write the fix for you. Its job is to make the bug
**undeniable** so you stop guessing. You did that in three stops.

---

## 7. Catch yourself — the 3 classic mistakes

1. **"I'll just print things."** `std::cout` is fine for small stuff, but a
   million-line log is not a call stack. Use the debugger when you need *where*
   and *state*, not just *what printed*.
2. **Stepping into library code forever.** Use **Step Over (F10)** by default;
   use **Step Into (F11)** only when the bug is inside the call you're about to
   enter.
3. **Fixing before looking.** The urge to "just try something" is strong.
   Debugger-first: break, observe, *then* act.

---

## 8. Glossary (every word from today, in plain English)

| Word | Meaning |
|---|---|
| Debugger | A tool that pauses your program and lets you inspect it live |
| Breakpoint | A marked line where the program automatically pauses |
| Step Over (F10) | Run one line, staying in the current function |
| Step Into (F11) | Run one line, diving into the called function |
| Locals window | Shows all local variables' current values |
| Watch window | Shows specific variables you care about, updating live |
| Call Stack | The ladder of function calls that led to the current line |
| Stack overflow | The program used all its stack memory (too-deep nesting) |
| 0xC00000FD | Windows' name for that crash: STATUS_STACK_OVERFLOW |

---

## 9. Three quick exercises (do them, then reveal)

1. Change `main` to call `turnA(3)` with a breakpoint on line 12 of `main.cpp`.
   F11-step through it. How many frames deep does the call stack get before it
   returns? *(Answer: it bounces A→B→A→B 3-4 times, then unwinds right back to
   main — a healthy, short ladder.)*
2. Add a **conditional breakpoint** on the `depth++` line that only fires when
   `n == 10`. (Right-click a breakpoint ▸ Conditions.) Run. What does `depth`
   say at that moment for `turnA(1000000)`? *(Answer: ~990,000 frames in — the
   stack is already over 100x too deep; it will overflow on the next F5.*
   *Careful: it may crash *before* reaching it — that itself is information.)*
3. In Locals, find which variable is *not* shrinking fast enough. State the fix
   in one sentence. *(Answer: `n` shrinks, but each call adds two more frames
   than the recursion "budget" allows; the fix is a base case that fires before
   the stack fills, or a loop.)*

## 10. What to build today (15 minutes)

Rename the folder's `main.cpp` to `main_crash.cpp` (keep it!), then write
`main.cpp` fresh: a **loop-based** version that counts 1,000,000 down to 0
without recursion. Run it — it finishes instantly and never crashes. You've now
seen the same job done by recursion (crash) and by a loop (works) — that
contrast is the whole lesson.

## 11. Where to go deeper

- Microsoft Learn: "Navigate code with the Visual Studio debugger" (breakpoints, stepping)
- Microsoft Learn: "View values in the debugger" (Locals/Watch/windows)
- LearnCpp ch 15.5 — The stack and the heap (the *why* behind what you saw today)