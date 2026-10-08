0x9E81C0: push    24h ; '$'; defaultValue
0x9E81C2: push    offset aIlowresponsibl; "iLowResponsiblityLevel"
0x9E81C7: mov     ecx, offset stru_B36C30; self
0x9E81CC: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E81D1: push    offset sub_A1DF80; void (__cdecl *)()
0x9E81D6: call    _atexit
0x9E81DB: pop     ecx
0x9E81DC: retn
