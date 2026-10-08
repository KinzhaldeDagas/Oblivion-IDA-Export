0x9F1040: push    offset aPlayTime; "Play Time"
0x9F1045: push    offset aSmenudisplaypl; "sMenuDisplayPlayTime"
0x9F104A: mov     ecx, offset stru_B386F8; self
0x9F104F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F1054: push    offset sub_A21510; void (__cdecl *)()
0x9F1059: call    _atexit
0x9F105E: pop     ecx
0x9F105F: retn
