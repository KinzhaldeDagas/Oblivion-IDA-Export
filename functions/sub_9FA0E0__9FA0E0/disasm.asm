0x9FA0E0: push    offset aMenusLevel_u_5; "Menus\\Level_up\\attributes_icons\\attr"...
0x9FA0E5: push    offset aSattributei_10; "sAttributeIconSmallAgility"
0x9FA0EA: mov     ecx, offset stru_B3A2D4; self
0x9FA0EF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9FA0F4: push    offset sub_A23DE0; void (__cdecl *)()
0x9FA0F9: call    _atexit
0x9FA0FE: pop     ecx
0x9FA0FF: retn
