0x9FA440: push    offset aMenusStatsS_29; "Menus\\Stats\\stat_pop_icon_security.dd"...
0x9FA445: push    offset aSskilliconsecu; "sSkillIconSecurity"
0x9FA44A: mov     ecx, 0B3A3ACh; self
0x9FA44F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9FA454: push    offset sub_A23F90; void (__cdecl *)()
0x9FA459: call    _atexit
0x9FA45E: pop     ecx
0x9FA45F: retn
