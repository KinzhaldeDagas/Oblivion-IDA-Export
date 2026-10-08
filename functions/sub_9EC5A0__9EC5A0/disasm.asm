0x9EC5A0: push    28h ; '('; defaultValue
0x9EC5A2: push    offset aIpersuasionp_1; "iPersuasionPower3"
0x9EC5A7: mov     ecx, 0B37860h; self
0x9EC5AC: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EC5B1: push    offset sub_A1F7E0; void (__cdecl *)()
0x9EC5B6: call    _atexit
0x9EC5BB: pop     ecx
0x9EC5BC: retn
