0x9F69F0: push    offset aRandom_0; "Random"
0x9F69F5: push    offset aSrandom; "sRandom"
0x9F69FA: mov     ecx, offset stru_B38FF0; self
0x9F69FF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F6A04: push    offset sub_A22700; void (__cdecl *)()
0x9F6A09: call    _atexit
0x9F6A0E: pop     ecx
0x9F6A0F: retn
