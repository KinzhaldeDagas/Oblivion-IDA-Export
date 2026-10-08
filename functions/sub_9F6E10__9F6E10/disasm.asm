0x9F6E10: push    offset aChinSmallLarge; "Chin small/large"
0x9F6E15: push    offset aSchinsmall; "sChinsmall"
0x9F6E1A: mov     ecx, offset stru_B390F8; self
0x9F6E1F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F6E24: push    offset sub_A22910; void (__cdecl *)()
0x9F6E29: call    _atexit
0x9F6E2E: pop     ecx
0x9F6E2F: retn
