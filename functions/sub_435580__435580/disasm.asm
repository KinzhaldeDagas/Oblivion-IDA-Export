0x435580: push    esi
0x435581: mov     esi, [esp+4+arg_0]
0x435585: push    edi
0x435586: push    0; int
0x435588: push    offset ??_R0?AVTESModel@@@8; struct TypeDescriptor *
0x43558D: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x435592: push    0; int
0x435594: push    esi; void *
0x435595: call    OblivionDynamicCast
0x43559A: mov     edi, eax
0x43559C: add     esp, 14h
0x43559F: test    edi, edi
0x4355A1: jnz     short loc_4355ED
0x4355A3: push    eax; int
0x4355A4: push    offset ??_R0?AVTESBipedModelForm@@@8; struct TypeDescriptor *
0x4355A9: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x4355AE: push    eax; int
0x4355AF: push    esi; void *
0x4355B0: call    OblivionDynamicCast
0x4355B5: mov     esi, eax
0x4355B7: add     esp, 14h
0x4355BA: test    esi, esi
0x4355BC: jz      short loc_4355EB
0x4355BE: mov     ecx, [esp+8+arg_4]; this
0x4355C2: test    ecx, ecx
0x4355C4: jz      short loc_4355DE
0x4355C6: call    TESObjectREFR_GetOwner
0x4355CB: test    eax, eax
0x4355CD: jz      short loc_4355DE
0x4355CF: cmp     byte ptr [eax+4], 23h ; '#'
0x4355D3: jnz     short loc_4355DE
0x4355D5: mov     ecx, eax
0x4355D7: call    TESActorBase_IsFemale
0x4355DC: mov     edi, eax
0x4355DE: push    edi
0x4355DF: mov     ecx, esi
0x4355E1: call    TESBipedModelForm_GetWorldModel
0x4355E6: pop     edi
0x4355E7: pop     esi
0x4355E8: retn    8
0x4355EB: mov     eax, edi
0x4355ED: pop     edi
0x4355EE: pop     esi
0x4355EF: retn    8
