0x9F7410: push    offset aBeardMoustache; "Beard moustache light/dark"
0x9F7415: push    offset aSbeardmoustach; "sBeardmoustache"
0x9F741A: mov     ecx, offset stru_B39278; self
0x9F741F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F7424: push    offset sub_A22C10; void (__cdecl *)()
0x9F7429: call    _atexit
0x9F742E: pop     ecx
0x9F742F: retn
