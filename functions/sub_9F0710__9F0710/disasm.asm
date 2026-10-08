0x9F0710: push    offset aMasterSkills; "Master Skills: "
0x9F0715: push    offset aSmiscmasterski; "sMiscMasterSkills"
0x9F071A: mov     ecx, offset stru_B384B0; self
0x9F071F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F0724: push    offset sub_A21080; void (__cdecl *)()
0x9F0729: call    _atexit
0x9F072E: pop     ecx
0x9F072F: retn
