0x9ECB50: push    4Bh ; 'K'; defaultValue
0x9ECB52: push    offset aIpersuasiond_2; "iPersuasionDemandRefuse"
0x9ECB57: mov     ecx, 0B37978h; self
0x9ECB5C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9ECB61: push    offset sub_A1FA10; void (__cdecl *)()
0x9ECB66: call    _atexit
0x9ECB6B: pop     ecx
0x9ECB6C: retn
