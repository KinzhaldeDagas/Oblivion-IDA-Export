0x9F6E50: push    offset aChinWideThin; "Chin wide/thin"
0x9F6E55: push    offset aSchinwide; "sChinwide"
0x9F6E5A: mov     ecx, offset stru_B39108; self
0x9F6E5F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F6E64: push    offset sub_A22930; void (__cdecl *)()
0x9F6E69: call    _atexit
0x9F6E6E: pop     ecx
0x9F6E6F: retn
