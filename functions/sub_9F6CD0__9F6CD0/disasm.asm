0x9F6CD0: push    offset aBrowRidgeOuter; "Brow Ridge Outer up/down"
0x9F6CD5: push    offset aSbrowridgeoute; "sBrowRidgeOuter"
0x9F6CDA: mov     ecx, offset stru_B390A8; self
0x9F6CDF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F6CE4: push    offset sub_A22870; void (__cdecl *)()
0x9F6CE9: call    _atexit
0x9F6CEE: pop     ecx
0x9F6CEF: retn
