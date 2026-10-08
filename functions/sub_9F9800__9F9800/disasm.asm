0x9F9800: push    offset aAthletics; "Athletics"
0x9F9805: push    offset aSskillnameathl; "sSkillNameAthletics"
0x9F980A: mov     ecx, offset g_sSkillNameAthletics; self
0x9F980F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F9814: push    offset sub_A23970; void (__cdecl *)()
0x9F9819: call    _atexit
0x9F981E: pop     ecx
0x9F981F: retn
