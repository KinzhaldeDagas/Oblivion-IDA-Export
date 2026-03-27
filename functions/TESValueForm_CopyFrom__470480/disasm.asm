0x470480: mov     eax, [esp+arg_0]
0x470484: push    esi
0x470485: push    0; int
0x470487: push    offset ??_R0?AVTESValueForm@@@8; struct TypeDescriptor *
0x47048C: push    offset ??_R0?AVBaseFormComponent@@@8; struct _s_RTTICompleteObjectLocator *
0x470491: push    0; int
0x470493: push    eax; void *
0x470494: mov     esi, ecx
0x470496: call    OblivionDynamicCast
0x47049B: add     esp, 14h
0x47049E: test    eax, eax
0x4704A0: jz      short loc_4704D5
0x4704A2: mov     ecx, [eax+4]
0x4704A5: push    0; int
0x4704A7: push    offset ??_R0?AVTESForm@@@8; struct TypeDescriptor *
0x4704AC: push    offset ??_R0?AVTESValueForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4704B1: push    0; int
0x4704B3: push    esi; void *
0x4704B4: mov     [esi+4], ecx
0x4704B7: call    OblivionDynamicCast
0x4704BC: add     esp, 14h
0x4704BF: test    eax, eax
0x4704C1: jz      short loc_4704D5
0x4704C3: mov     edx, [eax]
0x4704C5: pop     esi
0x4704C6: mov     [esp+arg_0], 8
0x4704CE: mov     ecx, eax
0x4704D0: mov     eax, [edx+40h]
0x4704D3: jmp     eax
0x4704D5: pop     esi
0x4704D6: retn    4
