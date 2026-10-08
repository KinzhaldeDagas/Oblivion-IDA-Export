0x9F10E0: push    offset aLevel_0; "Level"
0x9F10E5: push    offset aSmenudisplayle; "sMenuDisplayLevelString"
0x9F10EA: mov     ecx, offset stru_B38720; self
0x9F10EF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F10F4: push    offset sub_A21560; void (__cdecl *)()
0x9F10F9: call    _atexit
0x9F10FE: pop     ecx
0x9F10FF: retn
