0x9EB380: push    2Dh ; '-'; defaultValue
0x9EB382: push    offset aIhorseturndegr; "iHorseTurnDegreesPerSecond"
0x9EB387: mov     ecx, 0B37518h; self
0x9EB38C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EB391: push    offset sub_A1F150; void (__cdecl *)()
0x9EB396: call    _atexit
0x9EB39B: pop     ecx
0x9EB39C: retn
