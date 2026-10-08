0x9F7C10: push    offset aNewContentAvai; "New Content Available"
0x9F7C15: push    offset aSdownloadsavai; "sDownloadsAvailable"
0x9F7C1A: mov     ecx, offset stru_B39478; self
0x9F7C1F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F7C24: push    offset sub_A23010; void (__cdecl *)()
0x9F7C29: call    _atexit
0x9F7C2E: pop     ecx
0x9F7C2F: retn
