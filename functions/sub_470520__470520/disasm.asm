0x470520: push    esi
0x470521: mov     esi, [esp+4+arg_0]
0x470525: push    0; int
0x470527: push    offset ??_R0?AVTESValueForm@@@8; struct TypeDescriptor *
0x47052C: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x470531: push    0; int
0x470533: push    esi; void *
0x470534: call    OblivionDynamicCast
0x470539: add     esp, 14h
0x47053C: test    eax, eax
0x47053E: jz      short loc_470545
0x470540: mov     eax, [eax+4]
0x470543: pop     esi
0x470544: retn
0x470545: push    0; int
0x470547: push    offset ??_R0?AVMagicItem@@@8; struct TypeDescriptor *
0x47054C: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x470551: push    0; int
0x470553: push    esi; void *
0x470554: call    OblivionDynamicCast
0x470559: add     esp, 14h
0x47055C: test    eax, eax
0x47055E: jz      short loc_470571
0x470560: lea     ecx, [eax+0Ch]
0x470563: mov     eax, [ecx]
0x470565: mov     edx, [eax]
0x470567: push    0
0x470569: call    edx
0x47056B: pop     esi
0x47056C: jmp     Double_To_SInt32
0x470571: or      eax, 0FFFFFFFFh
0x470574: pop     esi
0x470575: retn
