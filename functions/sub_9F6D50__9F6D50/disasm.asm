0x9F6D50: push    offset aCheeksConcaveC; "Cheeks concave/convex"
0x9F6D55: push    offset aScheeksconcave; "sCheeksconcave"
0x9F6D5A: mov     ecx, offset stru_B390C8; self
0x9F6D5F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F6D64: push    offset sub_A228B0; void (__cdecl *)()
0x9F6D69: call    _atexit
0x9F6D6E: pop     ecx
0x9F6D6F: retn
