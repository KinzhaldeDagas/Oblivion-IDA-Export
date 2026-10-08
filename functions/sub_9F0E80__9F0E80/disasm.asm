0x9F0E80: push    3; defaultValue
0x9F0E82: push    offset aIinventoryaskq; "iInventoryAskQuantityAt"
0x9F0E87: mov     ecx, offset stru_B38688; self
0x9F0E8C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F0E91: push    offset sub_A21430; void (__cdecl *)()
0x9F0E96: call    _atexit
0x9F0E9B: pop     ecx
0x9F0E9C: retn
