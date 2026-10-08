0x9E2950: push    offset aLesser; "Lesser"
0x9E2955: push    offset aSsoullevelna_0; "sSoulLevelNameLesser"
0x9E295A: mov     ecx, offset stru_B35B4C; self
0x9E295F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E2964: push    offset sub_A1B760; void (__cdecl *)()
0x9E2969: call    _atexit
0x9E296E: pop     ecx
0x9E296F: retn
