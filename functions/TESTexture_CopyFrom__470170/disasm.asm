0x470170: mov     eax, [esp+arg_0]
0x470174: push    esi
0x470175: push    0; int
0x470177: push    offset ??_R0?AVTESTexture@@@8; struct TypeDescriptor *
0x47017C: push    offset ??_R0?AVBaseFormComponent@@@8; struct _s_RTTICompleteObjectLocator *
0x470181: push    0; int
0x470183: push    eax; void *
0x470184: mov     esi, ecx
0x470186: call    OblivionDynamicCast
0x47018B: add     esp, 14h
0x47018E: test    eax, eax
0x470190: jz      short loc_4701A9
0x470192: mov     eax, [eax+4]
0x470195: test    eax, eax
0x470197: jnz     short loc_47019E
0x470199: mov     eax, offset EmptyString
0x47019E: push    0; a3
0x4701A0: push    eax; a2
0x4701A1: lea     ecx, [esi+4]; this
0x4701A4: call    BSStringT_Set
0x4701A9: pop     esi
0x4701AA: retn    4
