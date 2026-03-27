0x9EB940: push    0Ah
0x9EB942: push    offset aIlevelupskillc; "iLevelUpSkillCount"
0x9EB947: mov     ecx, offset iLevelUpSkillCount
0x9EB94C: call    GameSetting_ConstrAndReg
0x9EB951: push    offset sub_A1F350; void (__cdecl *)()
0x9EB956: call    _atexit
0x9EB95B: pop     ecx
0x9EB95C: retn
