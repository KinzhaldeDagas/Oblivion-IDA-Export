0x9F6E70: push    offset aEyesDownUp; "Eyes down/up"
0x9F6E75: push    offset aSeyesdown; "sEyesdown"
0x9F6E7A: mov     ecx, offset stru_B39110; self
0x9F6E7F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F6E84: push    offset sub_A22940; void (__cdecl *)()
0x9F6E89: call    _atexit
0x9F6E8E: pop     ecx
0x9F6E8F: retn
