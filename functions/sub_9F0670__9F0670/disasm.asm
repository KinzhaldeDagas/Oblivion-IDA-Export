0x9F0670: push    offset aPotionsMade; "Potions Made: "
0x9F0675: push    offset aSmiscpotionsma; "sMiscPotionsMade"
0x9F067A: mov     ecx, offset dword_B38488
0x9F067F: call    GameSetting_ConstrAndReg
0x9F0684: push    offset sub_A21030; void (__cdecl *)()
0x9F0689: call    _atexit
0x9F068E: pop     ecx
0x9F068F: retn
