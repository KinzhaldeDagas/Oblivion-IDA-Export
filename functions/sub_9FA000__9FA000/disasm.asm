0x9FA000: push    offset aMenusStatsSt_3; "Menus\\Stats\\stat_pop_icon_speed.dds"
0x9FA005: push    offset aSattributeic_3; "sAttributeIconSpeed"
0x9FA00A: mov     ecx, offset stru_B3A29C; self
0x9FA00F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9FA014: push    offset sub_A23D70; void (__cdecl *)()
0x9FA019: call    _atexit
0x9FA01E: pop     ecx
0x9FA01F: retn
