0x69925F: mov     eax, [esp+arg_14]
0x699263: mov     ecx, [esp+arg_10]
0x699267: mov     ebx, [esi]
0x699269: push    eax
0x69926A: push    ecx
0x69926B: push    0; int
0x69926D: push    offset ??_R0?AVSpellItem@@@8; struct TypeDescriptor *
0x699272: push    offset ??_R0?AVMagicItem@@@8; struct _s_RTTICompleteObjectLocator *
0x699277: push    0; int
0x699279: push    edi; void *
0x69927A: call    OblivionDynamicCast
0x69927F: mov     edx, [ebx+4]
0x699282: add     esp, 14h
0x699285: push    eax
0x699286: mov     ecx, esi
0x699288: call    edx
0x69928A: pop     edi
0x69928B: pop     esi
0x69928C: mov     al, 1
0x69928E: pop     ebx
0x69928F: retn    0Ch
