0x548020: fild    [esp+arg_4]
0x548024: fmul    dword ptr ds:0B37720h
0x54802A: jmp     Double_To_SInt32; Double_To_SInt32 consumes ST0 double and returns EAX. SSE path uses cvttsd2si, matching C/C++ truncation toward zero.
