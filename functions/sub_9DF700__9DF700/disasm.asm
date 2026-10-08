0x9DF700: push    offset aSpring; "Spring"
0x9DF705: push    offset aSseasonspring; "sSeasonSpring"
0x9DF70A: mov     ecx, 0B351FCh; self
0x9DF70F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DF714: push    offset sub_A1A140; void (__cdecl *)()
0x9DF719: call    _atexit
0x9DF71E: pop     ecx
0x9DF71F: retn
