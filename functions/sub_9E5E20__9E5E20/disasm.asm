0x9E5E20: push    28h ; '('; defaultValue
0x9E5E22: push    offset aIsecundasize; "iSecundaSize"
0x9E5E27: mov     ecx, offset stru_B36620; self
0x9E5E2C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E5E31: push    offset sub_A1D310; void (__cdecl *)()
0x9E5E36: call    _atexit
0x9E5E3B: pop     ecx
0x9E5E3C: retn
