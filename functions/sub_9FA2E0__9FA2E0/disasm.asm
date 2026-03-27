0x9FA2E0: push    offset aMenusStatsS_18; "Menus\\Stats\\stat_pop_icon_alchemy.dds"
0x9FA2E5: push    offset aSskilliconalch; "sSkillIconAlchemy"
0x9FA2EA: mov     ecx, offset sSkillIconAlchemy
0x9FA2EF: call    GameSetting_ConstrAndReg
0x9FA2F4: push    offset sub_A23EE0; void (__cdecl *)()
0x9FA2F9: call    _atexit
0x9FA2FE: pop     ecx
0x9FA2FF: retn
