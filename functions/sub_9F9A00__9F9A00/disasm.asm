0x9F9A00: push    offset aMercantile; "Mercantile"
0x9F9A05: push    offset aSskillnamemerc; "sSkillNameMercantile"
0x9F9A0A: mov     ecx, offset g_sSkillNameMercantile; self
0x9F9A0F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F9A14: push    offset sub_A23A70; void (__cdecl *)()
0x9F9A19: call    _atexit
0x9F9A1E: pop     ecx
0x9F9A1F: retn
