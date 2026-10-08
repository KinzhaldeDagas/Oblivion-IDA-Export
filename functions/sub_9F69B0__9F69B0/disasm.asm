0x9F69B0: push    offset aShape; "Shape"
0x9F69B5: push    offset aSshape; "sShape"
0x9F69BA: mov     ecx, offset stru_B38FE0; self
0x9F69BF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F69C4: push    offset sub_A226E0; void (__cdecl *)()
0x9F69C9: call    _atexit
0x9F69CE: pop     ecx
0x9F69CF: retn
