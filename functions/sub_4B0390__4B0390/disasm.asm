0x4B0390: push    esi
0x4B0391: push    edi
0x4B0392: mov     edi, [esp+8+a2]
0x4B0396: push    0; int
0x4B0398: push    offset ??_R0?AVTESLevSpell@@@8; struct TypeDescriptor *
0x4B039D: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4B03A2: push    0; int
0x4B03A4: push    edi; void *
0x4B03A5: mov     esi, ecx
0x4B03A7: call    OblivionDynamicCast
0x4B03AC: add     esp, 14h
0x4B03AF: test    eax, eax
0x4B03B1: jz      short loc_4B03BB
0x4B03B3: push    edi; a2
0x4B03B4: mov     ecx, esi; this
0x4B03B6: call    TESForm_CopyAllComponentsFrom
0x4B03BB: pop     edi
0x4B03BC: pop     esi
0x4B03BD: retn    4
