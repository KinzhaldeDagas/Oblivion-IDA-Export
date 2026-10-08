0x9F0170: push    offset aBeingSmartDoes; "Being smart doesn't hurt. And a little "...
0x9F0175: push    offset aSlevelup11; "sLevelUp11"
0x9F017A: mov     ecx, offset stru_B38348; self
0x9F017F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F0184: push    offset sub_A20DB0; void (__cdecl *)()
0x9F0189: call    _atexit
0x9F018E: pop     ecx
0x9F018F: retn
