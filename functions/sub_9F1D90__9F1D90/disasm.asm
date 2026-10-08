0x9F1D90: push    offset aSkill; defaultValue
0x9F1D95: push    offset aSskilltext; "sSkillText"
0x9F1D9A: mov     ecx, offset stru_B389F0; self
0x9F1D9F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F1DA4: push    offset sub_A21B00; void (__cdecl *)()
0x9F1DA9: call    _atexit
0x9F1DAE: pop     ecx
0x9F1DAF: retn
