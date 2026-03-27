0x9FAB10: push    19h
0x9FAB12: push    offset aIskillapprenti; "iSkillApprenticeMin"
0x9FAB17: mov     ecx, offset iSkillApprenticeMin
0x9FAB1C: call    GameSetting_ConstrAndReg
0x9FAB21: push    offset sub_A24220; void (__cdecl *)()
0x9FAB26: call    _atexit
0x9FAB2B: pop     ecx
0x9FAB2C: retn
