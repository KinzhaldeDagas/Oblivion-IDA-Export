0x9F2540: push    offset aConstantEffect; "Constant Effect"
0x9F2545: push    offset aSmiscconstante; "sMiscConstantEffect"
0x9F254A: mov     ecx, 0B38BD8h; self
0x9F254F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F2554: push    offset sub_A21ED0; void (__cdecl *)()
0x9F2559: call    _atexit
0x9F255E: pop     ecx
0x9F255F: retn
