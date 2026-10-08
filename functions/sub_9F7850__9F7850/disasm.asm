0x9F7850: push    offset aShaircolor10; "sHairColor10"
0x9F7855: push    offset aShaircolor10; "sHairColor10"
0x9F785A: mov     ecx, offset stru_B39388; self
0x9F785F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F7864: push    offset sub_A22E30; void (__cdecl *)()
0x9F7869: call    _atexit
0x9F786E: pop     ecx
0x9F786F: retn
