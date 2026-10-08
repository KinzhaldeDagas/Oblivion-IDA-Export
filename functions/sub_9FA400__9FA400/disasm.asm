0x9FA400: push    offset aMenusStatsS_27; "Menus\\Stats\\stat_pop_icon_marksman.dd"...
0x9FA405: push    offset aSskilliconmark; "sSkillIconMarksman"
0x9FA40A: mov     ecx, offset stru_B3A39C; self
0x9FA40F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9FA414: push    offset sub_A23F70; void (__cdecl *)()
0x9FA419: call    _atexit
0x9FA41E: pop     ecx
0x9FA41F: retn
