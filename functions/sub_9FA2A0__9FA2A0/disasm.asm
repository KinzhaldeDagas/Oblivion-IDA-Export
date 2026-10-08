0x9FA2A0: push    offset aMenusStatsS_16; "Menus\\Stats\\stat_pop_icon_hand To Han"...
0x9FA2A5: push    offset aSskilliconhand; "sSkillIconHandToHand"
0x9FA2AA: mov     ecx, offset stru_B3A344; self
0x9FA2AF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9FA2B4: push    offset sub_A23EC0; void (__cdecl *)()
0x9FA2B9: call    _atexit
0x9FA2BE: pop     ecx
0x9FA2BF: retn
