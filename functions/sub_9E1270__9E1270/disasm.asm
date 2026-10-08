0x9E1270: push    offset aYouFindNothing; "You find nothing of use."
0x9E1275: push    offset aSflorafailurem; "sFloraFailureMessage"
0x9E127A: mov     ecx, 0B35828h; self
0x9E127F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E1284: push    offset sub_A1AE60; void (__cdecl *)()
0x9E1289: call    _atexit
0x9E128E: pop     ecx
0x9E128F: retn
