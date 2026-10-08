0x9FA2C0: push    offset aMenusStatsS_17; "Menus\\Stats\\stat_pop_icon_heavy Armor"...
0x9FA2C5: push    offset aSskilliconheav; "sSkillIconHeavyArmor"
0x9FA2CA: mov     ecx, offset stru_B3A34C; self
0x9FA2CF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9FA2D4: push    offset sub_A23ED0; void (__cdecl *)()
0x9FA2D9: call    _atexit
0x9FA2DE: pop     ecx
0x9FA2DF: retn
