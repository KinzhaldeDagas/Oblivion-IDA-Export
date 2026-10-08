0x9F2270: push    offset aHasAlreadyCaug; " has already caught you."
0x9F2275: push    offset aSnopickpocketa; "sNoPickPocketAgain"
0x9F227A: mov     ecx, offset stru_B38B28; self
0x9F227F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F2284: push    offset sub_A21D70; void (__cdecl *)()
0x9F2289: call    _atexit
0x9F228E: pop     ecx
0x9F228F: retn
