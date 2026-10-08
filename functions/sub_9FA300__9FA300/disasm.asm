0x9FA300: push    offset aMenusStatsS_19; "Menus\\Stats\\stat_pop_icon_alteration."...
0x9FA305: push    offset aSskilliconalte; "sSkillIconAlteration"
0x9FA30A: mov     ecx, offset stru_B3A35C; self
0x9FA30F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9FA314: push    offset sub_A23EF0; void (__cdecl *)()
0x9FA319: call    _atexit
0x9FA31E: pop     ecx
0x9FA31F: retn
