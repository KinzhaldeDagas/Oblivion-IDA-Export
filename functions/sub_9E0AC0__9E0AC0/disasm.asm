0x9E0AC0: push    14h; defaultValue
0x9E0AC2: push    offset aIaidefaultpo_3; "iAIDefaultPowerAttackLeftChance"
0x9E0AC7: mov     ecx, offset stru_B35640; self
0x9E0ACC: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E0AD1: push    offset sub_A1ABB0; void (__cdecl *)()
0x9E0AD6: call    _atexit
0x9E0ADB: pop     ecx
0x9E0ADC: retn
