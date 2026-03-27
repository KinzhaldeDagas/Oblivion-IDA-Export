0x9F1720: push    offset aYouMustFirstEq; "You must first equip a weapon to poison"...
0x9F1725: push    offset aSpoisonnoweapo; "sPoisonNoWeaponMessage"
0x9F172A: mov     ecx, offset dword_B388B0
0x9F172F: call    GameSetting_ConstrAndReg
0x9F1734: push    offset sub_A21880; void (__cdecl *)()
0x9F1739: call    _atexit
0x9F173E: pop     ecx
0x9F173F: retn
