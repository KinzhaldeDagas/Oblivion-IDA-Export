0x9F67D0: push    offset aOblivion; "OBLIVION"
0x9F67D5: push    offset aSoblivioncaps; "sOblivionCaps"
0x9F67DA: mov     ecx, offset stru_B38F68; self
0x9F67DF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F67E4: push    offset sub_A225F0; void (__cdecl *)()
0x9F67E9: call    _atexit
0x9F67EE: pop     ecx
0x9F67EF: retn
