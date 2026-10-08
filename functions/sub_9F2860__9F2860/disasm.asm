0x9F2860: push    offset aAreYouSureYo_7; "Are you sure you want to exit the game?"...
0x9F2865: push    offset aSquitpastmainm; "sQuitPastMainMenu"
0x9F286A: mov     ecx, offset stru_B38CA0; self
0x9F286F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F2874: push    offset sub_A22060; void (__cdecl *)()
0x9F2879: call    _atexit
0x9F287E: pop     ecx
0x9F287F: retn
