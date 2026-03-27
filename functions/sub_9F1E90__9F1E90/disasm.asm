0x9F1E90: push    offset aYouCannotEquip; "You cannot equip this item."
0x9F1E95: push    offset aScantequipgene; "sCantEquipGeneric"
0x9F1E9A: mov     ecx, offset dword_B38A30
0x9F1E9F: call    GameSetting_ConstrAndReg
0x9F1EA4: push    offset sub_A21B80; void (__cdecl *)()
0x9F1EA9: call    _atexit
0x9F1EAE: pop     ecx
0x9F1EAF: retn
