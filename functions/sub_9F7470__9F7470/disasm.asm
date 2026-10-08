0x9F7470: push    offset aEyelidsLightDa; "Eyelids light/dark"
0x9F7475: push    offset aSeyelidslight; "sEyelidslight"
0x9F747A: mov     ecx, offset stru_B39290; self
0x9F747F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F7484: push    offset sub_A22C40; void (__cdecl *)()
0x9F7489: call    _atexit
0x9F748E: pop     ecx
0x9F748F: retn
