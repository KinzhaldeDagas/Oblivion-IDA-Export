0x9FBC50: call    sub_57D330
0x9FBC55: fiadd   dword_B1399C
0x9FBC5B: call    Double_To_SInt32; Double_To_SInt32 consumes ST0 double and returns EAX. SSE path uses cvttsd2si, matching C/C++ truncation toward zero.
0x9FBC60: mov     dword ptr unk_B3A700, eax
0x9FBC65: retn
