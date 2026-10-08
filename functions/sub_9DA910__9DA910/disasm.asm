0x9DA910: push    50h ; 'P'; defaultValue
0x9DA912: push    offset aIlocklevelmaxh; "iLockLevelMaxHard"
0x9DA917: mov     ecx, 0B338D0h; self
0x9DA91C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DA921: push    offset sub_A179C0; void (__cdecl *)()
0x9DA926: call    _atexit
0x9DA92B: pop     ecx
0x9DA92C: retn
