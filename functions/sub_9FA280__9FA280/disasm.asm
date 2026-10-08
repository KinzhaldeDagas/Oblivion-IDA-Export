0x9FA280: push    offset aMenusStatsS_15; "Menus\\Stats\\stat_pop_icon_blunt.dds"
0x9FA285: push    offset aSskilliconblun; "sSkillIconBlunt"
0x9FA28A: mov     ecx, 0B3A33Ch; self
0x9FA28F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9FA294: push    offset sub_A23EB0; void (__cdecl *)()
0x9FA299: call    _atexit
0x9FA29E: pop     ecx
0x9FA29F: retn
