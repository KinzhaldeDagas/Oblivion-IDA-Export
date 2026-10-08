0x9DA810: push    offset aEasy; "Easy"
0x9DA815: push    offset aSlocklevelna_0; "sLockLevelNameEasy"
0x9DA81A: mov     ecx, 0B33890h; self
0x9DA81F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DA824: push    offset sub_A17940; void (__cdecl *)()
0x9DA829: call    _atexit
0x9DA82E: pop     ecx
0x9DA82F: retn
