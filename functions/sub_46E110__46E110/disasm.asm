0x46E110: mov     eax, [esp+arg_0]
0x46E114: push    esi
0x46E115: push    0; int
0x46E117: push    offset ??_R0?AVTESProduceForm@@@8; struct TypeDescriptor *
0x46E11C: push    offset ??_R0?AVBaseFormComponent@@@8; struct _s_RTTICompleteObjectLocator *
0x46E121: push    0; int
0x46E123: push    eax; void *
0x46E124: mov     esi, ecx
0x46E126: call    OblivionDynamicCast
0x46E12B: add     esp, 14h
0x46E12E: test    eax, eax
0x46E130: jz      short loc_46E142
0x46E132: add     eax, 8
0x46E135: mov     ecx, [eax-4]
0x46E138: mov     [esi+4], ecx
0x46E13B: jz      short loc_46E142
0x46E13D: mov     edx, [eax]
0x46E13F: mov     [esi+8], edx
0x46E142: pop     esi
0x46E143: retn    4
