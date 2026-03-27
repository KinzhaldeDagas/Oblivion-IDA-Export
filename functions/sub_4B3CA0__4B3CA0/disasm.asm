0x4B3CA0: push    esi
0x4B3CA1: mov     esi, [esp+4+arg_4]
0x4B3CA5: test    esi, esi
0x4B3CA7: jz      short loc_4B3CCF
0x4B3CA9: mov     eax, [esi]
0x4B3CAB: mov     edx, [eax+190h]
0x4B3CB1: mov     ecx, esi
0x4B3CB3: call    edx
0x4B3CB5: test    al, al
0x4B3CB7: jz      short loc_4B3CCF
0x4B3CB9: mov     eax, [esi]
0x4B3CBB: mov     edx, [eax+380h]
0x4B3CC1: mov     ecx, esi
0x4B3CC3: call    edx
0x4B3CC5: test    eax, eax
0x4B3CC7: jz      short loc_4B3CCF
0x4B3CC9: xor     al, al
0x4B3CCB: pop     esi
0x4B3CCC: retn    14h
0x4B3CCF: push    edi
0x4B3CD0: mov     edi, [esp+8+arg_0]
0x4B3CD4: mov     ecx, edi; this
0x4B3CD6: call    TESObjectREFR_GetOwner
0x4B3CDB: test    eax, eax
0x4B3CDD: jz      short loc_4B3D20
0x4B3CDF: mov     ecx, edi; this
0x4B3CE1: call    TESObjectREFR_GetOwner
0x4B3CE6: cmp     eax, esi
0x4B3CE8: jz      short loc_4B3D20
0x4B3CEA: push    0; int
0x4B3CEC: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x4B3CF1: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x4B3CF6: push    0; int
0x4B3CF8: push    esi; void *
0x4B3CF9: call    OblivionDynamicCast
0x4B3CFE: mov     esi, eax
0x4B3D00: add     esp, 14h
0x4B3D03: test    esi, esi
0x4B3D05: jz      short loc_4B3D20
0x4B3D07: push    ebx
0x4B3D08: mov     ebx, [esi]
0x4B3D0A: push    0FFFFFFFFh
0x4B3D0C: mov     ecx, edi; this
0x4B3D0E: call    TESObjectREFR_GetOwner
0x4B3D13: push    eax
0x4B3D14: mov     eax, [ebx+248h]
0x4B3D1A: push    edi
0x4B3D1B: mov     ecx, esi
0x4B3D1D: call    eax
0x4B3D1F: pop     ebx
0x4B3D20: pop     edi
0x4B3D21: mov     al, 1
0x4B3D23: pop     esi
0x4B3D24: retn    14h
