0x501DD0: mov     eax, [esp+arg_8]
0x501DD4: test    eax, eax
0x501DD6: jz      short loc_501E1D
0x501DD8: push    esi
0x501DD9: push    0; int
0x501DDB: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x501DE0: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x501DE5: push    0; int
0x501DE7: push    eax; void *
0x501DE8: call    OblivionDynamicCast
0x501DED: mov     esi, eax
0x501DEF: add     esp, 14h
0x501DF2: test    esi, esi
0x501DF4: jz      short loc_501E19
0x501DF6: mov     eax, [esi]
0x501DF8: mov     edx, [eax+330h]
0x501DFE: mov     ecx, esi
0x501E00: call    edx
0x501E02: test    eax, eax
0x501E04: jz      short loc_501E19
0x501E06: mov     eax, [esi]
0x501E08: mov     edx, [eax+330h]
0x501E0E: mov     ecx, esi
0x501E10: call    edx
0x501E12: mov     ecx, eax
0x501E14: call    sub_61DA10
0x501E19: mov     al, 1
0x501E1B: pop     esi
0x501E1C: retn
0x501E1D: mov     al, 1
0x501E1F: retn
