0x9F2410: push    offset aEquipped__0; "equipped."
0x9F2415: push    offset aSquickkeyselec; "sQuickKeySelectedString"
0x9F241A: mov     ecx, offset stru_B38B90; self
0x9F241F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F2424: push    offset sub_A21E40; void (__cdecl *)()
0x9F2429: call    _atexit
0x9F242E: pop     ecx
0x9F242F: retn
