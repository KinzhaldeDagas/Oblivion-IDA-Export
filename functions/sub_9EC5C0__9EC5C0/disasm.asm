0x9EC5C0: push    0Ah; defaultValue
0x9EC5C2: push    offset aIpersuasionang; "iPersuasionAngleMin"
0x9EC5C7: mov     ecx, 0B37868h; self
0x9EC5CC: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EC5D1: push    offset sub_A1F7F0; void (__cdecl *)()
0x9EC5D6: call    _atexit
0x9EC5DB: pop     ecx
0x9EC5DC: retn
