0x9ECAF0: push    3Ch ; '<'; defaultValue
0x9ECAF2: push    offset aIpersuasionb_1; "iPersuasionBribeRefuse"
0x9ECAF7: mov     ecx, 0B37960h; self
0x9ECAFC: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9ECB01: push    offset sub_A1F9E0; void (__cdecl *)()
0x9ECB06: call    _atexit
0x9ECB0B: pop     ecx
0x9ECB0C: retn
