0x9F0950: push    offset aActiveQuests; "Active Quests: "
0x9F0955: push    offset aSmiscactiveque; "sMiscActiveQuests"
0x9F095A: mov     ecx, offset sMiscActiveQuests
0x9F095F: call    GameSetting_ConstrAndReg
0x9F0964: push    offset sub_A211A0; void (__cdecl *)()
0x9F0969: call    _atexit
0x9F096E: pop     ecx
0x9F096F: retn
