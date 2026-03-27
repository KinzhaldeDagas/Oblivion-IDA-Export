0x4B9540: push    esi
0x4B9541: push    edi
0x4B9542: mov     edi, [esp+8+a2]
0x4B9546: push    0; int
0x4B9548: push    offset ??_R0?AVTESObjectMISC@@@8; struct TypeDescriptor *
0x4B954D: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4B9552: push    0; int
0x4B9554: push    edi; void *
0x4B9555: mov     esi, ecx
0x4B9557: call    OblivionDynamicCast
0x4B955C: add     esp, 14h
0x4B955F: test    eax, eax
0x4B9561: jz      short loc_4B956B
0x4B9563: push    edi; a2
0x4B9564: mov     ecx, esi; this
0x4B9566: call    TESForm_CopyAllComponentsFrom
0x4B956B: pop     edi
0x4B956C: pop     esi
0x4B956D: retn    4
