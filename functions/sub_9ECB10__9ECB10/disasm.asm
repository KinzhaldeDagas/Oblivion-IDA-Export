0x9ECB10: push    5Ah ; 'Z'; defaultValue
0x9ECB12: push    offset aIpersuasionb_2; "iPersuasionBribeCrime"
0x9ECB17: mov     ecx, 0B37968h; self
0x9ECB1C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9ECB21: push    offset sub_A1F9F0; void (__cdecl *)()
0x9ECB26: call    _atexit
0x9ECB2B: pop     ecx
0x9ECB2C: retn
