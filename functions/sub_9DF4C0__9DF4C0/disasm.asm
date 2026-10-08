0x9DF4C0: push    offset aTurdas; "Turdas"
0x9DF4C5: push    offset aSdayturdas; "sDayTurdas"
0x9DF4CA: mov     ecx, 0B3516Ch; self
0x9DF4CF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DF4D4: push    offset sub_A1A020; void (__cdecl *)()
0x9DF4D9: call    _atexit
0x9DF4DE: pop     ecx
0x9DF4DF: retn
