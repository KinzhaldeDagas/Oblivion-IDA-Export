0x9E1100: push    0; defaultValue
0x9E1102: push    offset aIaidefaultpref; "iAIDefaultPrefersRangedAttacks"
0x9E1107: mov     ecx, offset stru_B35758; self
0x9E110C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E1111: push    offset sub_A1ADE0; void (__cdecl *)()
0x9E1116: call    _atexit
0x9E111B: pop     ecx
0x9E111C: retn
