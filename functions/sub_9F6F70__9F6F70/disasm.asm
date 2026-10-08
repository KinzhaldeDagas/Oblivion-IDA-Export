0x9F6F70: push    offset aJawWideThin; "Jaw wide/thin"
0x9F6F75: push    offset aSjawwide; "sJawwide"
0x9F6F7A: mov     ecx, offset stru_B39150; self
0x9F6F7F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F6F84: push    offset sub_A229C0; void (__cdecl *)()
0x9F6F89: call    _atexit
0x9F6F8E: pop     ecx
0x9F6F8F: retn
