0x9F0870: push    offset aOblivionGatesS; "Oblivion Gates Shut: "
0x9F0875: push    offset aSmiscobliviong; "sMiscOblivionGatesShut"
0x9F087A: mov     ecx, offset stru_B38508; self
0x9F087F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F0884: push    offset sub_A21130; void (__cdecl *)()
0x9F0889: call    _atexit
0x9F088E: pop     ecx
0x9F088F: retn
