0x9DA7F0: push    offset aVeryEasy; "Very Easy"
0x9DA7F5: push    offset aSlocklevelname; "sLockLevelNameVeryEasy"
0x9DA7FA: mov     ecx, 0B33888h; self
0x9DA7FF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DA804: push    offset sub_A17930; void (__cdecl *)()
0x9DA809: call    _atexit
0x9DA80E: pop     ecx
0x9DA80F: retn
