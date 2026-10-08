0x9F9A40: push    offset aSneak; "Sneak"
0x9F9A45: push    offset aSskillnamesnea; "sSkillNameSneak"
0x9F9A4A: mov     ecx, offset g_sSkillNameSneak; self
0x9F9A4F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F9A54: push    offset sub_A23A90; void (__cdecl *)()
0x9F9A59: call    _atexit
0x9F9A5E: pop     ecx
0x9F9A5F: retn
