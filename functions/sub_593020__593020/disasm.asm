0x593020: sub     esp, 8
0x593023: push    esi
0x593024: mov     esi, ecx
0x593026: call    sub_57D7F0
0x59302B: fstp    [esp+0Ch+var_8]
0x59302F: call    sub_57D7F0
0x593034: fmul    qword ptr ds:0A2FAA0h
0x59303A: fadd    dword ptr [esi+28h]
0x59303D: pop     esi
0x59303E: fsubr   [esp+8+var_8]
0x593041: add     esp, 8
0x593044: jmp     Double_To_SInt32
