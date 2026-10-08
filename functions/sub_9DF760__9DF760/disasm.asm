0x9DF760: push    offset aWinter; "Winter"
0x9DF765: push    offset aSseasonwinter; "sSeasonWinter"
0x9DF76A: mov     ecx, 0B35214h; self
0x9DF76F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DF774: push    offset sub_A1A170; void (__cdecl *)()
0x9DF779: call    _atexit
0x9DF77E: pop     ecx
0x9DF77F: retn
