0x9F6EF0: push    offset aForeheadSmallL; "Forehead small/large"
0x9F6EF5: push    offset aSforeheadsmall; "sForeheadsmall"
0x9F6EFA: mov     ecx, offset stru_B39130; self
0x9F6EFF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F6F04: push    offset sub_A22980; void (__cdecl *)()
0x9F6F09: call    _atexit
0x9F6F0E: pop     ecx
0x9F6F0F: retn
