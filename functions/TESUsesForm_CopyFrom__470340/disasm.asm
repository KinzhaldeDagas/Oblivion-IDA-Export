0x470340: mov     eax, [esp+arg_0]
0x470344: push    esi
0x470345: push    0; int
0x470347: push    offset ??_R0?AVTESUsesForm@@@8; struct TypeDescriptor *
0x47034C: push    offset ??_R0?AVBaseFormComponent@@@8; struct _s_RTTICompleteObjectLocator *
0x470351: push    0; int
0x470353: push    eax; void *
0x470354: mov     esi, ecx
0x470356: call    OblivionDynamicCast
0x47035B: add     esp, 14h
0x47035E: test    eax, eax
0x470360: jz      short loc_470368
0x470362: mov     cl, [eax+4]
0x470365: mov     [esi+4], cl
0x470368: pop     esi
0x470369: retn    4
