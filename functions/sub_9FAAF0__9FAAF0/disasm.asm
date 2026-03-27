0x9FAAF0: push    offset aMaster; "Master"
0x9FAAF5: push    offset aSskilllevelmas; "sSkillLevelMaster"
0x9FAAFA: mov     ecx, offset sSkillLevelMaster
0x9FAAFF: call    GameSetting_ConstrAndReg
0x9FAB04: push    offset sub_A24210; void (__cdecl *)()
0x9FAB09: call    _atexit
0x9FAB0E: pop     ecx
0x9FAB0F: retn
