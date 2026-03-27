0x4704E0: mov     eax, [esp+arg_0]
0x4704E4: push    esi
0x4704E5: push    0; int
0x4704E7: push    offset ??_R0?AVTESValueForm@@@8; struct TypeDescriptor *
0x4704EC: push    offset ??_R0?AVBaseFormComponent@@@8; struct _s_RTTICompleteObjectLocator *
0x4704F1: push    0; int
0x4704F3: push    eax; void *
0x4704F4: mov     esi, ecx
0x4704F6: call    OblivionDynamicCast
0x4704FB: add     esp, 14h
0x4704FE: test    eax, eax
0x470500: jnz     short loc_470508
0x470502: mov     al, 1
0x470504: pop     esi
0x470505: retn    4
0x470508: mov     ecx, [esi+4]
0x47050B: cmp     ecx, [eax+4]
0x47050E: pop     esi
0x47050F: setnz   al
0x470512: retn    4
