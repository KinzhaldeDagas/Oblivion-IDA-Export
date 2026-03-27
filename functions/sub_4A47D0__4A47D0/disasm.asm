0x4A47D0: push    esi
0x4A47D1: mov     esi, [esp+4+arg_0]
0x4A47D5: test    esi, esi
0x4A47D7: jz      short loc_4A47ED
0x4A47D9: mov     eax, [esi]
0x4A47DB: mov     edx, [eax+0Ch]
0x4A47DE: mov     ecx, esi
0x4A47E0: call    edx
0x4A47E2: cmp     eax, 4
0x4A47E5: jnz     short loc_4A47ED
0x4A47E7: mov     eax, esi
0x4A47E9: pop     esi
0x4A47EA: retn    4
0x4A47ED: xor     eax, eax
0x4A47EF: pop     esi
0x4A47F0: retn    4
