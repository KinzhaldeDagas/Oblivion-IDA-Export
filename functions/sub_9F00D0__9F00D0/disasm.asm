0x9F00D0: push    offset aYouSenseYourse; "You sense yourself more aware, more ope"...
0x9F00D5: push    offset aSlevelup6; "sLevelUp6"
0x9F00DA: mov     ecx, offset stru_B38320; self
0x9F00DF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F00E4: push    offset sub_A20D60; void (__cdecl *)()
0x9F00E9: call    _atexit
0x9F00EE: pop     ecx
0x9F00EF: retn
