0x9DA890: push    offset aImpossible; "Impossible"
0x9DA895: push    offset aSlocklevelna_4; "sLockLevelNameImpossible"
0x9DA89A: mov     ecx, 0B338B0h; self
0x9DA89F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DA8A4: push    offset sub_A17980; void (__cdecl *)()
0x9DA8A9: call    _atexit
0x9DA8AE: pop     ecx
0x9DA8AF: retn
