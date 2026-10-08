0x9F7430: push    offset aEyeSocketsBrui; "Eye sockets bruised/bright"
0x9F7435: push    offset aSeyesocketsbru; "sEyesocketsbruised"
0x9F743A: mov     ecx, offset stru_B39280; self
0x9F743F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F7444: push    offset sub_A22C20; void (__cdecl *)()
0x9F7449: call    _atexit
0x9F744E: pop     ecx
0x9F744F: retn
