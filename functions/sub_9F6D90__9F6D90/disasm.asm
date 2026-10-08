0x9F6D90: push    offset aChinForwardBac; "Chin forward/backward"
0x9F6D95: push    offset aSchinforward; "sChinforward"
0x9F6D9A: mov     ecx, offset stru_B390D8; self
0x9F6D9F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F6DA4: push    offset sub_A228D0; void (__cdecl *)()
0x9F6DA9: call    _atexit
0x9F6DAE: pop     ecx
0x9F6DAF: retn
