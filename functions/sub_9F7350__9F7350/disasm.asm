0x9F7350: push    offset aCheekBlushLigh; "Cheek blush light/red"
0x9F7355: push    offset aScheekblush; "sCheekblush"
0x9F735A: mov     ecx, offset stru_B39248; self
0x9F735F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F7364: push    offset sub_A22BB0; void (__cdecl *)()
0x9F7369: call    _atexit
0x9F736E: pop     ecx
0x9F736F: retn
