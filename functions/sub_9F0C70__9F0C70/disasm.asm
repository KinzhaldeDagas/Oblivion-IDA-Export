0x9F0C70: push    offset aMenusLevel_u_0; "Menus\\Level_up\\class_creation\\class_"...
0x9F0C75: push    offset aScombatimage; "sCombatImage"
0x9F0C7A: mov     ecx, offset stru_B38608; self
0x9F0C7F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F0C84: push    offset sub_A21330; void (__cdecl *)()
0x9F0C89: call    _atexit
0x9F0C8E: pop     ecx
0x9F0C8F: retn
