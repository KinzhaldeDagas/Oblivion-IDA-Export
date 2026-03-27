0x9F0A10: push    offset aYouCanNotFireT; "You can not fire this quest arrows."
0x9F0A15: push    offset aScannotequipqu; "sCanNotEquipQuestArrows"
0x9F0A1A: mov     ecx, offset dword_B38570
0x9F0A1F: call    GameSetting_ConstrAndReg
0x9F0A24: push    offset sub_A21200; void (__cdecl *)()
0x9F0A29: call    _atexit
0x9F0A2E: pop     ecx
0x9F0A2F: retn
