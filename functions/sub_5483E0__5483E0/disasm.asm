0x5483E0: fld     [esp+arg_0]
0x5483E4: fsub    [esp+arg_4]
0x5483E8: fmul    dword ptr ds:0B379D0h
0x5483EE: jmp     Double_To_SInt32; Double_To_SInt32 consumes ST0 double and returns EAX. SSE path uses cvttsd2si, matching C/C++ truncation toward zero.
