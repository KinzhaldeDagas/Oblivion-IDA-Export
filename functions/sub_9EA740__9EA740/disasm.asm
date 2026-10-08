0x9EA740: push    offset aTheCreatureIsC; "The creature is calmed and cannot respo"...
0x9EA745: push    offset aSactivatecreat; "sActivateCreatureCalmed"
0x9EA74A: mov     ecx, 0B37300h; self
0x9EA74F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EA754: push    offset sub_A1ED20; void (__cdecl *)()
0x9EA759: call    _atexit
0x9EA75E: pop     ecx
0x9EA75F: retn
