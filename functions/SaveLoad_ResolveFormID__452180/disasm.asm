0x452180: mov     edx, [ecx+4Ch]
0x452183: push    esi
0x452184: mov     esi, [esp+4+arg_0]
0x452188: mov     eax, esi
0x45218A: shr     eax, 18h
0x45218D: test    edx, edx
0x45218F: jz      short SaveLoad_ResolveFormID___Return
0x452191: cmp     al, 0FFh
0x452193: jz      short SaveLoad_ResolveFormID___Return
0x452195: cmp     al, [ecx+48h]
0x452198: jnb     short SaveLoad_ResolveFormID___Return_0
0x45219A: movzx   eax, al
0x45219D: mov     al, [eax+edx]
0x4521A0: cmp     al, 0FFh
0x4521A2: jz      short SaveLoad_ResolveFormID___Return_0
0x4521A4: movzx   eax, al
0x4521A7: and     esi, 0FFFFFFh
0x4521AD: shl     eax, 18h
0x4521B0: add     eax, esi
0x4521B2: pop     esi
0x4521B3: retn    4
0x4521B6: xor     eax, eax
0x4521B8: pop     esi
0x4521B9: retn    4
0x4521BC: mov     eax, esi
0x4521BE: pop     esi
0x4521BF: retn    4
