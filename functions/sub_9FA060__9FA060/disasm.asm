0x9FA060: push    offset aMenusStatsSt_6; "Menus\\Stats\\stat_pop_icon_luck.dds"
0x9FA065: push    offset aSattributeic_6; "sAttributeIconLuck"
0x9FA06A: mov     ecx, 0B3A2B4h; self
0x9FA06F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9FA074: push    offset sub_A23DA0; void (__cdecl *)()
0x9FA079: call    _atexit
0x9FA07E: pop     ecx
0x9FA07F: retn
