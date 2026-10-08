0x9E4180: push    offset aCombat_0; "Combat"
0x9E4185: push    offset aSspecnamecomba; "sSpecNameCombat"
0x9E418A: mov     ecx, 0B364E8h; self
0x9E418F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E4194: push    offset sub_A1C4A0; void (__cdecl *)()
0x9E4199: call    _atexit
0x9E419E: pop     ecx
0x9E419F: retn
