0x9F0310: push    offset aSkillDecreased; "skill decreased"
0x9F0315: push    offset aSskilldecrease; "sSkillDecreased"
0x9F031A: mov     ecx, offset stru_B383B0; self
0x9F031F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F0324: push    offset sub_A20E80; void (__cdecl *)()
0x9F0329: call    _atexit
0x9F032E: pop     ecx
0x9F032F: retn
