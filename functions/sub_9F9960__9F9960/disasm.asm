0x9F9960: push    offset aMysticism; "Mysticism"
0x9F9965: push    offset aSskillnamemyst; "sSkillNameMysticism"
0x9F996A: mov     ecx, offset g_sSkillNameMysticism; self
0x9F996F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F9974: push    offset sub_A23A20; void (__cdecl *)()
0x9F9979: call    _atexit
0x9F997E: pop     ecx
0x9F997F: retn
