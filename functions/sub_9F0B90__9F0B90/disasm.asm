0x9F0B90: push    offset aSort; "Sort"
0x9F0B95: push    offset aSsort; "sSort"
0x9F0B9A: mov     ecx, offset stru_B385D0; self
0x9F0B9F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F0BA4: push    offset sub_A212C0; void (__cdecl *)()
0x9F0BA9: call    _atexit
0x9F0BAE: pop     ecx
0x9F0BAF: retn
