0x9FA220: push    offset aMenusStatsS_12; "Menus\\Stats\\stat_pop_icon_athletics.d"...
0x9FA225: push    offset aSskilliconathl; "sSkillIconAthletics"
0x9FA22A: mov     ecx, 0B3A324h; self
0x9FA22F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9FA234: push    offset sub_A23E80; void (__cdecl *)()
0x9FA239: call    _atexit
0x9FA23E: pop     ecx
0x9FA23F: retn
