0x6945C0: push    esi
0x6945C1: push    edi
0x6945C2: mov     edi, [esp+8+arg_0]
0x6945C6: push    edi
0x6945C7: mov     esi, ecx
0x6945C9: call    ActiveEffect_Base_CopyTo
0x6945CE: push    0; int
0x6945D0: push    offset ??_R0?AVLightEffect@@@8; struct TypeDescriptor *
0x6945D5: push    offset ??_R0?AVActiveEffect@@@8; struct _s_RTTICompleteObjectLocator *
0x6945DA: push    0; int
0x6945DC: push    edi; void *
0x6945DD: call    OblivionDynamicCast
0x6945E2: add     esp, 14h
0x6945E5: test    eax, eax
0x6945E7: jz      short loc_6945F5
0x6945E9: add     esi, 38h ; '8'
0x6945EC: push    esi
0x6945ED: lea     ecx, [eax+38h]
0x6945F0: call    sub_55E2A0
0x6945F5: pop     edi
0x6945F6: pop     esi
0x6945F7: retn    4
