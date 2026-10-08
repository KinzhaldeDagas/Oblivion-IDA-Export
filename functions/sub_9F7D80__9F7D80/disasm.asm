0x9F7D80: push    96h ; '–'; defaultValue
0x9F7D85: push    offset aIquickkeyignor; "iQuickKeyIgnoreMillis"
0x9F7D8A: mov     ecx, offset stru_B394C8; self
0x9F7D8F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F7D94: push    offset sub_A230B0; void (__cdecl *)()
0x9F7D99: call    _atexit
0x9F7D9E: pop     ecx
0x9F7D9F: retn
