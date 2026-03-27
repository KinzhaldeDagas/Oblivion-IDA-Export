0x9FA200: push    offset aMenusStatsS_11; "Menus\\Stats\\stat_pop_icon_armorer.dds"
0x9FA205: push    offset aSskilliconarmo; "sSkillIconArmorer"
0x9FA20A: mov     ecx, offset sSkillIconArmorer
0x9FA20F: call    GameSetting_ConstrAndReg
0x9FA214: push    offset sub_A23E70; void (__cdecl *)()
0x9FA219: call    _atexit
0x9FA21E: pop     ecx
0x9FA21F: retn
