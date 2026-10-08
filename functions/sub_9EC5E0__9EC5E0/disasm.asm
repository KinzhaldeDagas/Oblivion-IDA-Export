0x9EC5E0: push    5Ah ; 'Z'; defaultValue
0x9EC5E2: push    offset aIpersuasiona_0; "iPersuasionAngleMax"
0x9EC5E7: mov     ecx, 0B37870h; self
0x9EC5EC: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EC5F1: push    offset sub_A1F800; void (__cdecl *)()
0x9EC5F6: call    _atexit
0x9EC5FB: pop     ecx
0x9EC5FC: retn
