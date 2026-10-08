0x9DF480: push    offset aTirdas; "Tirdas"
0x9DF485: push    offset aSdaytirdas; "sDayTirdas"
0x9DF48A: mov     ecx, 0B3515Ch; self
0x9DF48F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DF494: push    offset sub_A1A000; void (__cdecl *)()
0x9DF499: call    _atexit
0x9DF49E: pop     ecx
0x9DF49F: retn
