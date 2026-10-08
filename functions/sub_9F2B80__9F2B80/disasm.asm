0x9F2B80: push    offset aSteal; "Steal"
0x9F2B85: push    offset aSsteal; "sSteal"
0x9F2B8A: mov     ecx, offset stru_B38D68; self
0x9F2B8F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F2B94: push    offset sub_A221F0; void (__cdecl *)()
0x9F2B99: call    _atexit
0x9F2B9E: pop     ecx
0x9F2B9F: retn
