0x9F7870: push    offset aShaircolor11; "sHairColor11"
0x9F7875: push    offset aShaircolor11; "sHairColor11"
0x9F787A: mov     ecx, offset stru_B39390; self
0x9F787F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F7884: push    offset sub_A22E40; void (__cdecl *)()
0x9F7889: call    _atexit
0x9F788E: pop     ecx
0x9F788F: retn
