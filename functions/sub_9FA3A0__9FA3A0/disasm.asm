0x9FA3A0: push    offset aMenusStatsS_24; "Menus\\Stats\\stat_pop_icon_restoration"...
0x9FA3A5: push    offset aSskilliconrest; "sSkillIconRestoration"
0x9FA3AA: mov     ecx, offset sSkillIconRestoration
0x9FA3AF: call    GameSetting_ConstrAndReg
0x9FA3B4: push    offset sub_A23F40; void (__cdecl *)()
0x9FA3B9: call    _atexit
0x9FA3BE: pop     ecx
0x9FA3BF: retn
