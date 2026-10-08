0x9F2AC0: push    offset aDone_0; "Done"
0x9F2AC5: push    offset aSdone; "sDone"
0x9F2ACA: mov     ecx, 0B38D38h; self
0x9F2ACF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F2AD4: push    offset sub_A22190; void (__cdecl *)()
0x9F2AD9: call    _atexit
0x9F2ADE: pop     ecx
0x9F2ADF: retn
