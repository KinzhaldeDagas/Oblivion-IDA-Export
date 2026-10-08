0x9F1620: push    offset aThisSoulGemIsE; "This soul gem is empty. You can only eq"...
0x9F1625: push    offset aSnosoulingem; "sNoSoulInGem"
0x9F162A: mov     ecx, offset stru_B38870; self
0x9F162F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F1634: push    offset sub_A21800; void (__cdecl *)()
0x9F1639: call    _atexit
0x9F163E: pop     ecx
0x9F163F: retn
