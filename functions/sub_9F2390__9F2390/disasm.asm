0x9F2390: push    offset aCharacters__14; "Characters\\_Male\\Skeleton.NIF"
0x9F2395: push    offset aSnpcmodel; "sNPCModel"
0x9F239A: mov     ecx, offset stru_B38B70; self
0x9F239F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F23A4: push    offset sub_A21E00; void (__cdecl *)()
0x9F23A9: call    _atexit
0x9F23AE: pop     ecx
0x9F23AF: retn
