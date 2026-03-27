0x676E69: jz      short loc_676ED6
0x676E6B: mov     edi, [esi]
0x676E6D: push    0; int
0x676E6F: push    offset ??_R0?AVArrowProjectile@@@8; struct TypeDescriptor *
0x676E74: push    offset ??_R0?AVMobileObject@@@8; struct _s_RTTICompleteObjectLocator *
0x676E79: push    0; int
0x676E7B: push    edi; void *
0x676E7C: call    OblivionDynamicCast
0x676E81: add     esp, 14h
0x676E84: test    eax, eax
0x676E86: jz      short loc_676E91
0x676E88: mov     ecx, eax
0x676E8A: call    sub_6092A0
0x676E8F: jmp     short loc_676EB8
0x676E91: push    0; int
0x676E93: push    offset ??_R0?AVMagicProjectile@@@8; struct TypeDescriptor *
0x676E98: push    offset ??_R0?AVMobileObject@@@8; struct _s_RTTICompleteObjectLocator *
0x676E9D: push    0; int
0x676E9F: push    edi; void *
0x676EA0: call    OblivionDynamicCast
0x676EA5: add     esp, 14h
0x676EA8: test    eax, eax
0x676EAA: jz      short loc_676ECD
0x676EAC: mov     edx, [eax]
0x676EAE: mov     ecx, eax
0x676EB0: mov     eax, [edx+220h]
0x676EB6: call    eax
0x676EB8: test    al, al
0x676EBA: jz      short loc_676ECD
0x676EBC: push    edi
0x676EBD: mov     ecx, ebp
0x676EBF: call    BSSimpleList_Remove
0x676EC4: cmp     esi, ebx
0x676EC6: jz      short loc_676ED2
0x676EC8: mov     esi, [ebx+4]
0x676ECB: jmp     short loc_676ED2
0x676ECD: mov     ebx, esi
0x676ECF: mov     esi, [esi+4]
0x676ED2: test    esi, esi
0x676ED4: jnz     short loc_676E60
0x676ED6: pop     edi
0x676ED7: pop     esi
0x676ED8: pop     ebx
0x676ED9: pop     ebp
0x676EDA: retn
