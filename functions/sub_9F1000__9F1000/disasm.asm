0x9F1000: push    offset aSaving___; "Saving..."
0x9F1005: push    offset aSmenudisplaysh; "sMenuDisplayShortXBoxSaveMessage"
0x9F100A: mov     ecx, offset stru_B386E8; self
0x9F100F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F1014: push    offset sub_A214F0; void (__cdecl *)()
0x9F1019: call    _atexit
0x9F101E: pop     ecx
0x9F101F: retn
