0x9F2A60: push    offset aGold; "gold"
0x9F2A65: push    offset aSgold; "sGold"
0x9F2A6A: mov     ecx, offset stru_B38D20; self
0x9F2A6F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F2A74: push    offset sub_A22160; void (__cdecl *)()
0x9F2A79: call    _atexit
0x9F2A7E: pop     ecx
0x9F2A7F: retn
