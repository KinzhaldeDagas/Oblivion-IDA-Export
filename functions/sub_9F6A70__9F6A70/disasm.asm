0x9F6A70: push    offset aCheeks; "Cheeks"
0x9F6A75: push    offset aScheeks; "sCheeks"
0x9F6A7A: mov     ecx, offset stru_B39010; self
0x9F6A7F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F6A84: push    offset sub_A22740; void (__cdecl *)()
0x9F6A89: call    _atexit
0x9F6A8E: pop     ecx
0x9F6A8F: retn
