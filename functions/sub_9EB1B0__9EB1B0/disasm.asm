0x9EB1B0: push    23h ; '#'; defaultValue
0x9EB1B2: push    offset aIperkheavyar_0; "iPerkHeavyArmorSinkSum"
0x9EB1B7: mov     ecx, 0B374C8h; self
0x9EB1BC: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EB1C1: push    offset sub_A1F0B0; void (__cdecl *)()
0x9EB1C6: call    _atexit
0x9EB1CB: pop     ecx
0x9EB1CC: retn
