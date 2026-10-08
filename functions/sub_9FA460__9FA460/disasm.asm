0x9FA460: push    offset aMenusStatsS_30; "Menus\\Stats\\stat_pop_icon_sneak.dds"
0x9FA465: push    offset aSskilliconsnea; "sSkillIconSneak"
0x9FA46A: mov     ecx, offset stru_B3A3B4; self
0x9FA46F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9FA474: push    offset sub_A23FA0; void (__cdecl *)()
0x9FA479: call    _atexit
0x9FA47E: pop     ecx
0x9FA47F: retn
