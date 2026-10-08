0x9DA930: push    63h ; 'c'; defaultValue
0x9DA932: push    offset aIlocklevelma_0; "iLockLevelMaxVeryHard"
0x9DA937: mov     ecx, 0B338D8h; self
0x9DA93C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DA941: push    offset sub_A179D0; void (__cdecl *)()
0x9DA946: call    _atexit
0x9DA94B: pop     ecx
0x9DA94C: retn
