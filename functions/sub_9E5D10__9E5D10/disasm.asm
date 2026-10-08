0x9E5D10: push    5Eh ; '^'; defaultValue
0x9E5D12: push    offset aImassersize; "iMasserSize"
0x9E5D17: mov     ecx, offset stru_B365F0; self
0x9E5D1C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E5D21: push    offset sub_A1D2B0; void (__cdecl *)()
0x9E5D26: call    _atexit
0x9E5D2B: pop     ecx
0x9E5D2C: retn
