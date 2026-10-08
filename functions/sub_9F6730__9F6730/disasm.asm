0x9F6730: push    offset aClass_0; "class"
0x9F6735: push    offset aSclass; "sClass"
0x9F673A: mov     ecx, offset stru_B38F40; self
0x9F673F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F6744: push    offset sub_A225A0; void (__cdecl *)()
0x9F6749: call    _atexit
0x9F674E: pop     ecx
0x9F674F: retn
