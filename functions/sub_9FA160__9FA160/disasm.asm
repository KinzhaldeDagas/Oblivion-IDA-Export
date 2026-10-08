0x9FA160: push    offset aMenusLevel_u_9; "Menus\\Level_up\\attributes_icons\\attr"...
0x9FA165: push    offset aSattributei_14; "sAttributeIconSmallLuck"
0x9FA16A: mov     ecx, 0B3A2F4h; self
0x9FA16F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9FA174: push    offset sub_A23E20; void (__cdecl *)()
0x9FA179: call    _atexit
0x9FA17E: pop     ecx
0x9FA17F: retn
