0x9FA380: push    offset aMenusStatsS_23; "Menus\\Stats\\stat_pop_icon_mysticism.d"...
0x9FA385: push    offset aSskilliconmyst; "sSkillIconMysticism"
0x9FA38A: mov     ecx, offset stru_B3A37C; self
0x9FA38F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9FA394: push    offset sub_A23F30; void (__cdecl *)()
0x9FA399: call    _atexit
0x9FA39E: pop     ecx
0x9FA39F: retn
