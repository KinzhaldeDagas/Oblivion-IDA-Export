0x9F7670: push    offset aNasoLabialLine; "Naso labial lines light/dark"
0x9F7675: push    offset aSnasolabiallin; "sNasolabiallines"
0x9F767A: mov     ecx, offset stru_B39310; self
0x9F767F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F7684: push    offset sub_A22D40; void (__cdecl *)()
0x9F7689: call    _atexit
0x9F768E: pop     ecx
0x9F768F: retn
