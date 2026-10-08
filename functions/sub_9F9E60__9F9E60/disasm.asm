0x9F9E60: push    offset aMysticismDescr; "Mysticism Description"
0x9F9E65: push    offset aSskilldescmyst; "sSkillDescMysticism"
0x9F9E6A: mov     ecx, offset stru_B3A234; self
0x9F9E6F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F9E74: push    offset sub_A23CA0; void (__cdecl *)()
0x9F9E79: call    _atexit
0x9F9E7E: pop     ecx
0x9F9E7F: retn
