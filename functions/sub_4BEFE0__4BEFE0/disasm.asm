0x4BEFE0: push    esi
0x4BEFE1: mov     esi, [esp+4+arg_0]
0x4BEFE5: test    esi, esi
0x4BEFE7: push    edi
0x4BEFE8: mov     edi, ecx
0x4BEFEA: jz      short loc_4BF01B
0x4BEFEC: lea     esp, [esp+0]
0x4BEFF0: cmp     esi, edi
0x4BEFF2: jz      short loc_4BF01B
0x4BEFF4: lea     ecx, [edi+20h]
0x4BEFF7: mov     eax, ecx
0x4BEFF9: test    eax, eax
0x4BEFFB: jz      short loc_4BF00B
0x4BEFFD: lea     ecx, [ecx+0]
0x4BF000: cmp     [eax], esi
0x4BF002: jz      short loc_4BF01B
0x4BF004: mov     eax, [eax+4]
0x4BF007: test    eax, eax
0x4BF009: jnz     short loc_4BF000
0x4BF00B: push    esi
0x4BF00C: call    BSSimpleList_PushFront
0x4BF011: mov     eax, edi
0x4BF013: mov     edi, esi
0x4BF015: mov     esi, eax
0x4BF017: test    esi, esi
0x4BF019: jnz     short loc_4BEFF0
0x4BF01B: pop     edi
0x4BF01C: pop     esi
0x4BF01D: retn    4
