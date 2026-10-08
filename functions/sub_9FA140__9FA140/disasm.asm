0x9FA140: push    offset aMenusLevel_u_8; "Menus\\Level_up\\attributes_icons\\attr"...
0x9FA145: push    offset aSattributei_13; "sAttributeIconSmallPersonality"
0x9FA14A: mov     ecx, offset stru_B3A2EC; self
0x9FA14F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9FA154: push    offset sub_A23E10; void (__cdecl *)()
0x9FA159: call    _atexit
0x9FA15E: pop     ecx
0x9FA15F: retn
