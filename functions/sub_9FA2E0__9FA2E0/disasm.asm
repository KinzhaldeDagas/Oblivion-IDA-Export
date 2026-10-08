0x9FA2E0: push    offset aMenusStatsS_18; "Menus\\Stats\\stat_pop_icon_alchemy.dds"
0x9FA2E5: push    offset aSskilliconalch; "sSkillIconAlchemy"
0x9FA2EA: mov     ecx, 0B3A354h; self
0x9FA2EF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9FA2F4: push    offset sub_A23EE0; void (__cdecl *)()
0x9FA2F9: call    _atexit
0x9FA2FE: pop     ecx
0x9FA2FF: retn
