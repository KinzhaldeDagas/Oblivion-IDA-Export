0x9F6E30: push    offset aChinTallShort; "Chin tall/short"
0x9F6E35: push    offset aSchintall; "sChintall"
0x9F6E3A: mov     ecx, offset stru_B39100; self
0x9F6E3F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F6E44: push    offset sub_A22920; void (__cdecl *)()
0x9F6E49: call    _atexit
0x9F6E4E: pop     ecx
0x9F6E4F: retn
