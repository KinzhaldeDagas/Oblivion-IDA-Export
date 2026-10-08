0x9F77F0: push    offset aShaircolor7; "sHairColor7"
0x9F77F5: push    offset aShaircolor7; "sHairColor7"
0x9F77FA: mov     ecx, offset stru_B39370; self
0x9F77FF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F7804: push    offset sub_A22E00; void (__cdecl *)()
0x9F7809: call    _atexit
0x9F780E: pop     ecx
0x9F780F: retn
