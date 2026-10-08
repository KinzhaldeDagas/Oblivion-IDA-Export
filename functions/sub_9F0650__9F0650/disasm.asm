0x9F0650: push    offset aSoulsTrapped; "Souls Trapped: "
0x9F0655: push    offset aSmiscsoulstrap; "sMiscSoulsTrapped"
0x9F065A: mov     ecx, 0B38480h; self
0x9F065F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F0664: push    offset sub_A21020; void (__cdecl *)()
0x9F0669: call    _atexit
0x9F066E: pop     ecx
0x9F066F: retn
