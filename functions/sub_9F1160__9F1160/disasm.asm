0x9F1160: push    offset aTheSaveGameIsC; "The save game is corrupt.  Returning to"...
0x9F1165: push    offset aSsavegameiscor; "sSaveGameIsCorrupt"
0x9F116A: mov     ecx, offset stru_B38740; self
0x9F116F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F1174: push    offset sub_A215A0; void (__cdecl *)()
0x9F1179: call    _atexit
0x9F117E: pop     ecx
0x9F117F: retn
