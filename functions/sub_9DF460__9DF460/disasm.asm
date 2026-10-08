0x9DF460: push    offset aMorndas; "Morndas"
0x9DF465: push    offset aSdaymorndas; "sDayMorndas"
0x9DF46A: mov     ecx, 0B35154h; self
0x9DF46F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DF474: push    offset sub_A19FF0; void (__cdecl *)()
0x9DF479: call    _atexit
0x9DF47E: pop     ecx
0x9DF47F: retn
