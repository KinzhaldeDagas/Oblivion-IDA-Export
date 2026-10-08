0x9F6C90: push    offset aBrowRidgeHighL; "Brow Ridge high/low"
0x9F6C95: push    offset aSbrowridge; "sBrowRidge"
0x9F6C9A: mov     ecx, offset stru_B39098; self
0x9F6C9F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F6CA4: push    offset sub_A22850; void (__cdecl *)()
0x9F6CA9: call    _atexit
0x9F6CAE: pop     ecx
0x9F6CAF: retn
