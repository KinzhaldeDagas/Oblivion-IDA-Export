0x9F02B0: push    offset aTheResultsOfHa; "The results of hard work and dedication"...
0x9F02B5: push    offset aSleveldefault; "sLevelDefault"
0x9F02BA: mov     ecx, offset stru_B38398; self
0x9F02BF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F02C4: push    offset sub_A20E50; void (__cdecl *)()
0x9F02C9: call    _atexit
0x9F02CE: pop     ecx
0x9F02CF: retn
