0x9EF8D0: push    19h; defaultValue
0x9EF8D2: push    offset aIshocksegments; "iShockSegmentsPerBolt"
0x9EF8D7: mov     ecx, (offset flt_B37ED0+2B8h); self
0x9EF8DC: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EF8E1: push    offset sub_A20A30; void (__cdecl *)()
0x9EF8E6: call    _atexit
0x9EF8EB: pop     ecx
0x9EF8EC: retn
