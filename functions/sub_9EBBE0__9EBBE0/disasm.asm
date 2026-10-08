0x9EBBE0: push    19h; defaultValue
0x9EBBE2: push    offset aIcrimegoldstea; "iCrimeGoldStealHorse"
0x9EBBE7: mov     ecx, offset g_iCrimeGoldStealHorse_Value; self
0x9EBBEC: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EBBF1: push    offset sub_A1F480; void (__cdecl *)()
0x9EBBF6: call    _atexit
0x9EBBFB: pop     ecx
0x9EBBFC: retn
