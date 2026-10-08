0x9F1960: push    offset aLockLevel; "Lock Level"
0x9F1965: push    offset aSlockleveltext; "sLockLevelText"
0x9F196A: mov     ecx, 0B38940h; self
0x9F196F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F1974: push    offset sub_A219A0; void (__cdecl *)()
0x9F1979: call    _atexit
0x9F197E: pop     ecx
0x9F197F: retn
