0x4B0070: mov     eax, [esp+arg_0]
0x4B0074: push    esi
0x4B0075: push    0; int
0x4B0077: push    offset ??_R0?AVTESLevItem@@@8; struct TypeDescriptor *
0x4B007C: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4B0081: push    0; int
0x4B0083: push    eax; void *
0x4B0084: mov     esi, ecx
0x4B0086: call    OblivionDynamicCast
0x4B008B: add     esp, 14h
0x4B008E: test    eax, eax
0x4B0090: jnz     short loc_4B0098
0x4B0092: mov     al, 1
0x4B0094: pop     esi
0x4B0095: retn    4
0x4B0098: push    eax; a2
0x4B0099: mov     ecx, esi; this
0x4B009B: call    TESForm_CompareAllComponentsTo
0x4B00A0: test    al, al
0x4B00A2: setnz   al
0x4B00A5: pop     esi
0x4B00A6: retn    4
