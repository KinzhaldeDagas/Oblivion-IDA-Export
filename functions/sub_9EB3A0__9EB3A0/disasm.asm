0x9EB3A0: push    50h ; 'P'; defaultValue
0x9EB3A2: push    offset aIhorseturnde_0; "iHorseTurnDegreesRampUpPerSecond"
0x9EB3A7: mov     ecx, 0B37520h; self
0x9EB3AC: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EB3B1: push    offset sub_A1F160; void (__cdecl *)()
0x9EB3B6: call    _atexit
0x9EB3BB: pop     ecx
0x9EB3BC: retn
