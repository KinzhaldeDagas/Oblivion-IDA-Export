0x9F2500: push    offset aUses; "Uses"
0x9F2505: push    offset aSmiscuses; "sMiscUses"
0x9F250A: mov     ecx, 0B38BC8h; self
0x9F250F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F2514: push    offset sub_A21EB0; void (__cdecl *)()
0x9F2519: call    _atexit
0x9F251E: pop     ecx
0x9F251F: retn
