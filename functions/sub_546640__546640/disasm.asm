0x546640: fild    [esp+arg_4]; RadiantAI 2026-07-12: acquire kill score. Callers pass shouldActorFight result as arg1 and raw Responsibility AV 0x24 as arg2. Defaults base=50, mult=-1 => score = fightScore + 50 - responsibility.
0x546644: fmul    dword ptr ds:0B368D8h
0x54664A: fadd    dword ptr ds:0B368D0h
0x546650: fiadd   [esp+arg_0]
0x546654: jmp     Double_To_SInt32; Double_To_SInt32 consumes ST0 double and returns EAX. SSE path uses cvttsd2si, matching C/C++ truncation toward zero.
