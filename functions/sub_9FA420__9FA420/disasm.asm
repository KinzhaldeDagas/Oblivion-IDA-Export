0x9FA420: push    offset aMenusStatsS_28; "Menus\\Stats\\stat_pop_icon_mercantile."...
0x9FA425: push    offset aSskilliconmerc; "sSkillIconMercantile"
0x9FA42A: mov     ecx, 0B3A3A4h; self
0x9FA42F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9FA434: push    offset sub_A23F80; void (__cdecl *)()
0x9FA439: call    _atexit
0x9FA43E: pop     ecx
0x9FA43F: retn
