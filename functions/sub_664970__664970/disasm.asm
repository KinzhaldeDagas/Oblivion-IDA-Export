0x664970: push    ebx
0x664971: push    esi
0x664972: push    edi
0x664973: mov     edi, ecx
0x664975: mov     eax, [edi+5B4h]
0x66497B: xor     ebx, ebx
0x66497D: xor     esi, esi
0x66497F: cmp     eax, ebx
0x664981: jnz     short loc_6649D7
0x664983: push    8; Size
0x664985: call    FormHeapAlloc
0x66498A: add     esp, 4
0x66498D: cmp     eax, ebx
0x66498F: jz      short loc_664998
0x664991: mov     [eax], ebx
0x664993: mov     [eax+4], ebx
0x664996: jmp     short loc_66499A
0x664998: xor     eax, eax
0x66499A: push    8; Size
0x66499C: mov     [edi+5B4h], eax
0x6649A2: call    FormHeapAlloc
0x6649A7: add     esp, 4
0x6649AA: cmp     eax, ebx
0x6649AC: jz      short loc_6649C5
0x6649AE: xor     ecx, ecx
0x6649B0: mov     [eax], ecx
0x6649B2: mov     [eax+4], ecx
0x6649B5: mov     ecx, [edi+5B4h]
0x6649BB: push    eax
0x6649BC: mov     esi, eax
0x6649BE: call    BSSimpleList_PushFront
0x6649C3: jmp     short loc_6649EA
0x6649C5: mov     ecx, [edi+5B4h]
0x6649CB: xor     eax, eax
0x6649CD: push    eax
0x6649CE: mov     esi, eax
0x6649D0: call    BSSimpleList_PushFront
0x6649D5: jmp     short loc_6649EA
0x6649D7: mov     ecx, [eax+4]
0x6649DA: cmp     ecx, ebx
0x6649DC: jnz     short loc_6649E2
0x6649DE: cmp     [eax], ebx
0x6649E0: jz      short loc_6649EA
0x6649E2: mov     esi, [eax]
0x6649E4: mov     eax, ecx
0x6649E6: cmp     eax, ebx
0x6649E8: jnz     short loc_6649D7
0x6649EA: cmp     esi, ebx
0x6649EC: jz      short loc_664A10
0x6649EE: mov     ecx, [esp+0Ch+arg_0]
0x6649F2: xor     eax, eax
0x6649F4: cmp     ecx, 7
0x6649F7: ja      short loc_664A12
0x6649F9: push    ecx
0x6649FA: push    ebx
0x6649FB: call    ActorValue_GetGroupOffsetFromAV
0x664A00: add     esp, 8
0x664A03: movsx   eax, al
0x664A06: movsx   eax, byte ptr [eax+esi]
0x664A0A: pop     edi
0x664A0B: pop     esi
0x664A0C: pop     ebx
0x664A0D: retn    4
0x664A10: mov     eax, ebx
0x664A12: pop     edi
0x664A13: pop     esi
0x664A14: pop     ebx
0x664A15: retn    4
