0x9F6A50: push    offset aBrow; "Brow"
0x9F6A55: push    offset aSbrow; "sBrow"
0x9F6A5A: mov     ecx, offset stru_B39008; self
0x9F6A5F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F6A64: push    offset sub_A22730; void (__cdecl *)()
0x9F6A69: call    _atexit
0x9F6A6E: pop     ecx
0x9F6A6F: retn
