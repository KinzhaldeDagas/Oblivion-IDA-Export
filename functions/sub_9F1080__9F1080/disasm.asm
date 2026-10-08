0x9F1080: push    offset aNewSave; "New Save"
0x9F1085: push    offset aSmenudisplayne; "sMenuDisplayNewSave"
0x9F108A: mov     ecx, offset stru_B38708; self
0x9F108F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F1094: push    offset sub_A21530; void (__cdecl *)()
0x9F1099: call    _atexit
0x9F109E: pop     ecx
0x9F109F: retn
