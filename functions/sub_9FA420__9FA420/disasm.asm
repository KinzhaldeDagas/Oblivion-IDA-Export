0x9FA420: push    offset aMenusStatsS_28; "Menus\\Stats\\stat_pop_icon_mercantile."...
0x9FA425: push    offset aSskilliconmerc; "sSkillIconMercantile"
0x9FA42A: mov     ecx, offset sSkillIconMercantile
0x9FA42F: call    GameSetting_ConstrAndReg
0x9FA434: push    offset sub_A23F80; void (__cdecl *)()
0x9FA439: call    _atexit
0x9FA43E: pop     ecx
0x9FA43F: retn
