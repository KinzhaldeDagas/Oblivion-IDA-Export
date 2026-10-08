0x9F6E90: push    offset aEyesSmallLarge; "Eyes small/large"
0x9F6E95: push    offset aSeyessmall; "sEyessmall"
0x9F6E9A: mov     ecx, offset stru_B39118; self
0x9F6E9F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F6EA4: push    offset sub_A22950; void (__cdecl *)()
0x9F6EA9: call    _atexit
0x9F6EAE: pop     ecx
0x9F6EAF: retn
