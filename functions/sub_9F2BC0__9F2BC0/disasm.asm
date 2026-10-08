0x9F2BC0: push    offset aSearch; "Search"
0x9F2BC5: push    offset aSsearch; "sSearch"
0x9F2BCA: mov     ecx, offset stru_B38D78; self
0x9F2BCF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F2BD4: push    offset sub_A22210; void (__cdecl *)()
0x9F2BD9: call    _atexit
0x9F2BDE: pop     ecx
0x9F2BDF: retn
