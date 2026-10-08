0x9F1940: push    offset aDuration; "Duration"
0x9F1945: push    offset aSdurationtext; "sDurationText"
0x9F194A: mov     ecx, offset stru_B38938; self
0x9F194F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F1954: push    offset sub_A21990; void (__cdecl *)()
0x9F1959: call    _atexit
0x9F195E: pop     ecx
0x9F195F: retn
