0x700A90: push    esi
0x700A91: mov     esi, [ecx+0Ch]
0x700A94: test    esi, esi
0x700A96: jz      short loc_700AB8
0x700A98: jmp     short loc_700AA0
0x700A9A: align 10h
0x700AA0: mov     eax, [esi]
0x700AA2: fld     [esp+4+arg_0]
0x700AA6: mov     edx, [eax+54h]
0x700AA9: push    ecx
0x700AAA: mov     ecx, esi
0x700AAC: fstp    [esp+8+var_8]
0x700AAF: call    edx
0x700AB1: mov     esi, [esi+34h]
0x700AB4: test    esi, esi
0x700AB6: jnz     short loc_700AA0
0x700AB8: pop     esi
0x700AB9: retn    4
