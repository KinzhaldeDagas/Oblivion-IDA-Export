0x9F22B0: push    offset aYouCannotFastT; Static GameSetting constructor only; not the runtime validation callback.
0x9F22B5: push    offset aSnofasttravelc; "sNoFastTravelCombat"
0x9F22BA: mov     ecx, offset stru_B38B38; self
0x9F22BF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F22C4: push    offset sub_A21D90; void (__cdecl *)()
0x9F22C9: call    _atexit
0x9F22CE: pop     ecx
0x9F22CF: retn
