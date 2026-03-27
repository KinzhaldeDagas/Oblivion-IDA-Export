0x9FAA70: push    offset aNovice; "Novice"
0x9FAA75: push    offset aSskilllevelnov; "sSkillLevelNovice"
0x9FAA7A: mov     ecx, offset sSkillLevelNovice
0x9FAA7F: call    GameSetting_ConstrAndReg
0x9FAA84: push    offset sub_A241D0; void (__cdecl *)()
0x9FAA89: call    _atexit
0x9FAA8E: pop     ecx
0x9FAA8F: retn
