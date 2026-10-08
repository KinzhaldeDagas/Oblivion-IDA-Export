0x9F9E80: push    offset aRestorationDes; "Restoration Description"
0x9F9E85: push    offset aSskilldescrest; "sSkillDescRestoration"
0x9F9E8A: mov     ecx, offset stru_B3A23C; self
0x9F9E8F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F9E94: push    offset sub_A23CB0; void (__cdecl *)()
0x9F9E99: call    _atexit
0x9F9E9E: pop     ecx
0x9F9E9F: retn
