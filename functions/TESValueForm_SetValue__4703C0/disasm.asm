0x4703C0: mov     eax, [esp+arg_0]
0x4703C4: push    0; int
0x4703C6: push    offset ??_R0?AVTESForm@@@8; struct TypeDescriptor *
0x4703CB: push    offset ??_R0?AVTESValueForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4703D0: push    0; int
0x4703D2: push    ecx; void *
0x4703D3: mov     [ecx+4], eax
0x4703D6: call    OblivionDynamicCast
0x4703DB: add     esp, 14h
0x4703DE: test    eax, eax
0x4703E0: jz      short locret_4703F3
0x4703E2: mov     edx, [eax]
0x4703E4: mov     ecx, eax
0x4703E6: mov     eax, [edx+40h]
0x4703E9: mov     [esp+arg_0], 8
0x4703F1: jmp     eax
0x4703F3: retn    4
