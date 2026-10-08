0x9F2B20: push    offset aLarge; "Large"
0x9F2B25: push    offset aSlarge; "sLarge"
0x9F2B2A: mov     ecx, offset stru_B38D50; self
0x9F2B2F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F2B34: push    offset sub_A221C0; void (__cdecl *)()
0x9F2B39: call    _atexit
0x9F2B3E: pop     ecx
0x9F2B3F: retn
