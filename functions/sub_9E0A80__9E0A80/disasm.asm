0x9E0A80: push    14h; defaultValue
0x9E0A82: push    offset aIaidefaultpo_1; "iAIDefaultPowerAttackForwardChance"
0x9E0A87: mov     ecx, offset stru_B35630; self
0x9E0A8C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E0A91: push    offset sub_A1AB90; void (__cdecl *)()
0x9E0A96: call    _atexit
0x9E0A9B: pop     ecx
0x9E0A9C: retn
