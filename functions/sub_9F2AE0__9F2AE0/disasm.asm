0x9F2AE0: push    offset aSmall; "Small"
0x9F2AE5: push    offset aSsmall; "sSmall"
0x9F2AEA: mov     ecx, 0B38D40h; self
0x9F2AEF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F2AF4: push    offset sub_A221A0; void (__cdecl *)()
0x9F2AF9: call    _atexit
0x9F2AFE: pop     ecx
0x9F2AFF: retn
