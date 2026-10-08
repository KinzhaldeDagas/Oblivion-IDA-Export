0x9F9CA0: push    offset aFatigueDescrip; "Fatigue Description"
0x9F9CA5: push    offset aSderivedattr_5; "sDerivedAttributeDescFatigue"
0x9F9CAA: mov     ecx, 0B3A1C4h; self
0x9F9CAF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F9CB4: push    offset sub_A23BC0; void (__cdecl *)()
0x9F9CB9: call    _atexit
0x9F9CBE: pop     ecx
0x9F9CBF: retn
