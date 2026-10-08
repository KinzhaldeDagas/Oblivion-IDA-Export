0x9EDBC0: push    237A8h; defaultValue
0x9EDBC5: push    offset aIclassacrobat; "iClassAcrobat"
0x9EDBCA: mov     ecx, 0B37C48h; self
0x9EDBCF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EDBD4: push    offset sub_A1FFB0; void (__cdecl *)()
0x9EDBD9: call    _atexit
0x9EDBDE: pop     ecx
0x9EDBDF: retn
