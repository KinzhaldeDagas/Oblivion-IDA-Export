0x9FA040: push    offset aMenusStatsSt_5; "Menus\\Stats\\stat_pop_icon_personality"...
0x9FA045: push    offset aSattributeic_5; "sAttributeIconPersonality"
0x9FA04A: mov     ecx, 0B3A2ACh; self
0x9FA04F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9FA054: push    offset sub_A23D90; void (__cdecl *)()
0x9FA059: call    _atexit
0x9FA05E: pop     ecx
0x9FA05F: retn
