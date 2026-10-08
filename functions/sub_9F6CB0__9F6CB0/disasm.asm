0x9F6CB0: push    offset aBrowRidgeInner; "Brow Ridge Inner up/down"
0x9F6CB5: push    offset aSbrowridgeinne; "sBrowRidgeInner"
0x9F6CBA: mov     ecx, offset stru_B390A0; self
0x9F6CBF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F6CC4: push    offset sub_A22860; void (__cdecl *)()
0x9F6CC9: call    _atexit
0x9F6CCE: pop     ecx
0x9F6CCF: retn
