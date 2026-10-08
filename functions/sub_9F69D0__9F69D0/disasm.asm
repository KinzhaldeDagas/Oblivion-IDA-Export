0x9F69D0: push    offset aTone; "Tone"
0x9F69D5: push    offset aStone_0; "sTone"
0x9F69DA: mov     ecx, offset stru_B38FE8; self
0x9F69DF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F69E4: push    offset sub_A226F0; void (__cdecl *)()
0x9F69E9: call    _atexit
0x9F69EE: pop     ecx
0x9F69EF: retn
