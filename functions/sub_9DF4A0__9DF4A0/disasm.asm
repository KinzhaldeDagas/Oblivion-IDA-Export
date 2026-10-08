0x9DF4A0: push    offset aMiddas; "Middas"
0x9DF4A5: push    offset aSdaymiddas; "sDayMiddas"
0x9DF4AA: mov     ecx, 0B35164h; self
0x9DF4AF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DF4B4: push    offset sub_A1A010; void (__cdecl *)()
0x9DF4B9: call    _atexit
0x9DF4BE: pop     ecx
0x9DF4BF: retn
