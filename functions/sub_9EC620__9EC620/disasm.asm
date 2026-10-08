0x9EC620: push    0Ah; defaultValue
0x9EC622: push    offset aIpersuasiondem; "iPersuasionDemandGold"
0x9EC627: mov     ecx, 0B37880h; self
0x9EC62C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EC631: push    offset sub_A1F820; void (__cdecl *)()
0x9EC636: call    _atexit
0x9EC63B: pop     ecx
0x9EC63C: retn
