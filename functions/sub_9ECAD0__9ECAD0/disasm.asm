0x9ECAD0: push    5; defaultValue
0x9ECAD2: push    offset aIpersuasionb_0; "iPersuasionBribeScale"
0x9ECAD7: mov     ecx, 0B37958h; self
0x9ECADC: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9ECAE1: push    offset sub_A1F9D0; void (__cdecl *)()
0x9ECAE6: call    _atexit
0x9ECAEB: pop     ecx
0x9ECAEC: retn
