0x51FE30: mov     eax, [esp+arg_0]
0x51FE34: push    esi
0x51FE35: push    edi
0x51FE36: push    0; int
0x51FE38: push    offset ??_R0?AVTESHair@@@8; struct TypeDescriptor *
0x51FE3D: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x51FE42: push    0; int
0x51FE44: push    eax; void *
0x51FE45: mov     edi, ecx
0x51FE47: call    OblivionDynamicCast
0x51FE4C: mov     esi, eax
0x51FE4E: add     esp, 14h
0x51FE51: test    esi, esi
0x51FE53: jnz     short loc_51FE5C
0x51FE55: pop     edi
0x51FE56: mov     al, 1
0x51FE58: pop     esi
0x51FE59: retn    4
0x51FE5C: push    esi; a2
0x51FE5D: mov     ecx, edi; this
0x51FE5F: call    TESForm_CompareAllComponentsTo
0x51FE64: test    al, al
0x51FE66: jnz     short loc_51FE55
0x51FE68: mov     cl, [esi+48h]
0x51FE6B: cmp     cl, [edi+48h]
0x51FE6E: pop     edi
0x51FE6F: setnz   al
0x51FE72: pop     esi
0x51FE73: retn    4
