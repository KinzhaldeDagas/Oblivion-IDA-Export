0x9EA3B0: push    19h; defaultValue
0x9EA3B2: push    offset aIperkhandtohan; "iPerkHandToHandBlockRecoilChance"
0x9EA3B7: mov     ecx, 0B37250h; self
0x9EA3BC: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EA3C1: push    offset sub_A1EBC0; void (__cdecl *)()
0x9EA3C6: call    _atexit
0x9EA3CB: pop     ecx
0x9EA3CC: retn
