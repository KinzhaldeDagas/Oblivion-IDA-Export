0x4B5BA0: mov     eax, [esp+arg_0]
0x4B5BA4: push    esi
0x4B5BA5: push    0; int
0x4B5BA7: push    offset ??_R0?AVTESObjectCLOT@@@8; struct TypeDescriptor *
0x4B5BAC: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4B5BB1: push    0; int
0x4B5BB3: push    eax; void *
0x4B5BB4: mov     esi, ecx
0x4B5BB6: call    OblivionDynamicCast
0x4B5BBB: add     esp, 14h
0x4B5BBE: test    eax, eax
0x4B5BC0: jnz     short loc_4B5BC8
0x4B5BC2: mov     al, 1
0x4B5BC4: pop     esi
0x4B5BC5: retn    4
0x4B5BC8: push    eax; a2
0x4B5BC9: mov     ecx, esi; this
0x4B5BCB: call    TESForm_CompareAllComponentsTo
0x4B5BD0: test    al, al
0x4B5BD2: setnz   al
0x4B5BD5: pop     esi
0x4B5BD6: retn    4
