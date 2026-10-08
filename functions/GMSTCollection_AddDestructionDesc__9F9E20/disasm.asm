0x9F9E20: push    offset aDestructionDes; "Destruction Description"
0x9F9E25: push    offset aSskilldescdest; "sSkillDescDestruction"
0x9F9E2A: mov     ecx, 0B3A224h; self
0x9F9E2F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F9E34: push    offset sub_A23C80; void (__cdecl *)()
0x9F9E39: call    _atexit
0x9F9E3E: pop     ecx
0x9F9E3F: retn
