0x9F7270: push    offset aNoseSellionThi; "Nose sellion thin/wide"
0x9F7275: push    offset aSnosesellionth; "sNosesellionthin"
0x9F727A: mov     ecx, offset stru_B39210; self
0x9F727F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F7284: push    offset sub_A22B40; void (__cdecl *)()
0x9F7289: call    _atexit
0x9F728E: pop     ecx
0x9F728F: retn
