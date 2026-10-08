0x9F04F0: push    offset aLocksPicked; "Locks Picked: "
0x9F04F5: push    offset aSmiscnumlocksp; "sMiscNumLocksPicked"
0x9F04FA: mov     ecx, 0B38428h; self
0x9F04FF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F0504: push    offset sub_A20F70; void (__cdecl *)()
0x9F0509: call    _atexit
0x9F050E: pop     ecx
0x9F050F: retn
