0x9FA260: push    offset aMenusStatsS_14; "Menus\\Stats\\stat_pop_icon_block.dds"
0x9FA265: push    offset aSskilliconbloc; "sSkillIconBlock"
0x9FA26A: mov     ecx, offset stru_B3A334; self
0x9FA26F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9FA274: push    offset sub_A23EA0; void (__cdecl *)()
0x9FA279: call    _atexit
0x9FA27E: pop     ecx
0x9FA27F: retn
