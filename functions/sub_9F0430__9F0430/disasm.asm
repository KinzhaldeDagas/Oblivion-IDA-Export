0x9F0430: push    offset aFame; "Fame:"
0x9F0435: push    offset aSmiscfame; "sMiscFame"
0x9F043A: mov     ecx, offset stru_B383F8; self
0x9F043F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F0444: push    offset sub_A20F10; void (__cdecl *)()
0x9F0449: call    _atexit
0x9F044E: pop     ecx
0x9F044F: retn
