0x5483C0: fld     [esp+arg_0]
0x5483C4: fld     st
0x5483C6: fsub    [esp+arg_4]
0x5483CA: fld     [esp+arg_8]
0x5483CE: fdivp   st(2), st
0x5483D0: fdivrp  st(1), st
0x5483D2: fmul    dword ptr ds:0B379B0h
0x5483D8: jmp     Double_To_SInt32; Double_To_SInt32 consumes ST0 double and returns EAX. SSE path uses cvttsd2si, matching C/C++ truncation toward zero.
