0x9EDFA0: push    96h ; '–'; defaultValue
0x9EDFA5: push    offset aIactivatepickl; "iActivatePickLength"
0x9EDFAA: mov     ecx, offset stru_B37D30; self
0x9EDFAF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EDFB4: push    offset sub_A20180; void (__cdecl *)()
0x9EDFB9: call    _atexit
0x9EDFBE: pop     ecx
0x9EDFBF: retn
