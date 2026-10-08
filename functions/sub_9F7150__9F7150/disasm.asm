0x9F7150: push    offset aNoseDownUp; "Nose down/up"
0x9F7155: push    offset aSnosedown; "sNosedown"
0x9F715A: mov     ecx, offset stru_B391C8; self
0x9F715F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F7164: push    offset sub_A22AB0; void (__cdecl *)()
0x9F7169: call    _atexit
0x9F716E: pop     ecx
0x9F716F: retn
