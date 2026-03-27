0x459A10: call    sub_4599B0
0x459A15: call    sub_578FE0
0x459A1A: cmp     eax, 3
0x459A1D: jnz     short loc_459A29
0x459A1F: call    GetOpenedMenuCode
0x459A24: cmp     eax, 3
0x459A27: jz      short loc_459A33
0x459A29: call    sub_6B94E0
0x459A2E: call    CloseAllMenus
0x459A33: push    esi
0x459A34: call    sub_5791A0
0x459A39: call    sub_5791E0
0x459A3E: call    sub_579220
0x459A43: mov     esi, ds:0A280D0h
0x459A49: call    esi ; GetTickCount
0x459A4B: mov     ds:0B33B08h, eax
0x459A50: call    esi ; GetTickCount
0x459A52: mov     ecx, ds:0B33B08h
0x459A58: add     ecx, 0BB8h
0x459A5E: cmp     eax, ecx
0x459A60: pop     esi
0x459A61: jbe     short locret_459A8E
0x459A63: call    sub_57BAC0
0x459A68: test    al, al
0x459A6A: jnz     short loc_459A7E
0x459A6C: mov     ecx, ds:0B333A0h
0x459A72: push    0
0x459A74: push    0
0x459A76: push    1
0x459A78: call    sub_440AF0
0x459A7D: retn
0x459A7E: fldz
0x459A80: push    ecx
0x459A81: fstp    [esp+4+var_4]; float
0x459A84: push    0; int
0x459A86: call    sub_57B950
0x459A8B: add     esp, 8
0x459A8E: retn
