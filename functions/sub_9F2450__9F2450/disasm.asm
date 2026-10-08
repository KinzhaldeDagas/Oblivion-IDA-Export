0x9F2450: push    offset aConsumed_; "consumed."
0x9F2455: push    offset aSquickkeyconsu; "sQuickKeyConsumed"
0x9F245A: mov     ecx, offset stru_B38BA0; self
0x9F245F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F2464: push    offset sub_A21E60; void (__cdecl *)()
0x9F2469: call    _atexit
0x9F246E: pop     ecx
0x9F246F: retn
