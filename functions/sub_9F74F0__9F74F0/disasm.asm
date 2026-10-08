0x9F74F0: push    offset aEyesDarkBrownL; "Eyes dark brown/light blue"
0x9F74F5: push    offset aSeyesdark; "sEyesdark"
0x9F74FA: mov     ecx, offset stru_B392B0; self
0x9F74FF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F7504: push    offset sub_A22C80; void (__cdecl *)()
0x9F7509: call    _atexit
0x9F750E: pop     ecx
0x9F750F: retn
