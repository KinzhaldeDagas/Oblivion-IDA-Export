0x9F6810: push    offset aRace; "Race"
0x9F6815: push    offset aSrace; "sRace"
0x9F681A: mov     ecx, offset stru_B38F78; self
0x9F681F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F6824: push    offset sub_A22610; void (__cdecl *)()
0x9F6829: call    _atexit
0x9F682E: pop     ecx
0x9F682F: retn
