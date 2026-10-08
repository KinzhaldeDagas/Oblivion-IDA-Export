0x9F2B60: push    offset aBack_0; "Back"
0x9F2B65: push    offset aSback; "sBack"
0x9F2B6A: mov     ecx, offset stru_B38D60; self
0x9F2B6F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F2B74: push    offset sub_A221E0; void (__cdecl *)()
0x9F2B79: call    _atexit
0x9F2B7E: pop     ecx
0x9F2B7F: retn
