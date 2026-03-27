0x4297B0: mov     eax, [esp+arg_0]
0x4297B4: push    esi
0x4297B5: push    0; int
0x4297B7: push    offset ??_R0?AVExtraPoison@@@8; struct TypeDescriptor *
0x4297BC: push    offset ??_R0?AVBSExtraData@@@8; struct _s_RTTICompleteObjectLocator *
0x4297C1: push    0; int
0x4297C3: push    eax; void *
0x4297C4: mov     esi, ecx
0x4297C6: call    OblivionDynamicCast
0x4297CB: add     esp, 14h
0x4297CE: test    eax, eax
0x4297D0: jnz     short loc_4297D8
0x4297D2: mov     al, 1
0x4297D4: pop     esi
0x4297D5: retn    4
0x4297D8: mov     ecx, [eax+0Ch]
0x4297DB: cmp     ecx, [esi+0Ch]
0x4297DE: pop     esi
0x4297DF: setnz   al
0x4297E2: retn    4
