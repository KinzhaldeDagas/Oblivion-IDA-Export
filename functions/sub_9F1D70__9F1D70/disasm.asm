0x9F1D70: push    offset aAttribute; "Attribute"
0x9F1D75: push    offset aSattributetext; "sAttributeText"
0x9F1D7A: mov     ecx, offset stru_B389E8; self
0x9F1D7F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F1D84: push    offset sub_A21AF0; void (__cdecl *)()
0x9F1D89: call    _atexit
0x9F1D8E: pop     ecx
0x9F1D8F: retn
