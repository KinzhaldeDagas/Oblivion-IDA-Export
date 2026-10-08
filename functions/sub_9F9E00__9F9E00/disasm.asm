0x9F9E00: push    offset aConjurationDes; "Conjuration Description"
0x9F9E05: push    offset aSskilldescconj; "sSkillDescConjuration"
0x9F9E0A: mov     ecx, offset stru_B3A21C; self
0x9F9E0F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F9E14: push    offset sub_A23C70; void (__cdecl *)()
0x9F9E19: call    _atexit
0x9F9E1E: pop     ecx
0x9F9E1F: retn
