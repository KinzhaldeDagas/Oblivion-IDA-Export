0x9F0C90: push    offset aMenusLevel_u_1; "Menus\\Level_up\\class_creation\\class_"...
0x9F0C95: push    offset aSmagicimage; "sMagicImage"
0x9F0C9A: mov     ecx, offset stru_B38610; self
0x9F0C9F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F0CA4: push    offset sub_A21340; void (__cdecl *)()
0x9F0CA9: call    _atexit
0x9F0CAE: pop     ecx
0x9F0CAF: retn
