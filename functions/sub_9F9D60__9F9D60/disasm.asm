0x9F9D60: push    offset aBluntDescripti; "Blunt Description"
0x9F9D65: push    offset aSskilldescblun; "sSkillDescBlunt"
0x9F9D6A: mov     ecx, offset stru_B3A1F4; self
0x9F9D6F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F9D74: push    offset sub_A23C20; void (__cdecl *)()
0x9F9D79: call    _atexit
0x9F9D7E: pop     ecx
0x9F9D7F: retn
