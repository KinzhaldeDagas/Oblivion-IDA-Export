0x4A47A0: push    esi
0x4A47A1: mov     esi, [esp+4+arg_0]
0x4A47A5: test    esi, esi
0x4A47A7: jz      short loc_4A47BD
0x4A47A9: mov     eax, [esi]
0x4A47AB: mov     edx, [eax+0Ch]
0x4A47AE: mov     ecx, esi
0x4A47B0: call    edx
0x4A47B2: cmp     eax, 3
0x4A47B5: jnz     short loc_4A47BD
0x4A47B7: mov     eax, esi
0x4A47B9: pop     esi
0x4A47BA: retn    4
0x4A47BD: xor     eax, eax
0x4A47BF: pop     esi
0x4A47C0: retn    4
