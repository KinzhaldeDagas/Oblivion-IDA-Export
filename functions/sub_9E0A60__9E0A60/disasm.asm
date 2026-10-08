0x9E0A60: push    14h; defaultValue
0x9E0A62: push    offset aIaidefaultpo_0; "iAIDefaultPowerAttackNormalChance"
0x9E0A67: mov     ecx, offset stru_B35628; self
0x9E0A6C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E0A71: push    offset sub_A1AB80; void (__cdecl *)()
0x9E0A76: call    _atexit
0x9E0A7B: pop     ecx
0x9E0A7C: retn
