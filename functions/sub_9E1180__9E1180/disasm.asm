0x9E1180: push    19h; defaultValue
0x9E1182: push    offset aIaidefaultrush; "iAIDefaultRushingAttackPercentChance"
0x9E1187: mov     ecx, offset stru_B35778; self
0x9E118C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E1191: push    offset sub_A1AE20; void (__cdecl *)()
0x9E1196: call    _atexit
0x9E119B: pop     ecx
0x9E119C: retn
