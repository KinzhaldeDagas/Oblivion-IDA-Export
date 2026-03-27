0x51D590: mov     eax, [esp+arg_0]
0x51D594: lea     edx, [eax-0Ch]
0x51D597: cmp     edx, 6
0x51D59A: ja      short loc_51D5B3
0x51D59C: mov     al, [esp+arg_4]
0x51D5A0: push    200h; a2
0x51D5A5: mov     [ecx+105h], al
0x51D5AB: call    TESForm_MarkAsModified
0x51D5B0: retn    8
0x51D5B3: lea     edx, [eax-13h]
0x51D5B6: cmp     edx, 6
0x51D5B9: ja      short loc_51D5D2
0x51D5BB: mov     al, [esp+arg_4]
0x51D5BF: push    200h; a2
0x51D5C4: mov     [ecx+106h], al
0x51D5CA: call    TESForm_MarkAsModified
0x51D5CF: retn    8
0x51D5D2: lea     edx, [eax-1Ah]
0x51D5D5: cmp     edx, 6
0x51D5D8: ja      short loc_51D5F1
0x51D5DA: mov     al, [esp+arg_4]
0x51D5DE: push    200h; a2
0x51D5E3: mov     [ecx+107h], al
0x51D5E9: call    TESForm_MarkAsModified
0x51D5EE: retn    8
0x51D5F1: mov     [esp+arg_0], eax
0x51D5F5: jmp     TESActorBase_SetAViBase
