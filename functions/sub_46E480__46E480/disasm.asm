0x46E480: mov     eax, [esp+arg_0]
0x46E484: push    esi
0x46E485: push    0; int
0x46E487: push    offset ??_R0?AVTESRaceForm@@@8; struct TypeDescriptor *
0x46E48C: push    offset ??_R0?AVBaseFormComponent@@@8; struct _s_RTTICompleteObjectLocator *
0x46E491: push    0; int
0x46E493: push    eax; void *
0x46E494: mov     esi, ecx
0x46E496: call    OblivionDynamicCast
0x46E49B: add     esp, 14h
0x46E49E: test    eax, eax
0x46E4A0: jz      short loc_46E4A8
0x46E4A2: mov     ecx, [eax+4]
0x46E4A5: mov     [esi+4], ecx
0x46E4A8: pop     esi
0x46E4A9: retn    4
