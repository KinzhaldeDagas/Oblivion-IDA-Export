0x9FAB70: push    64h ; 'd'
0x9FAB72: push    offset aIskillmastermi; "iSkillMasterMin"
0x9FAB77: mov     ecx, offset iSkillMasterMin
0x9FAB7C: call    GameSetting_ConstrAndReg
0x9FAB81: push    offset sub_A24250; void (__cdecl *)()
0x9FAB86: call    _atexit
0x9FAB8B: pop     ecx
0x9FAB8C: retn
