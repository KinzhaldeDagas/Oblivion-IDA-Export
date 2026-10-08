0x9FA320: push    offset aMenusStatsS_20; "Menus\\Stats\\stat_pop_icon_conjuration"...
0x9FA325: push    offset aSskilliconconj; "sSkillIconConjuration"
0x9FA32A: mov     ecx, 0B3A364h; self
0x9FA32F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9FA334: push    offset sub_A23F00; void (__cdecl *)()
0x9FA339: call    _atexit
0x9FA33E: pop     ecx
0x9FA33F: retn
