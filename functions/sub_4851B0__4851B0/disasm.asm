0x4851B0: push    ebx
0x4851B1: mov     ebx, ecx
0x4851B3: mov     eax, [ebx]
0x4851B5: test    eax, eax
0x4851B7: push    esi
0x4851B8: push    edi
0x4851B9: jz      short loc_4851D7
0x4851BB: mov     esi, [eax]
0x4851BD: test    esi, esi
0x4851BF: jz      short loc_4851D7
0x4851C1: mov     ecx, esi
0x4851C3: call    ExtraDataList_GetOwner
0x4851C8: test    eax, eax
0x4851CA: jz      short loc_4851D7
0x4851CC: mov     ecx, esi
0x4851CE: call    ExtraDataList_GetOwner
0x4851D3: mov     esi, eax
0x4851D5: jmp     short loc_4851D9
0x4851D7: xor     esi, esi
0x4851D9: mov     eax, [ebx+8]
0x4851DC: push    0; int
0x4851DE: push    offset ??_R0?AVTESBipedModelForm@@@8; struct TypeDescriptor *
0x4851E3: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x4851E8: push    0; int
0x4851EA: push    eax; void *
0x4851EB: call    OblivionDynamicCast
0x4851F0: add     esp, 14h
0x4851F3: test    esi, esi
0x4851F5: mov     edi, eax
0x4851F7: jz      short loc_485230
0x4851F9: test    edi, edi
0x4851FB: jz      short loc_485230
0x4851FD: push    0; int
0x4851FF: push    offset ??_R0?AVTESNPC@@@8; struct TypeDescriptor *
0x485204: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x485209: push    0; int
0x48520B: push    esi; void *
0x48520C: call    OblivionDynamicCast
0x485211: add     esp, 14h
0x485214: test    eax, eax
0x485216: jz      short loc_485230
0x485218: mov     ecx, eax
0x48521A: call    TESActorBase_IsFemale
0x48521F: push    eax
0x485220: mov     ecx, edi
0x485222: call    TESBipedModelForm_GetBipedIconPath
0x485227: test    eax, eax
0x485229: jz      short loc_485230
0x48522B: cmp     byte ptr [eax], 0
0x48522E: jnz     short loc_485241
0x485230: mov     ecx, [esp+0Ch+arg_0]
0x485234: mov     edx, [ebx+8]
0x485237: push    ecx
0x485238: push    edx
0x485239: call    sub_4702D0
0x48523E: add     esp, 8
0x485241: test    eax, eax
0x485243: pop     edi
0x485244: pop     esi
0x485245: pop     ebx
0x485246: jz      short loc_48524D
0x485248: cmp     byte ptr [eax], 0
0x48524B: jnz     short locret_48524F
0x48524D: xor     eax, eax
0x48524F: retn    4
