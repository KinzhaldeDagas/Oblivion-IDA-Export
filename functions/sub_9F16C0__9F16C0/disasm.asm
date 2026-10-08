0x9F16C0: push    offset aFilter_0; "Filter"
0x9F16C5: push    offset aSfilter; "sFilter"
0x9F16CA: mov     ecx, offset stru_B38898; self
0x9F16CF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F16D4: push    offset sub_A21850; void (__cdecl *)()
0x9F16D9: call    _atexit
0x9F16DE: pop     ecx
0x9F16DF: retn
