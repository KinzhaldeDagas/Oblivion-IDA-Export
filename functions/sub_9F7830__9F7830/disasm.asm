0x9F7830: push    offset aShaircolor9; "sHairColor9"
0x9F7835: push    offset aShaircolor9; "sHairColor9"
0x9F783A: mov     ecx, offset stru_B39380; self
0x9F783F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F7844: push    offset sub_A22E20; void (__cdecl *)()
0x9F7849: call    _atexit
0x9F784E: pop     ecx
0x9F784F: retn
