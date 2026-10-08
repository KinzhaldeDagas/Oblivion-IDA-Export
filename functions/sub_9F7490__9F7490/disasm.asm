0x9F7490: push    offset aEyelidsPaleRed; "Eyelids pale/red"
0x9F7495: push    offset aSeyelidspale; "sEyelidspale"
0x9F749A: mov     ecx, offset stru_B39298; self
0x9F749F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F74A4: push    offset sub_A22C50; void (__cdecl *)()
0x9F74A9: call    _atexit
0x9F74AE: pop     ecx
0x9F74AF: retn
