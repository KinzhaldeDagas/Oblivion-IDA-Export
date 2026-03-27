0x4E89F0: push    ebx
0x4E89F1: push    esi
0x4E89F2: mov     esi, [esp+8+arg_0]
0x4E89F6: movzx   eax, byte ptr [esi+4]
0x4E89FA: push    eax
0x4E89FB: mov     ebx, ecx
0x4E89FD: call    sub_4EF2B0
0x4E8A02: add     esp, 4
0x4E8A05: test    al, al
0x4E8A07: jz      loc_4E8AD1
0x4E8A0D: movzx   eax, byte ptr [esi+4]
0x4E8A11: push    edi
0x4E8A12: xor     edi, edi
0x4E8A14: sub     eax, 30h ; '0'
0x4E8A17: push    edi; int
0x4E8A18: jz      short loc_4E8A8D
0x4E8A1A: sub     eax, 7
0x4E8A1D: jz      short loc_4E8A64
0x4E8A1F: sub     eax, 1
0x4E8A22: jz      short loc_4E8A46
0x4E8A24: push    offset ??_R0?AVTESChildCell@@@8; struct TypeDescriptor *
0x4E8A29: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4E8A2E: push    edi; int
0x4E8A2F: push    esi; void *
0x4E8A30: call    OblivionDynamicCast
0x4E8A35: add     esp, 14h
0x4E8A38: test    eax, eax
0x4E8A3A: jz      short loc_4E8AAF
0x4E8A3C: mov     edx, [eax]
0x4E8A3E: mov     ecx, eax
0x4E8A40: mov     eax, [edx]
0x4E8A42: call    eax
0x4E8A44: jmp     short loc_4E8AA2
0x4E8A46: push    offset ??_R0?AVTESRoad@@@8; struct TypeDescriptor *
0x4E8A4B: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4E8A50: push    0; int
0x4E8A52: push    esi; void *
0x4E8A53: call    OblivionDynamicCast
0x4E8A58: add     esp, 14h
0x4E8A5B: test    eax, eax
0x4E8A5D: jz      short loc_4E8AAF
0x4E8A5F: mov     edi, [eax+2Ch]
0x4E8A62: jmp     short loc_4E8AAF
0x4E8A64: push    offset ??_R0?AVTESTerrainLODQuadRoot@@@8; struct TypeDescriptor *
0x4E8A69: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4E8A6E: push    0; int
0x4E8A70: push    esi; void *
0x4E8A71: call    OblivionDynamicCast
0x4E8A76: add     esp, 14h
0x4E8A79: test    eax, eax
0x4E8A7B: jz      short loc_4E8AAF
0x4E8A7D: mov     eax, [eax+4]
0x4E8A80: test    eax, eax
0x4E8A82: jz      short loc_4E8A89
0x4E8A84: mov     eax, [eax+10h]
0x4E8A87: jmp     short loc_4E8AAD
0x4E8A89: xor     eax, eax
0x4E8A8B: jmp     short loc_4E8AAD
0x4E8A8D: push    offset ??_R0?AVTESObjectCELL@@@8; struct TypeDescriptor *
0x4E8A92: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4E8A97: push    0; int
0x4E8A99: push    esi; void *
0x4E8A9A: call    OblivionDynamicCast
0x4E8A9F: add     esp, 14h
0x4E8AA2: test    eax, eax
0x4E8AA4: jz      short loc_4E8AAF
0x4E8AA6: mov     ecx, eax; this
0x4E8AA8: call    TESObjectCELL_GetWorldSpace
0x4E8AAD: mov     edi, eax
0x4E8AAF: mov     ecx, [ebx+2Ch]
0x4E8AB2: cmp     edi, ecx
0x4E8AB4: jnz     short loc_4E8AC3
0x4E8AB6: cmp     byte ptr [esi+4], 37h ; '7'
0x4E8ABA: pop     edi
0x4E8ABB: pop     esi
0x4E8ABC: setnz   al
0x4E8ABF: pop     ebx
0x4E8AC0: retn    4
0x4E8AC3: mov     edx, [ecx]
0x4E8AC5: mov     eax, [edx+34h]
0x4E8AC8: push    edi
0x4E8AC9: call    eax
0x4E8ACB: pop     edi
0x4E8ACC: pop     esi
0x4E8ACD: pop     ebx
0x4E8ACE: retn    4
0x4E8AD1: mov     ecx, [ebx+2Ch]
0x4E8AD4: mov     edx, [ecx]
0x4E8AD6: mov     eax, [edx+34h]
0x4E8AD9: push    esi
0x4E8ADA: call    eax
0x4E8ADC: pop     esi
0x4E8ADD: pop     ebx
0x4E8ADE: retn    4
