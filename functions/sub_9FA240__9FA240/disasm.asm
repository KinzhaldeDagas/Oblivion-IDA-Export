0x9FA240: push    offset aMenusStatsS_13; "Menus\\Stats\\stat_pop_icon_blade.dds"
0x9FA245: push    offset aSskilliconblad; "sSkillIconBlade"
0x9FA24A: mov     ecx, offset stru_B3A32C; self
0x9FA24F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9FA254: push    offset sub_A23E90; void (__cdecl *)()
0x9FA259: call    _atexit
0x9FA25E: pop     ecx
0x9FA25F: retn
