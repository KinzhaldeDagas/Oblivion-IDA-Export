0x9F9860: push    offset aBlunt; defaultValue
0x9F9865: push    offset aSskillnameblun; "sSkillNameBlunt"
0x9F986A: mov     ecx, offset g_sSkillNameBlunt; self
0x9F986F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F9874: push    offset sub_A239A0; void (__cdecl *)()
0x9F9879: call    _atexit
0x9F987E: pop     ecx
0x9F987F: retn
