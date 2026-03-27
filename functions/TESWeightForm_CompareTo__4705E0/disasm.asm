0x4705E0: mov     eax, [esp+arg_0]
0x4705E4: push    esi
0x4705E5: push    0; int
0x4705E7: push    offset ??_R0?AVTESWeightForm@@@8; struct TypeDescriptor *
0x4705EC: push    offset ??_R0?AVBaseFormComponent@@@8; struct _s_RTTICompleteObjectLocator *
0x4705F1: push    0; int
0x4705F3: push    eax; void *
0x4705F4: mov     esi, ecx
0x4705F6: call    OblivionDynamicCast
0x4705FB: add     esp, 14h
0x4705FE: test    eax, eax
0x470600: jnz     short loc_470608
0x470602: mov     al, 1
0x470604: pop     esi
0x470605: retn    4
0x470608: fld     dword ptr [esi+4]
0x47060B: fld     dword ptr [eax+4]
0x47060E: fucompp
0x470610: fnstsw  ax
0x470612: test    ah, 44h
0x470615: jp      short loc_470602
0x470617: xor     al, al
0x470619: pop     esi
0x47061A: retn    4
