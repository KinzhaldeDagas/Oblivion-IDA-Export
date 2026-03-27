0x4B9570: mov     eax, [esp+arg_0]
0x4B9574: push    esi
0x4B9575: push    0; int
0x4B9577: push    offset ??_R0?AVTESObjectMISC@@@8; struct TypeDescriptor *
0x4B957C: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4B9581: push    0; int
0x4B9583: push    eax; void *
0x4B9584: mov     esi, ecx
0x4B9586: call    OblivionDynamicCast
0x4B958B: add     esp, 14h
0x4B958E: test    eax, eax
0x4B9590: jnz     short loc_4B9598
0x4B9592: mov     al, 1
0x4B9594: pop     esi
0x4B9595: retn    4
0x4B9598: push    eax; a2
0x4B9599: mov     ecx, esi; this
0x4B959B: call    TESForm_CompareAllComponentsTo
0x4B95A0: test    al, al
0x4B95A2: setnz   al
0x4B95A5: pop     esi
0x4B95A6: retn    4
