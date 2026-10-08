0x9DA8B0: push    7; defaultValue
0x9DA8B2: push    offset aIlocklevelmaxv; "iLockLevelMaxVeryEasy"
0x9DA8B7: mov     ecx, 0B338B8h; self
0x9DA8BC: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DA8C1: push    offset sub_A17990; void (__cdecl *)()
0x9DA8C6: call    _atexit
0x9DA8CB: pop     ecx
0x9DA8CC: retn
