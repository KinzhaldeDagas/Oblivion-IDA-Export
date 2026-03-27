0x675EF0: mov     eax, [esp+arg_0]
0x675EF4: cmp     eax, 6
0x675EF7: ja      short loc_675F30
0x675EF9: mov     ecx, [ecx+eax*4+28h]
0x675EFD: xor     eax, eax
0x675EFF: test    ecx, ecx
0x675F01: jz      short locret_675F32
0x675F03: push    esi
0x675F04: mov     esi, [esp+4+arg_4]
0x675F08: test    esi, esi
0x675F0A: jnz     short loc_675F15
0x675F0C: call    BSSimpleList_Count
0x675F11: pop     esi
0x675F12: retn    8
0x675F15: mov     edx, ecx
0x675F17: mov     ecx, [edx]
0x675F19: test    ecx, ecx
0x675F1B: jz      short loc_675F2C
0x675F1D: cmp     [ecx+0Ch], esi
0x675F20: jnz     short loc_675F25
0x675F22: add     eax, 1
0x675F25: mov     edx, [edx+4]
0x675F28: test    edx, edx
0x675F2A: jnz     short loc_675F17
0x675F2C: pop     esi
0x675F2D: retn    8
0x675F30: xor     eax, eax
0x675F32: retn    8
