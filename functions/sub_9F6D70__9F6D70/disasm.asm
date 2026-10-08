0x9F6D70: push    offset aCheeksRoundGau; "Cheeks round/gaunt"
0x9F6D75: push    offset aScheeksround; "sCheeksround"
0x9F6D7A: mov     ecx, offset stru_B390D0; self
0x9F6D7F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F6D84: push    offset sub_A228C0; void (__cdecl *)()
0x9F6D89: call    _atexit
0x9F6D8E: pop     ecx
0x9F6D8F: retn
