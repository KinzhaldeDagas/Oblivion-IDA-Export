0x9F2D00: push    offset aCreaturesNever; "Creatures never accept a yield!"
0x9F2D05: push    offset aScreaturesdont; "sCreaturesDontYield"
0x9F2D0A: mov     ecx, 0B38DC8h; self
0x9F2D0F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F2D14: push    offset sub_A222B0; void (__cdecl *)()
0x9F2D19: call    _atexit
0x9F2D1E: pop     ecx
0x9F2D1F: retn
