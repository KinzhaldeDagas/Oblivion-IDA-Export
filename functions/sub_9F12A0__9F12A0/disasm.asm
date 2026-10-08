0x9F12A0: push    offset aQuicksaving___; "Quicksaving..."
0x9F12A5: push    offset aSquicksaving; "sQuickSaving"
0x9F12AA: mov     ecx, offset stru_B38790; self
0x9F12AF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F12B4: push    offset sub_A21640; void (__cdecl *)()
0x9F12B9: call    _atexit
0x9F12BE: pop     ecx
0x9F12BF: retn
