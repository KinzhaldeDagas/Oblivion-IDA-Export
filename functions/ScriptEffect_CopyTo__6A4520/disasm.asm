0x6A4520: push    esi
0x6A4521: push    edi
0x6A4522: mov     edi, [esp+8+arg_0]
0x6A4526: push    edi
0x6A4527: mov     esi, ecx
0x6A4529: call    ActiveEffect_Base_CopyTo
0x6A452E: push    0; int
0x6A4530: push    offset ??_R0?AVScriptEffect@@@8; struct TypeDescriptor *
0x6A4535: push    offset ??_R0?AVActiveEffect@@@8; struct _s_RTTICompleteObjectLocator *
0x6A453A: push    0; int
0x6A453C: push    edi; void *
0x6A453D: call    OblivionDynamicCast
0x6A4542: add     esp, 14h
0x6A4545: test    eax, eax
0x6A4547: jz      short loc_6A4556
0x6A4549: mov     ecx, [esi+38h]
0x6A454C: mov     [eax+38h], ecx
0x6A454F: mov     dword ptr [eax+3Ch], 0
0x6A4556: pop     edi
0x6A4557: pop     esi
0x6A4558: retn    4
