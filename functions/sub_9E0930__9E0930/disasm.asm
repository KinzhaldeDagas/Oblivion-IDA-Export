0x9E0930: push    28h ; '('; defaultValue
0x9E0932: push    offset aIaidefaultatta; "iAIDefaultAttackChance"
0x9E0937: mov     ecx, offset stru_B355F0; self
0x9E093C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E0941: push    offset sub_A1AB10; void (__cdecl *)()
0x9E0946: call    _atexit
0x9E094B: pop     ecx
0x9E094C: retn
