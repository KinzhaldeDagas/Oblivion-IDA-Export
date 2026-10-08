0x9F7230: push    offset aNoseSellionSha; "Nose sellion shallow/deep"
0x9F7235: push    offset aSnosesellionsh; "sNosesellionshallow"
0x9F723A: mov     ecx, offset stru_B39200; self
0x9F723F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F7244: push    offset sub_A22B20; void (__cdecl *)()
0x9F7249: call    _atexit
0x9F724E: pop     ecx
0x9F724F: retn
