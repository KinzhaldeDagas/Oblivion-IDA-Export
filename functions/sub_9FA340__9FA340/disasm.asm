0x9FA340: push    offset aMenusStatsS_21; "Menus\\Stats\\stat_pop_icon_destruction"...
0x9FA345: push    offset aSskillicondest; "sSkillIconDestruction"
0x9FA34A: mov     ecx, offset stru_B3A36C; self
0x9FA34F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9FA354: push    offset sub_A23F10; void (__cdecl *)()
0x9FA359: call    _atexit
0x9FA35E: pop     ecx
0x9FA35F: retn
