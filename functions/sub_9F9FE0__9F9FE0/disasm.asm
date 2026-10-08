0x9F9FE0: push    offset aMenusStatsSt_2; "Menus\\Stats\\stat_pop_icon_agility.dds"
0x9F9FE5: push    offset aSattributeic_2; "sAttributeIconAgility"
0x9F9FEA: mov     ecx, offset stru_B3A294; self
0x9F9FEF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F9FF4: push    offset sub_A23D60; void (__cdecl *)()
0x9F9FF9: call    _atexit
0x9F9FFE: pop     ecx
0x9F9FFF: retn
