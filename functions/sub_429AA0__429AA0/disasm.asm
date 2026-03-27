0x429AA0: push    ebx
0x429AA1: mov     ebx, [esp+4+arg_0]
0x429AA5: push    esi
0x429AA6: push    edi
0x429AA7: push    0; int
0x429AA9: push    offset ??_R0?AVExtraLock@@@8; struct TypeDescriptor *
0x429AAE: push    offset ??_R0?AVBSExtraData@@@8; struct _s_RTTICompleteObjectLocator *
0x429AB3: push    0; int
0x429AB5: push    ebx; void *
0x429AB6: mov     edi, ecx
0x429AB8: call    OblivionDynamicCast
0x429ABD: mov     esi, eax
0x429ABF: add     esp, 14h
0x429AC2: test    esi, esi
0x429AC4: jnz     short loc_429ACE
0x429AC6: pop     edi
0x429AC7: pop     esi
0x429AC8: mov     al, 1
0x429ACA: pop     ebx
0x429ACB: retn    4
0x429ACE: push    ebx
0x429ACF: mov     ecx, edi
0x429AD1: call    BSExtraData_CompareTo
0x429AD6: test    al, al
0x429AD8: jnz     short loc_429AC6
0x429ADA: mov     eax, [edi+0Ch]
0x429ADD: mov     edx, [esi+0Ch]
0x429AE0: mov     cl, [eax+8]
0x429AE3: cmp     cl, [edx+8]
0x429AE6: jnz     short loc_429AC6
0x429AE8: mov     ecx, [eax+4]
0x429AEB: cmp     ecx, [edx+4]
0x429AEE: jnz     short loc_429AC6
0x429AF0: movsx   eax, byte ptr [eax]
0x429AF3: push    eax
0x429AF4: call    GetLockLevel
0x429AF9: movsx   ecx, byte ptr [edx]
0x429AFC: push    ecx
0x429AFD: mov     esi, eax
0x429AFF: call    GetLockLevel
0x429B04: add     esp, 8
0x429B07: pop     edi
0x429B08: cmp     esi, eax
0x429B0A: pop     esi
0x429B0B: setnz   al
0x429B0E: pop     ebx
0x429B0F: retn    4
