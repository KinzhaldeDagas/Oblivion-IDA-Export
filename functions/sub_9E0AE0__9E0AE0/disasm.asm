0x9E0AE0: push    14h; defaultValue
0x9E0AE2: push    offset aIaidefaultpo_4; "iAIDefaultPowerAttackRightChance"
0x9E0AE7: mov     ecx, offset stru_B35648; self
0x9E0AEC: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E0AF1: push    offset sub_A1ABC0; void (__cdecl *)()
0x9E0AF6: call    _atexit
0x9E0AFB: pop     ecx
0x9E0AFC: retn
