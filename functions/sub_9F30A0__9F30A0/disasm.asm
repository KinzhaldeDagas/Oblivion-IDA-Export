0x9F30A0: push    41h ; 'A'; defaultValue
0x9F30A2: push    offset aIpersuasionmax; "iPersuasionMaxDisp"
0x9F30A7: mov     ecx, offset stru_B38E80; self
0x9F30AC: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F30B1: push    offset sub_A22420; void (__cdecl *)()
0x9F30B6: call    _atexit
0x9F30BB: pop     ecx
0x9F30BC: retn
