0x9F1A40: push    offset aRequires_0; "Requires"
0x9F1A45: push    offset aSspellmakingre; "sSpellmakingRequire"
0x9F1A4A: mov     ecx, offset stru_B38978; self
0x9F1A4F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F1A54: push    offset sub_A21A10; void (__cdecl *)()
0x9F1A59: call    _atexit
0x9F1A5E: pop     ecx
0x9F1A5F: retn
