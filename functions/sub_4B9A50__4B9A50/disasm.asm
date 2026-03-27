0x4B9A50: mov     eax, [esp+arg_0]
0x4B9A54: push    esi
0x4B9A55: push    0; int
0x4B9A57: push    offset ??_R0?AVTESObjectSTAT@@@8; struct TypeDescriptor *
0x4B9A5C: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4B9A61: push    0; int
0x4B9A63: push    eax; void *
0x4B9A64: mov     esi, ecx
0x4B9A66: call    OblivionDynamicCast
0x4B9A6B: add     esp, 14h
0x4B9A6E: test    eax, eax
0x4B9A70: jnz     short loc_4B9A78
0x4B9A72: mov     al, 1
0x4B9A74: pop     esi
0x4B9A75: retn    4
0x4B9A78: push    eax; a2
0x4B9A79: mov     ecx, esi; this
0x4B9A7B: call    TESForm_CompareAllComponentsTo
0x4B9A80: test    al, al
0x4B9A82: setnz   al
0x4B9A85: pop     esi
0x4B9A86: retn    4
