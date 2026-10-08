0x9FA480: push    offset aMenusStatsS_31; "Menus\\Stats\\stat_pop_icon_speechcraft"...
0x9FA485: push    offset aSskilliconspee; "sSkillIconSpeechcraft"
0x9FA48A: mov     ecx, 0B3A3BCh; self
0x9FA48F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9FA494: push    offset sub_A23FB0; void (__cdecl *)()
0x9FA499: call    _atexit
0x9FA49E: pop     ecx
0x9FA49F: retn
