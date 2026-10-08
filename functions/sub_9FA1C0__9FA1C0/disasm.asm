0x9FA1C0: push    offset aMenusStatsSt_9; "Menus\\Stats\\stat_pop_icon_fatigue.dds"
0x9FA1C5: push    offset aSderivedattr_9; "sDerivedAttributeIconFatigue"
0x9FA1CA: mov     ecx, 0B3A30Ch; self
0x9FA1CF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9FA1D4: push    offset sub_A23E50; void (__cdecl *)()
0x9FA1D9: call    _atexit
0x9FA1DE: pop     ecx
0x9FA1DF: retn
