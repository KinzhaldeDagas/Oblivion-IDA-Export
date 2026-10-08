0x5952D0: push    esi
0x5952D1: mov     esi, ecx
0x5952D3: call    UI_GetVirtualScreenWidth; Returns virtual UI width: 1280 for portrait/square, otherwise aspect*960. Layout coordinates are independent of output pixel resolution.
0x5952D8: fmul    qword ptr ds:0A2FAA0h
0x5952DE: fadd    dword ptr [esi+20h]
0x5952E1: pop     esi
0x5952E2: jmp     Double_To_SInt32; Double_To_SInt32 consumes ST0 double and returns EAX. SSE path uses cvttsd2si, matching C/C++ truncation toward zero.
