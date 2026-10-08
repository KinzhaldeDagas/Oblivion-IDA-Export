0x9DF440: push    offset aSundas; "Sundas"
0x9DF445: push    offset aSdaysundas; "sDaySundas"
0x9DF44A: mov     ecx, 0B3514Ch; self
0x9DF44F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DF454: push    offset sub_A19FE0; void (__cdecl *)()
0x9DF459: call    _atexit
0x9DF45E: pop     ecx
0x9DF45F: retn
