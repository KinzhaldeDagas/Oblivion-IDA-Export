0x9F97A0: push    offset aFatigue; "Fatigue"
0x9F97A5: push    offset aSderivedattr_1; "sDerivedAttributeNameFatigue"
0x9F97AA: mov     ecx, 0B3A084h; self
0x9F97AF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F97B4: push    offset sub_A23940; void (__cdecl *)()
0x9F97B9: call    _atexit
0x9F97BE: pop     ecx
0x9F97BF: retn
