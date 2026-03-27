0x9FAB50: push    4Bh ; 'K'
0x9FAB52: push    offset aIskillexpertmi; "iSkillExpertMin"
0x9FAB57: mov     ecx, offset iSkillExpertMin
0x9FAB5C: call    GameSetting_ConstrAndReg
0x9FAB61: push    offset sub_A24240; void (__cdecl *)()
0x9FAB66: call    _atexit
0x9FAB6B: pop     ecx
0x9FAB6C: retn
