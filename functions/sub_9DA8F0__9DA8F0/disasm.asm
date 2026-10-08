0x9DA8F0: push    28h ; '('; defaultValue
0x9DA8F2: push    offset aIlocklevelmaxa; "iLockLevelMaxAverage"
0x9DA8F7: mov     ecx, 0B338C8h; self
0x9DA8FC: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DA901: push    offset sub_A179B0; void (__cdecl *)()
0x9DA906: call    _atexit
0x9DA90B: pop     ecx
0x9DA90C: retn
