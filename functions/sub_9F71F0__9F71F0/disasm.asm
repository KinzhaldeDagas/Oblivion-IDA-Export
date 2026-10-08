0x9F71F0: push    offset aNoseRegionConc; "Nose region concave/convex"
0x9F71F5: push    offset aSnoseregion; "sNoseregion"
0x9F71FA: mov     ecx, offset stru_B391F0; self
0x9F71FF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F7204: push    offset sub_A22B00; void (__cdecl *)()
0x9F7209: call    _atexit
0x9F720E: pop     ecx
0x9F720F: retn
