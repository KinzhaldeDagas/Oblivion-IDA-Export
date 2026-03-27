0x4705B0: mov     eax, [esp+arg_0]
0x4705B4: push    esi
0x4705B5: push    0; int
0x4705B7: push    offset ??_R0?AVTESWeightForm@@@8; struct TypeDescriptor *
0x4705BC: push    offset ??_R0?AVBaseFormComponent@@@8; struct _s_RTTICompleteObjectLocator *
0x4705C1: push    0; int
0x4705C3: push    eax; void *
0x4705C4: mov     esi, ecx
0x4705C6: call    OblivionDynamicCast
0x4705CB: add     esp, 14h
0x4705CE: test    eax, eax
0x4705D0: jz      short loc_4705D8
0x4705D2: fld     dword ptr [eax+4]
0x4705D5: fstp    dword ptr [esi+4]
0x4705D8: pop     esi
0x4705D9: retn    4
