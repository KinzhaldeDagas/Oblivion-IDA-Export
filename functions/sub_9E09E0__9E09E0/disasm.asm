0x9E09E0: push    19h; defaultValue
0x9E09E2: push    offset aIaidefaultpowe; "iAIDefaultPowerAttackChance"
0x9E09E7: mov     ecx, offset stru_B35610; self
0x9E09EC: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E09F1: push    offset sub_A1AB50; void (__cdecl *)()
0x9E09F6: call    _atexit
0x9E09FB: pop     ecx
0x9E09FC: retn
