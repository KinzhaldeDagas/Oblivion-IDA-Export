0x9F2D80: push    offset aCanTSummonWhil; "Can't summon while in water"
0x9F2D85: push    offset aScannotsummoni; "sCanNotSummonInWater"
0x9F2D8A: mov     ecx, 0B38DE8h; self
0x9F2D8F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F2D94: push    offset sub_A222F0; void (__cdecl *)()
0x9F2D99: call    _atexit
0x9F2D9E: pop     ecx
0x9F2D9F: retn
