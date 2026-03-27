0x6A4C80: push    esi
0x6A4C81: push    edi
0x6A4C82: mov     edi, [esp+8+a1]
0x6A4C86: test    edi, edi
0x6A4C88: jz      short loc_6A4CA7
0x6A4C8A: mov     ecx, edi; this
0x6A4C8C: call    MagicTarget_GetParentActor
0x6A4C91: mov     esi, eax
0x6A4C93: test    esi, esi
0x6A4C95: jz      short loc_6A4CA9
0x6A4C97: mov     ecx, esi; this
0x6A4C99: call    Actor_IsCreature
0x6A4C9E: test    al, al
0x6A4CA0: jz      short loc_6A4CA9
0x6A4CA2: add     edi, -68h
0x6A4CA5: jmp     short loc_6A4CAB
0x6A4CA7: xor     esi, esi
0x6A4CA9: xor     edi, edi
0x6A4CAB: test    esi, esi
0x6A4CAD: jz      short SoulTrapEffect_ValidTarget___Return_0
0x6A4CAF: mov     eax, [esi]
0x6A4CB1: mov     edx, [eax+198h]
0x6A4CB7: push    0
0x6A4CB9: mov     ecx, esi
0x6A4CBB: call    edx
0x6A4CBD: test    al, al
0x6A4CBF: jnz     short SoulTrapEffect_ValidTarget___Return_0
0x6A4CC1: mov     eax, [esi]
0x6A4CC3: mov     edx, [eax+1F8h]
0x6A4CC9: mov     ecx, esi
0x6A4CCB: call    edx
0x6A4CCD: test    al, al
0x6A4CCF: jnz     short SoulTrapEffect_ValidTarget___Return_0
0x6A4CD1: mov     ecx, esi
0x6A4CD3: call    Actor__IsEssential
0x6A4CD8: test    al, al
0x6A4CDA: jnz     short SoulTrapEffect_ValidTarget___Return_0
0x6A4CDC: mov     ecx, esi; this
0x6A4CDE: call    Actor_IsNPC
0x6A4CE3: test    al, al
0x6A4CE5: jnz     short SoulTrapEffect_ValidTarget___Return_1
0x6A4CE7: test    edi, edi
0x6A4CE9: jz      short SoulTrapEffect_ValidTarget___Return_0
0x6A4CEB: mov     ecx, edi; this
0x6A4CED: call    Actor__GetSoulLevel
0x6A4CF2: test    eax, eax
0x6A4CF4: jle     short SoulTrapEffect_ValidTarget___Return_0
0x6A4CF6: pop     edi
0x6A4CF7: mov     al, 1
0x6A4CF9: pop     esi
0x6A4CFA: retn    4
0x6A4CFD: pop     edi
0x6A4CFE: xor     al, al
0x6A4D00: pop     esi
0x6A4D01: retn    4
