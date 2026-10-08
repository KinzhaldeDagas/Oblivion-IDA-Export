0x9F22D0: push    offset aYouCannotFas_0; Static GameSetting constructor only; not the runtime validation callback.
0x9F22D5: push    offset aSnofasttrave_0; "sNoFastTravelCell"
0x9F22DA: mov     ecx, offset stru_B38B40; self
0x9F22DF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F22E4: push    offset sub_A21DA0; void (__cdecl *)()
0x9F22E9: call    _atexit
0x9F22EE: pop     ecx
0x9F22EF: retn
