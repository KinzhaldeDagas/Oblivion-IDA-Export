0x9F7B70: push    offset aRandomizeFace?; "Randomize face?"
0x9F7B75: push    offset aSrandomizeface; "sRandomizeFace"
0x9F7B7A: mov     ecx, offset g_sRandomizeFace; self
0x9F7B7F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F7B84: push    offset sub_A22FC0; void (__cdecl *)()
0x9F7B89: call    _atexit
0x9F7B8E: pop     ecx
0x9F7B8F: retn
