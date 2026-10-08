0x593020: sub     esp, 8
0x593023: push    esi
0x593024: mov     esi, ecx
0x593026: call    UI_GetVirtualScreenHeight; Returns virtual UI height: 960 for landscape/square, otherwise (height/width)*1280.
0x59302B: fstp    [esp+0Ch+var_8]
0x59302F: call    UI_GetVirtualScreenHeight; Returns virtual UI height: 960 for landscape/square, otherwise (height/width)*1280.
0x593034: fmul    qword ptr ds:0A2FAA0h
0x59303A: fadd    dword ptr [esi+28h]
0x59303D: pop     esi
0x59303E: fsubr   [esp+8+var_8]
0x593041: add     esp, 8
0x593044: jmp     Double_To_SInt32; Double_To_SInt32 consumes ST0 double and returns EAX. SSE path uses cvttsd2si, matching C/C++ truncation toward zero.
