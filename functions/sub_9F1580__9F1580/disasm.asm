0x9F1580: push    offset aRepairAll; "Repair all"
0x9F1585: push    offset aSrepairall; "sRepairAll"
0x9F158A: mov     ecx, offset stru_B38848; self
0x9F158F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F1594: push    offset sub_A217B0; void (__cdecl *)()
0x9F1599: call    _atexit
0x9F159E: pop     ecx
0x9F159F: retn
