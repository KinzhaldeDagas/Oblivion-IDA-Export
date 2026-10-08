0x9F12C0: push    offset aQuickloading__; "Quickloading..."
0x9F12C5: push    offset aSquickloading; "sQuickLoading"
0x9F12CA: mov     ecx, offset stru_B38798; self
0x9F12CF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F12D4: push    offset sub_A21650; void (__cdecl *)()
0x9F12D9: call    _atexit
0x9F12DE: pop     ecx
0x9F12DF: retn
