0x6EF2D0: mov     eax, [esp+arg_0]
0x6EF2D4: mov     ecx, [esp+arg_4]
0x6EF2D8: cmp     eax, ecx
0x6EF2DA: jz      short locret_6EF2ED
0x6EF2DC: push    esi
0x6EF2DD: mov     esi, [esp+4+arg_8]
0x6EF2E1: mov     dl, [esi]
0x6EF2E3: mov     [eax], dl
0x6EF2E5: add     eax, 1
0x6EF2E8: cmp     eax, ecx
0x6EF2EA: jnz     short loc_6EF2E1
0x6EF2EC: pop     esi
0x6EF2ED: retn
