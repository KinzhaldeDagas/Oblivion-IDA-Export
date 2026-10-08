0x9F2010: push    0; defaultValue
0x9F2012: push    offset aIallowrepairdu; "iAllowRepairDuringCombat"
0x9F2017: mov     ecx, offset stru_B38A90; self
0x9F201C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F2021: push    offset sub_A21C40; void (__cdecl *)()
0x9F2026: call    _atexit
0x9F202B: pop     ecx
0x9F202C: retn
