0x9F1020: push    offset aSave_0; "Save"
0x9F1025: push    offset aSmenudisplaysa; "sMenuDisplaySave"
0x9F102A: mov     ecx, offset stru_B386F0; self
0x9F102F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F1034: push    offset sub_A21500; void (__cdecl *)()
0x9F1039: call    _atexit
0x9F103E: pop     ecx
0x9F103F: retn
