0x9F9FA0: push    offset aMenusStatsSt_0; "Menus\\Stats\\stat_pop_icon_intelligenc"...
0x9F9FA5: push    offset aSattributeic_0; "sAttributeIconIntelligence"
0x9F9FAA: mov     ecx, offset stru_B3A284; self
0x9F9FAF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F9FB4: push    offset sub_A23D40; void (__cdecl *)()
0x9F9FB9: call    _atexit
0x9F9FBE: pop     ecx
0x9F9FBF: retn
