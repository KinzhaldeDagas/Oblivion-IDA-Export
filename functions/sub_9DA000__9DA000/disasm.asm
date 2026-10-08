0x9DA000: push    offset aRequires; "Requires "
0x9DA005: push    offset aSmagiccostlies; "sMagicCostliestEffectRequires"
0x9DA00A: mov     ecx, 0B334F0h; self
0x9DA00F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DA014: push    offset sub_A175A0; void (__cdecl *)()
0x9DA019: call    _atexit
0x9DA01E: pop     ecx
0x9DA01F: retn
