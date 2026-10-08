0x9F6EB0: push    offset aEyesTiltInward; "Eyes tilt inward/outward"
0x9F6EB5: push    offset aSeyestilt; "sEyestilt"
0x9F6EBA: mov     ecx, offset stru_B39120; self
0x9F6EBF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F6EC4: push    offset sub_A22960; void (__cdecl *)()
0x9F6EC9: call    _atexit
0x9F6ECE: pop     ecx
0x9F6ECF: retn
