0x9F95B0: push    32h ; '2'; defaultValue
0x9F95B2: push    offset aIlowdamp; "iLowDamp"
0x9F95B7: mov     ecx, offset stru_B3A00C; self
0x9F95BC: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F95C1: push    offset sub_A23860; void (__cdecl *)()
0x9F95C6: call    _atexit
0x9F95CB: pop     ecx
0x9F95CC: retn
