0x9F0610: push    offset aHorsesStolen; "Horses Stolen: "
0x9F0615: push    offset aSmiscnumhorses; "sMiscNumHorsesStolen"
0x9F061A: mov     ecx, 0B38470h; self
0x9F061F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F0624: push    offset sub_A21000; void (__cdecl *)()
0x9F0629: call    _atexit
0x9F062E: pop     ecx
0x9F062F: retn
