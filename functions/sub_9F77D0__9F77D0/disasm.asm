0x9F77D0: push    offset aShaircolor6; "sHairColor6"
0x9F77D5: push    offset aShaircolor6; "sHairColor6"
0x9F77DA: mov     ecx, offset stru_B39368; self
0x9F77DF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F77E4: push    offset sub_A22DF0; void (__cdecl *)()
0x9F77E9: call    _atexit
0x9F77EE: pop     ecx
0x9F77EF: retn
