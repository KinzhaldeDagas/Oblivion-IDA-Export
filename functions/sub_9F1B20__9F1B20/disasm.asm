0x9F1B20: push    offset aYouMustFirstSe; "You must first select an item to enchan"...
0x9F1B25: push    offset aSnoitem; "sNoItem"
0x9F1B2A: mov     ecx, 0B389B0h; self
0x9F1B2F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F1B34: push    offset sub_A21A80; void (__cdecl *)()
0x9F1B39: call    _atexit
0x9F1B3E: pop     ecx
0x9F1B3F: retn
