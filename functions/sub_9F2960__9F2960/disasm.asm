0x9F2960: push    offset aYouMustExitAnd; "You must exit and restart Oblivion for "...
0x9F2965: push    offset aSvideochange; "sVideoChange"
0x9F296A: mov     ecx, offset stru_B38CE0; self
0x9F296F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F2974: push    offset sub_A220E0; void (__cdecl *)()
0x9F2979: call    _atexit
0x9F297E: pop     ecx
0x9F297F: retn
