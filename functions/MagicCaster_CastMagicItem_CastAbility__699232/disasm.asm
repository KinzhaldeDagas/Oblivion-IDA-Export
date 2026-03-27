0x699232: mov     eax, [esp+arg_14]
0x699236: mov     ebx, [esi]
0x699238: push    eax
0x699239: push    0; int
0x69923B: push    offset ??_R0?AVSpellItem@@@8; struct TypeDescriptor *
0x699240: push    offset ??_R0?AVMagicItem@@@8; struct _s_RTTICompleteObjectLocator *
0x699245: push    0; int
0x699247: push    edi; void *
0x699248: call    OblivionDynamicCast
0x69924D: mov     edx, [ebx]
0x69924F: add     esp, 14h
0x699252: push    eax
0x699253: mov     ecx, esi
0x699255: call    edx
0x699257: pop     edi
0x699258: pop     esi
0x699259: mov     al, 1
0x69925B: pop     ebx
0x69925C: retn    0Ch
