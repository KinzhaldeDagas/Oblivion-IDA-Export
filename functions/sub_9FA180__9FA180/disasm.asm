0x9FA180: push    offset aMenusStatsSt_7; "Menus\\Stats\\stat_pop_icon_health.dds"
0x9FA185: push    offset aSderivedattr_7; "sDerivedAttributeIconHealth"
0x9FA18A: mov     ecx, 0B3A2FCh; self
0x9FA18F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9FA194: push    offset sub_A23E30; void (__cdecl *)()
0x9FA199: call    _atexit
0x9FA19E: pop     ecx
0x9FA19F: retn
