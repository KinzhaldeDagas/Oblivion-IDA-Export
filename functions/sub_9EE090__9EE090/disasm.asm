0x9EE090: push    3; defaultValue
0x9EE092: push    offset aIremoveexces_1; "iRemoveExcessDeadComplexCount"
0x9EE097: mov     ecx, offset stru_B37D60; self
0x9EE09C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EE0A1: push    offset sub_A201E0; void (__cdecl *)()
0x9EE0A6: call    _atexit
0x9EE0AB: pop     ecx
0x9EE0AC: retn
