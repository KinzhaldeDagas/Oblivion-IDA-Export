0x9F0190: push    offset aYouCanTBelieve; "You can't believe how easy it is. You j"...
0x9F0195: push    offset aSlevelup12; "sLevelUp12"
0x9F019A: mov     ecx, offset stru_B38350; self
0x9F019F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F01A4: push    offset sub_A20DC0; void (__cdecl *)()
0x9F01A9: call    _atexit
0x9F01AE: pop     ecx
0x9F01AF: retn
