0x9E7BE0: push    64h ; 'd'; defaultValue
0x9E7BE2: push    offset aIaidistancerad; "iAIDistanceRadiusMinLocation"
0x9E7BE7: mov     ecx, offset stru_B36B28; self
0x9E7BEC: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E7BF1: push    offset sub_A1DD70; void (__cdecl *)()
0x9E7BF6: call    _atexit
0x9E7BFB: pop     ecx
0x9E7BFC: retn
