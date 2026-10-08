0x9F7690: push    offset aNaresSmallLarg; "Nares small/large"
0x9F7695: push    offset aSnares; "sNares"
0x9F769A: mov     ecx, offset stru_B39318; self
0x9F769F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F76A4: push    offset sub_A22D50; void (__cdecl *)()
0x9F76A9: call    _atexit
0x9F76AE: pop     ecx
0x9F76AF: retn
