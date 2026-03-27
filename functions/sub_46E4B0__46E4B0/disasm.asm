0x46E4B0: mov     eax, [esp+arg_0]
0x46E4B4: push    esi
0x46E4B5: push    0; int
0x46E4B7: push    offset ??_R0?AVTESRaceForm@@@8; struct TypeDescriptor *
0x46E4BC: push    offset ??_R0?AVBaseFormComponent@@@8; struct _s_RTTICompleteObjectLocator *
0x46E4C1: push    0; int
0x46E4C3: push    eax; void *
0x46E4C4: mov     esi, ecx
0x46E4C6: call    OblivionDynamicCast
0x46E4CB: add     esp, 14h
0x46E4CE: test    eax, eax
0x46E4D0: jnz     short loc_46E4D8
0x46E4D2: mov     al, 1
0x46E4D4: pop     esi
0x46E4D5: retn    4
0x46E4D8: mov     ecx, [esi+4]
0x46E4DB: cmp     ecx, [eax+4]
0x46E4DE: pop     esi
0x46E4DF: setnz   al
0x46E4E2: retn    4
