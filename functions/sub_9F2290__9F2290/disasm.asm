0x9F2290: push    offset aDoYouJustWantT; "Do you just want to serve your time?"
0x9F2295: push    offset aSservetimeques; "sServeTimeQuestion"
0x9F229A: mov     ecx, 0B38B30h; self
0x9F229F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F22A4: push    offset sub_A21D80; void (__cdecl *)()
0x9F22A9: call    _atexit
0x9F22AE: pop     ecx
0x9F22AF: retn
