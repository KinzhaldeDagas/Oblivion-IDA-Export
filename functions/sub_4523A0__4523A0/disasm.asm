0x4523A0: call    dword ptr ds:0A280D0h
0x4523A6: mov     ecx, ds:0B33B08h
0x4523AC: add     ecx, 0BB8h
0x4523B2: cmp     eax, ecx
0x4523B4: jbe     short locret_4523E8
0x4523B6: call    sub_57BAC0
0x4523BB: test    al, al
0x4523BD: jnz     short loc_4523D3
0x4523BF: mov     ecx, ds:0B333A0h
0x4523C5: push    0
0x4523C7: push    0
0x4523C9: push    1
0x4523CB: call    sub_440AF0
0x4523D0: retn    8
0x4523D3: fld     [esp+arg_4]
0x4523D7: mov     edx, [esp+arg_0]
0x4523DB: push    ecx
0x4523DC: fstp    [esp+4+var_4]; float
0x4523DF: push    edx; int
0x4523E0: call    sub_57B950
0x4523E5: add     esp, 8
0x4523E8: retn    8
