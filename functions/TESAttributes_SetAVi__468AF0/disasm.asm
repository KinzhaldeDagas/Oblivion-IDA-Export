0x468AF0: mov     eax, [esp+arg_0]
0x468AF4: push    esi
0x468AF5: push    eax
0x468AF6: push    0
0x468AF8: mov     esi, ecx
0x468AFA: call    ActorValue_GetGroupOffsetFromAV
0x468AFF: mov     dl, [esp+0Ch+arg_4]
0x468B03: push    0; int
0x468B05: push    offset ??_R0?AVTESForm@@@8; struct TypeDescriptor *
0x468B0A: push    offset ??_R0?AVTESAttributes@@@8; struct _s_RTTICompleteObjectLocator *
0x468B0F: movsx   ecx, al
0x468B12: push    0; int
0x468B14: push    esi; void *
0x468B15: mov     [ecx+esi+4], dl
0x468B19: call    OblivionDynamicCast
0x468B1E: add     esp, 1Ch
0x468B21: test    eax, eax
0x468B23: pop     esi
0x468B24: jz      short locret_468B31
0x468B26: mov     edx, [eax]
0x468B28: mov     ecx, eax
0x468B2A: mov     eax, [edx+40h]
0x468B2D: push    8
0x468B2F: call    eax
0x468B31: retn    8
