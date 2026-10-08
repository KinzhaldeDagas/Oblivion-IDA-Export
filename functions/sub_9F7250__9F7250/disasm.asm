0x9F7250: push    offset aNoseSellionLow; "Nose sellion lower shallow/deep"
0x9F7255: push    offset aSnosesellionlo; "sNosesellionlower"
0x9F725A: mov     ecx, offset stru_B39208; self
0x9F725F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F7264: push    offset sub_A22B30; void (__cdecl *)()
0x9F7269: call    _atexit
0x9F726E: pop     ecx
0x9F726F: retn
