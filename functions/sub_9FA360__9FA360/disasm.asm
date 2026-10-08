0x9FA360: push    offset aMenusStatsS_22; "Menus\\Stats\\stat_pop_icon_illusion.dd"...
0x9FA365: push    offset aSskilliconillu; "sSkillIconIllusion"
0x9FA36A: mov     ecx, 0B3A374h; self
0x9FA36F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9FA374: push    offset sub_A23F20; void (__cdecl *)()
0x9FA379: call    _atexit
0x9FA37E: pop     ecx
0x9FA37F: retn
