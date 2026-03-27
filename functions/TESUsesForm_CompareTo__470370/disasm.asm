0x470370: mov     eax, [esp+arg_0]
0x470374: push    esi
0x470375: push    0; int
0x470377: push    offset ??_R0?AVTESUsesForm@@@8; struct TypeDescriptor *
0x47037C: push    offset ??_R0?AVBaseFormComponent@@@8; struct _s_RTTICompleteObjectLocator *
0x470381: push    0; int
0x470383: push    eax; void *
0x470384: mov     esi, ecx
0x470386: call    OblivionDynamicCast
0x47038B: add     esp, 14h
0x47038E: test    eax, eax
0x470390: jnz     short loc_470398
0x470392: mov     al, 1
0x470394: pop     esi
0x470395: retn    4
0x470398: mov     cl, [esi+4]
0x47039B: cmp     cl, [eax+4]
0x47039E: pop     esi
0x47039F: setnz   al
0x4703A2: retn    4
