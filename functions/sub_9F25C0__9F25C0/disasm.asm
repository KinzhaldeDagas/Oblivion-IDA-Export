0x9F25C0: push    offset aLoadingArea___; "Loading area..."
0x9F25C5: push    offset aSloadingarea; "sLoadingArea"
0x9F25CA: mov     ecx, offset stru_B38BF8; self
0x9F25CF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F25D4: push    offset sub_A21F10; void (__cdecl *)()
0x9F25D9: call    _atexit
0x9F25DE: pop     ecx
0x9F25DF: retn
