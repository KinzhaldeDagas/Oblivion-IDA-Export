0x9F84F0: push    offset aMale; "Male"
0x9F84F5: push    offset aSmale; "sMale"
0x9F84FA: mov     ecx, 0B39520h; self
0x9F84FF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F8504: push    offset sub_A23160; void (__cdecl *)()
0x9F8509: call    _atexit
0x9F850E: pop     ecx
0x9F850F: retn
