0x9FA020: push    offset aMenusStatsSt_4; "Menus\\Stats\\stat_pop_icon_endurance.d"...
0x9FA025: push    offset aSattributeic_4; "sAttributeIconEndurance"
0x9FA02A: mov     ecx, offset stru_B3A2A4; self
0x9FA02F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9FA034: push    offset sub_A23D80; void (__cdecl *)()
0x9FA039: call    _atexit
0x9FA03E: pop     ecx
0x9FA03F: retn
