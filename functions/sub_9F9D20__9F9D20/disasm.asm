0x9F9D20: push    offset aBladeDescripti; "Blade Description"
0x9F9D25: push    offset aSskilldescblad; "sSkillDescBlade"
0x9F9D2A: mov     ecx, offset stru_B3A1E4; self
0x9F9D2F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F9D34: push    offset sub_A23C00; void (__cdecl *)()
0x9F9D39: call    _atexit
0x9F9D3E: pop     ecx
0x9F9D3F: retn
