0x9F0050: push    offset aYouRealizeThat; "You realize that all your life you have"...
0x9F0055: push    offset aSlevelup2; "sLevelUp2"
0x9F005A: mov     ecx, offset stru_B38300; self
0x9F005F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F0064: push    offset sub_A20D20; void (__cdecl *)()
0x9F0069: call    _atexit
0x9F006E: pop     ecx
0x9F006F: retn
