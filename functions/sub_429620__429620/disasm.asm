0x429620: mov     eax, [esp+arg_0]
0x429624: push    esi
0x429625: push    0; int
0x429627: push    offset ??_R0?AVExtraEnableStateParent@@@8; struct TypeDescriptor *
0x42962C: push    offset ??_R0?AVBSExtraData@@@8; struct _s_RTTICompleteObjectLocator *
0x429631: push    0; int
0x429633: push    eax; void *
0x429634: mov     esi, ecx
0x429636: call    OblivionDynamicCast
0x42963B: add     esp, 14h
0x42963E: test    eax, eax
0x429640: jnz     short loc_429648
0x429642: mov     al, 1
0x429644: pop     esi
0x429645: retn    4
0x429648: mov     ecx, [eax+0Ch]
0x42964B: cmp     ecx, [esi+0Ch]
0x42964E: jnz     short loc_429642
0x429650: mov     dl, [eax+10h]
0x429653: cmp     dl, [esi+10h]
0x429656: pop     esi
0x429657: setnz   al
0x42965A: retn    4
