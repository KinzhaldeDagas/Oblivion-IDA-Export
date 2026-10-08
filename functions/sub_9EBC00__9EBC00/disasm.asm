0x9EBC00: push    0Ah; defaultValue
0x9EBC02: push    offset aIcrimegoldminv; "iCrimeGoldMinValue"
0x9EBC07: mov     ecx, offset stru_B376B8; self
0x9EBC0C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EBC11: push    offset sub_A1F490; void (__cdecl *)()
0x9EBC16: call    _atexit
0x9EBC1B: pop     ecx
0x9EBC1C: retn
