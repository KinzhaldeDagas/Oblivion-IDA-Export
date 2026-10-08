0x9F9840: push    offset aBlock_0; "Block"
0x9F9845: push    offset aSskillnamebloc; "sSkillNameBlock"
0x9F984A: mov     ecx, offset g_sSkillNameBlock; self
0x9F984F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F9854: push    offset sub_A23990; void (__cdecl *)()
0x9F9859: call    _atexit
0x9F985E: pop     ecx
0x9F985F: retn
