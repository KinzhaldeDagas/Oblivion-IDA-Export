0x9F6B50: push    offset aSkin_0; "Skin"
0x9F6B55: push    offset aSskin; "sSkin"
0x9F6B5A: mov     ecx, offset stru_B39048; self
0x9F6B5F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F6B64: push    offset sub_A227B0; void (__cdecl *)()
0x9F6B69: call    _atexit
0x9F6B6E: pop     ecx
0x9F6B6F: retn
