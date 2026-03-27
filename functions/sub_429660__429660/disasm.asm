0x429660: mov     eax, [esp+arg_0]
0x429664: push    esi
0x429665: push    0; int
0x429667: push    offset ??_R0?AVExtraRandomTeleportMarker@@@8; struct TypeDescriptor *
0x42966C: push    offset ??_R0?AVBSExtraData@@@8; struct _s_RTTICompleteObjectLocator *
0x429671: push    0; int
0x429673: push    eax; void *
0x429674: mov     esi, ecx
0x429676: call    OblivionDynamicCast
0x42967B: add     esp, 14h
0x42967E: test    eax, eax
0x429680: jnz     short loc_429688
0x429682: mov     al, 1
0x429684: pop     esi
0x429685: retn    4
0x429688: mov     ecx, [eax+0Ch]
0x42968B: cmp     ecx, [esi+0Ch]
0x42968E: pop     esi
0x42968F: setnz   al
0x429692: retn    4
