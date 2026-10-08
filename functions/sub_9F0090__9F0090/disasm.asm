0x9F0090: push    offset aItSAllSuddenly; "It's all suddenly obvious to you. You j"...
0x9F0095: push    offset aSlevelup4; "sLevelUp4"
0x9F009A: mov     ecx, offset stru_B38310; self
0x9F009F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F00A4: push    offset sub_A20D40; void (__cdecl *)()
0x9F00A9: call    _atexit
0x9F00AE: pop     ecx
0x9F00AF: retn
