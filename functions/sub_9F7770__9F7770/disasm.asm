0x9F7770: push    offset aShaircolor3; "sHairColor3"
0x9F7775: push    offset aShaircolor3; "sHairColor3"
0x9F777A: mov     ecx, offset stru_B39350; self
0x9F777F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F7784: push    offset sub_A22DC0; void (__cdecl *)()
0x9F7789: call    _atexit
0x9F778E: pop     ecx
0x9F778F: retn
