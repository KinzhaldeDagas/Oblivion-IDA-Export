0x9FA3A0: push    offset aMenusStatsS_24; "Menus\\Stats\\stat_pop_icon_restoration"...
0x9FA3A5: push    offset aSskilliconrest; "sSkillIconRestoration"
0x9FA3AA: mov     ecx, 0B3A384h; self
0x9FA3AF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9FA3B4: push    offset sub_A23F40; void (__cdecl *)()
0x9FA3B9: call    _atexit
0x9FA3BE: pop     ecx
0x9FA3BF: retn
