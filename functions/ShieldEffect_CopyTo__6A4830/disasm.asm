0x6A4830: push    esi
0x6A4831: push    edi
0x6A4832: mov     edi, [esp+8+arg_0]
0x6A4836: push    edi
0x6A4837: mov     esi, ecx
0x6A4839: call    ValueModifierEffect_CopyTo
0x6A483E: push    0; int
0x6A4840: push    offset ??_R0?AVShieldEffect@@@8; struct TypeDescriptor *
0x6A4845: push    offset ??_R0?AVActiveEffect@@@8; struct _s_RTTICompleteObjectLocator *
0x6A484A: push    0; int
0x6A484C: push    edi; void *
0x6A484D: call    OblivionDynamicCast
0x6A4852: add     esp, 14h
0x6A4855: test    eax, eax
0x6A4857: jz      short loc_6A485F
0x6A4859: mov     ecx, [esi+3Ch]
0x6A485C: mov     [eax+3Ch], ecx
0x6A485F: pop     edi
0x6A4860: pop     esi
0x6A4861: retn    4
