0x9E8070: push    0Ah; defaultValue
0x9E8072: push    offset aIinventorymenu; "iInventoryMenuIdleDelay"
0x9E8077: mov     ecx, offset stru_B36BF0; self
0x9E807C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E8081: push    offset sub_A1DF00; void (__cdecl *)()
0x9E8086: call    _atexit
0x9E808B: pop     ecx
0x9E808C: retn
