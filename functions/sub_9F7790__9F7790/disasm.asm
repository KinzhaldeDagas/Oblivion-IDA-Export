0x9F7790: push    offset aShaircolor4; "sHairColor4"
0x9F7795: push    offset aShaircolor4; "sHairColor4"
0x9F779A: mov     ecx, offset stru_B39358; self
0x9F779F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F77A4: push    offset sub_A22DD0; void (__cdecl *)()
0x9F77A9: call    _atexit
0x9F77AE: pop     ecx
0x9F77AF: retn
