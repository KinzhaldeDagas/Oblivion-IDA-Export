0x9EA250: push    5; defaultValue
0x9EA252: push    offset aIainpcracepowe; "iAINPCRacePowerChance"
0x9EA257: mov     ecx, offset stru_B37200; self
0x9EA25C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EA261: push    offset sub_A1EB20; void (__cdecl *)()
0x9EA266: call    _atexit
0x9EA26B: pop     ecx
0x9EA26C: retn
