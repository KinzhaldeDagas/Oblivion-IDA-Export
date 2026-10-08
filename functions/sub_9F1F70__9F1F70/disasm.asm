0x9F1F70: push    offset aYouCannotReadA; "You cannot read a book/scroll during co"...
0x9F1F75: push    offset aScannotreadboo; "sCanNotReadBood"
0x9F1F7A: mov     ecx, offset stru_B38A68; self
0x9F1F7F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F1F84: push    offset sub_A21BF0; void (__cdecl *)()
0x9F1F89: call    _atexit
0x9F1F8E: pop     ecx
0x9F1F8F: retn
