0x9FA120: push    offset aMenusLevel_u_7; "Menus\\Level_up\\attributes_icons\\attr"...
0x9FA125: push    offset aSattributei_12; "sAttributeIconSmallEndurance"
0x9FA12A: mov     ecx, offset stru_B3A2E4; self
0x9FA12F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9FA134: push    offset sub_A23E00; void (__cdecl *)()
0x9FA139: call    _atexit
0x9FA13E: pop     ecx
0x9FA13F: retn
