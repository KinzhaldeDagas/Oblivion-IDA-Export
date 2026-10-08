0x9FA080: push    offset aMenusLevel_upA; "Menus\\Level_up\\attributes_icons\\attr"...
0x9FA085: push    offset aSattributeic_7; "sAttributeIconSmallStrength"
0x9FA08A: mov     ecx, 0B3A2BCh; self
0x9FA08F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9FA094: push    offset sub_A23DB0; void (__cdecl *)()
0x9FA099: call    _atexit
0x9FA09E: pop     ecx
0x9FA09F: retn
