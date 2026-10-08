0x9F6C50: push    offset aFaceRoundGaunt; "Face round/gaunt"
0x9F6C55: push    offset aSfaceround; "sFaceround"
0x9F6C5A: mov     ecx, offset stru_B39088; self
0x9F6C5F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F6C64: push    offset sub_A22830; void (__cdecl *)()
0x9F6C69: call    _atexit
0x9F6C6E: pop     ecx
0x9F6C6F: retn
