0x6A5180: mov     eax, [esp+arg_0]
0x6A5184: push    esi
0x6A5185: push    eax
0x6A5186: mov     esi, ecx
0x6A5188: call    AssociatedItemEffect_Link
0x6A518D: mov     eax, [esi+3Ch]
0x6A5190: test    eax, eax
0x6A5192: jz      short loc_6A51C4
0x6A5194: push    0; int
0x6A5196: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x6A519B: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x6A51A0: push    0; int
0x6A51A2: push    eax; a1
0x6A51A3: call    TESForm_LookupByFormID
0x6A51A8: add     esp, 4
0x6A51AB: push    eax; void *
0x6A51AC: call    OblivionDynamicCast
0x6A51B1: add     esp, 14h
0x6A51B4: test    eax, eax
0x6A51B6: mov     [esi+3Ch], eax
0x6A51B9: jnz     short loc_6A51C4
0x6A51BB: push    1
0x6A51BD: mov     ecx, esi
0x6A51BF: call    ActiveEffect_Base_Remove
0x6A51C4: pop     esi
0x6A51C5: retn    4
