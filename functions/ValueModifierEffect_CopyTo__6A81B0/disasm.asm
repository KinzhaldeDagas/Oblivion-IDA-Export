0x6A81B0: push    esi
0x6A81B1: push    edi
0x6A81B2: mov     edi, [esp+8+arg_0]
0x6A81B6: push    edi
0x6A81B7: mov     esi, ecx
0x6A81B9: call    ActiveEffect_Base_CopyTo
0x6A81BE: push    0; int
0x6A81C0: push    offset ??_R0?AVValueModifierEffect@@@8; struct TypeDescriptor *
0x6A81C5: push    offset ??_R0?AVActiveEffect@@@8; struct _s_RTTICompleteObjectLocator *
0x6A81CA: push    0; int
0x6A81CC: push    edi; void *
0x6A81CD: call    OblivionDynamicCast
0x6A81D2: add     esp, 14h
0x6A81D5: test    eax, eax
0x6A81D7: jz      short loc_6A81DF
0x6A81D9: mov     ecx, [esi+38h]
0x6A81DC: mov     [eax+38h], ecx
0x6A81DF: pop     edi
0x6A81E0: pop     esi
0x6A81E1: retn    4
