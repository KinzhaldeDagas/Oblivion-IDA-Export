0x9FA0A0: push    offset aMenusLevel_u_3; "Menus\\Level_up\\attributes_icons\\attr"...
0x9FA0A5: push    offset aSattributeic_8; "sAttributeIconSmallIntelligence"
0x9FA0AA: mov     ecx, offset stru_B3A2C4; self
0x9FA0AF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9FA0B4: push    offset sub_A23DC0; void (__cdecl *)()
0x9FA0B9: call    _atexit
0x9FA0BE: pop     ecx
0x9FA0BF: retn
