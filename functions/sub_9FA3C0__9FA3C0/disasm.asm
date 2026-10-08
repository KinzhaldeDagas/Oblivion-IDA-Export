0x9FA3C0: push    offset aMenusStatsS_25; "Menus\\Stats\\stat_pop_icon_acrobatics."...
0x9FA3C5: push    offset aSskilliconacro; "sSkillIconAcrobatics"
0x9FA3CA: mov     ecx, offset stru_B3A38C; self
0x9FA3CF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9FA3D4: push    offset sub_A23F50; void (__cdecl *)()
0x9FA3D9: call    _atexit
0x9FA3DE: pop     ecx
0x9FA3DF: retn
