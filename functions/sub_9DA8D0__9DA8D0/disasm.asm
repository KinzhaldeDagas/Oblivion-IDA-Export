0x9DA8D0: push    14h; defaultValue
0x9DA8D2: push    offset aIlocklevelmaxe; "iLockLevelMaxEasy"
0x9DA8D7: mov     ecx, 0B338C0h; self
0x9DA8DC: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DA8E1: push    offset sub_A179A0; void (__cdecl *)()
0x9DA8E6: call    _atexit
0x9DA8EB: pop     ecx
0x9DA8EC: retn
