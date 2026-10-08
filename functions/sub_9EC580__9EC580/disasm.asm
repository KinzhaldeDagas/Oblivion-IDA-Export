0x9EC580: push    14h; defaultValue
0x9EC582: push    offset aIpersuasionp_0; "iPersuasionPower2"
0x9EC587: mov     ecx, 0B37858h; self
0x9EC58C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EC591: push    offset sub_A1F7D0; void (__cdecl *)()
0x9EC596: call    _atexit
0x9EC59B: pop     ecx
0x9EC59C: retn
