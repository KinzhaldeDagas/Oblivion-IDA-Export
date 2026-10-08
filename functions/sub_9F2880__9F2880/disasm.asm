0x9F2880: push    offset aMainMenu; "Main Menu"
0x9F2885: push    offset aSmainmenu; "sMainMenu"
0x9F288A: mov     ecx, offset stru_B38CA8; self
0x9F288F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F2894: push    offset sub_A22070; void (__cdecl *)()
0x9F2899: call    _atexit
0x9F289E: pop     ecx
0x9F289F: retn
