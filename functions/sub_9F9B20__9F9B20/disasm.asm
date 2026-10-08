0x9F9B20: push    offset aFame_0; "Fame"
0x9F9B25: push    offset aSvirtuenamefam; "sVirtueNameFame"
0x9F9B2A: mov     ecx, 0B3A164h; self
0x9F9B2F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F9B34: push    offset sub_A23B00; void (__cdecl *)()
0x9F9B39: call    _atexit
0x9F9B3E: pop     ecx
0x9F9B3F: retn
