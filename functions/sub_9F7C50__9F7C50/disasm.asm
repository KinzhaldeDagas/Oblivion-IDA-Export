0x9F7C50: push    offset aNoNewContentAv; "No New Content Available"
0x9F7C55: push    offset aSdownloadsnota; "sDownloadsNotAvail"
0x9F7C5A: mov     ecx, offset stru_B39488; self
0x9F7C5F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F7C64: push    offset sub_A23030; void (__cdecl *)()
0x9F7C69: call    _atexit
0x9F7C6E: pop     ecx
0x9F7C6F: retn
