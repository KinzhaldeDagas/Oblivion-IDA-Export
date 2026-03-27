0x9F1740: push    offset aTheCurrentWeap; "The current weapon is already poisoned."
0x9F1745: push    offset aSpoisonalready; "sPoisonAlreadyPoisonedMessage"
0x9F174A: mov     ecx, offset dword_B388B8
0x9F174F: call    GameSetting_ConstrAndReg
0x9F1754: push    offset sub_A21890; void (__cdecl *)()
0x9F1759: call    _atexit
0x9F175E: pop     ecx
0x9F175F: retn
