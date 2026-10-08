0x9F2BE0: push    offset aOff; defaultValue
0x9F2BE5: push    offset aSoff; "sOff"
0x9F2BEA: mov     ecx, offset stru_B38D80; self
0x9F2BEF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F2BF4: push    offset sub_A22220; void (__cdecl *)()
0x9F2BF9: call    _atexit
0x9F2BFE: pop     ecx
0x9F2BFF: retn
