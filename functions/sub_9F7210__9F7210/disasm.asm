0x9F7210: push    offset aNoseSellionDow; "Nose sellion down/up"
0x9F7215: push    offset aSnoseselliondo; "sNoseselliondown"
0x9F721A: mov     ecx, offset stru_B391F8; self
0x9F721F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F7224: push    offset sub_A22B10; void (__cdecl *)()
0x9F7229: call    _atexit
0x9F722E: pop     ecx
0x9F722F: retn
