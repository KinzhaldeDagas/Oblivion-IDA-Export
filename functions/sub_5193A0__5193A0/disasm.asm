0x5193A0: mov     eax, [esp+arg_0]
0x5193A4: push    esi
0x5193A5: push    0; int
0x5193A7: push    offset ??_R0?AVBirthSign@@@8; struct TypeDescriptor *
0x5193AC: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x5193B1: push    0; int
0x5193B3: push    eax; void *
0x5193B4: mov     esi, ecx
0x5193B6: call    OblivionDynamicCast
0x5193BB: add     esp, 14h
0x5193BE: test    eax, eax
0x5193C0: jnz     short loc_5193C8
0x5193C2: mov     al, 1
0x5193C4: pop     esi
0x5193C5: retn    4
0x5193C8: push    eax; a2
0x5193C9: mov     ecx, esi; this
0x5193CB: call    TESForm_CompareAllComponentsTo
0x5193D0: test    al, al
0x5193D2: setnz   al
0x5193D5: pop     esi
0x5193D6: retn    4
