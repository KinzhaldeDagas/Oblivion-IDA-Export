0x9E81E0: push    32h ; '2'; defaultValue
0x9E81E2: push    offset aImediumrespons; "iMediumResponsiblityLevel"
0x9E81E7: mov     ecx, offset stru_B36C38; self
0x9E81EC: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E81F1: push    offset sub_A1DF90; void (__cdecl *)()
0x9E81F6: call    _atexit
0x9E81FB: pop     ecx
0x9E81FC: retn
