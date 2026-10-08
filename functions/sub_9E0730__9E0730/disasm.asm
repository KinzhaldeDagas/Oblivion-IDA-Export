0x9E0730: push    4Bh ; 'K'; defaultValue
0x9E0732: push    offset aIaidefaultdodg; "iAIDefaultDodgeChance"
0x9E0737: mov     ecx, offset stru_B35590; self
0x9E073C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E0741: push    offset sub_A1AA50; void (__cdecl *)()
0x9E0746: call    _atexit
0x9E074B: pop     ecx
0x9E074C: retn
