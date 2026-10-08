0x9F9E40: push    offset aIllusionDescri; "Illusion Description"
0x9F9E45: push    offset aSskilldescillu; "sSkillDescIllusion"
0x9F9E4A: mov     ecx, offset stru_B3A22C; self
0x9F9E4F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F9E54: push    offset sub_A23C90; void (__cdecl *)()
0x9F9E59: call    _atexit
0x9F9E5E: pop     ecx
0x9F9E5F: retn
