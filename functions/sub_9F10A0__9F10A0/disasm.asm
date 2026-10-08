0x9F10A0: push    offset aQuicksave_0; "Quicksave"
0x9F10A5: push    offset aSmenudisplayqu; "sMenuDisplayQuicksaveName"
0x9F10AA: mov     ecx, offset stru_B38710; self
0x9F10AF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F10B4: push    offset sub_A21540; void (__cdecl *)()
0x9F10B9: call    _atexit
0x9F10BE: pop     ecx
0x9F10BF: retn
