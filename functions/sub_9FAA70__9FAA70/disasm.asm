0x9FAA70: push    offset aNovice; "Novice"
0x9FAA75: push    offset aSskilllevelnov; "sSkillLevelNovice"
0x9FAA7A: mov     ecx, 0B3A4D0h; self
0x9FAA7F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9FAA84: push    offset sub_A241D0; void (__cdecl *)()
0x9FAA89: call    _atexit
0x9FAA8E: pop     ecx
0x9FAA8F: retn
