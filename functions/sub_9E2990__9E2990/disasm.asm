0x9E2990: push    offset aCommon; "Common"
0x9E2995: push    offset aSsoullevelna_1; "sSoulLevelNameCommon"
0x9E299A: mov     ecx, offset stru_B35B5C; self
0x9E299F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E29A4: push    offset sub_A1B780; void (__cdecl *)()
0x9E29A9: call    _atexit
0x9E29AE: pop     ecx
0x9E29AF: retn
