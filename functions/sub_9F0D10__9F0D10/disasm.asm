0x9F0D10: push    offset aYouWillStartAt; Initializes Oblivion UI string setting sMajorSkills: major skills are presented as starting at 25 (Apprentice). This agrees with the executed level-1 major base in TESNPC_RecalculateAutoStats before specialization and race bonuses.
0x9F0D15: push    offset aSmajorskills; "sMajorSkills"
0x9F0D1A: mov     ecx, offset g_sMajorSkills; self
0x9F0D1F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F0D24: push    offset sub_A21380; void (__cdecl *)()
0x9F0D29: call    _atexit
0x9F0D2E: pop     ecx
0x9F0D2F: retn
