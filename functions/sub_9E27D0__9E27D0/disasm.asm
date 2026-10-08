0x9E27D0: push    5; defaultValue
0x9E27D2: push    offset aIarmorweighthe; "iArmorWeightHelmet"
0x9E27D7: mov     ecx, offset stru_B35AEC; self
0x9E27DC: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E27E1: push    offset sub_A1B6B0; void (__cdecl *)()
0x9E27E6: call    _atexit
0x9E27EB: pop     ecx
0x9E27EC: retn
