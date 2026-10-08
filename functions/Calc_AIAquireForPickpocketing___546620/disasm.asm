0x546620: fild    [esp+arg_4]; RadiantAI 2026-07-12: acquire pickpocket score. Callers pass luck-modified Sneak as arg1 and raw Responsibility AV 0x24 as arg2. Defaults base=0, mult=-1 => score = luckModifiedSneak - responsibility.
0x546624: fmul    dword ptr ds:0B368C8h
0x54662A: fadd    dword ptr ds:0B368C0h
0x546630: fiadd   [esp+arg_0]
0x546634: jmp     Double_To_SInt32; Double_To_SInt32 consumes ST0 double and returns EAX. SSE path uses cvttsd2si, matching C/C++ truncation toward zero.
