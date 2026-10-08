0x9DF4E0: push    offset aFredas; "Fredas"
0x9DF4E5: push    offset aSdayfredas; "sDayFredas"
0x9DF4EA: mov     ecx, 0B35174h; self
0x9DF4EF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DF4F4: push    offset sub_A1A030; void (__cdecl *)()
0x9DF4F9: call    _atexit
0x9DF4FE: pop     ecx
0x9DF4FF: retn
