0x9F9F80: push    offset aMenusStatsStat; "Menus\\Stats\\stat_pop_icon_strength.dd"...
0x9F9F85: push    offset aSattributeicon; "sAttributeIconStrength"
0x9F9F8A: mov     ecx, 0B3A27Ch; self
0x9F9F8F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F9F94: push    offset sub_A23D30; void (__cdecl *)()
0x9F9F99: call    _atexit
0x9F9F9E: pop     ecx
0x9F9F9F: retn
