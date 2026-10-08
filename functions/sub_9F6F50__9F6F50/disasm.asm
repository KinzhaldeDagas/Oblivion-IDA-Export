0x9F6F50: push    offset aJawRetractedJu; "Jaw retracted/jutting"
0x9F6F55: push    offset aSjawretracted; "sJawretracted"
0x9F6F5A: mov     ecx, offset stru_B39148; self
0x9F6F5F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F6F64: push    offset sub_A229B0; void (__cdecl *)()
0x9F6F69: call    _atexit
0x9F6F6E: pop     ecx
0x9F6F6F: retn
