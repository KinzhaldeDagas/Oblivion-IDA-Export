0x519370: push    esi
0x519371: push    edi
0x519372: mov     edi, [esp+8+a2]
0x519376: push    0; int
0x519378: push    offset ??_R0?AVBirthSign@@@8; struct TypeDescriptor *
0x51937D: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x519382: push    0; int
0x519384: push    edi; void *
0x519385: mov     esi, ecx
0x519387: call    OblivionDynamicCast
0x51938C: add     esp, 14h
0x51938F: test    eax, eax
0x519391: jz      short loc_51939B
0x519393: push    edi; a2
0x519394: mov     ecx, esi; this
0x519396: call    TESForm_CopyAllComponentsFrom
0x51939B: pop     edi
0x51939C: pop     esi
0x51939D: retn    4
