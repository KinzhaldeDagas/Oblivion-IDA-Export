0x546600: fild    [esp+arg_4]; RadiantAI 2026-07-12: acquire steal score. Callers pass luck-modified Sneak as arg1 and raw Responsibility AV 0x24 as arg2. Defaults base=0, mult=-1 => score = luckModifiedSneak - responsibility.
0x546604: fmul    dword ptr ds:0B368B8h
0x54660A: fadd    dword ptr ds:0B368B0h
0x546610: fiadd   [esp+arg_0]
0x546614: jmp     Double_To_SInt32; Double_To_SInt32 consumes ST0 double and returns EAX. SSE path uses cvttsd2si, matching C/C++ truncation toward zero.
