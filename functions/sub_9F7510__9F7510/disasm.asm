0x9F7510: push    offset aEyesWhitesDimB; "Eyes whites dim/bright"
0x9F7515: push    offset aSeyeswhites; "sEyeswhites"
0x9F751A: mov     ecx, offset stru_B392B8; self
0x9F751F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F7524: push    offset sub_A22C90; void (__cdecl *)()
0x9F7529: call    _atexit
0x9F752E: pop     ecx
0x9F752F: retn
