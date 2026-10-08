0x9E7720: push    2710h; defaultValue
0x9E7725: push    offset aIcrimealarmrec; "iCrimeAlarmRecDistance"
0x9E772A: mov     ecx, offset stru_B36A50; self
0x9E772F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E7734: push    offset sub_A1DBC0; void (__cdecl *)()
0x9E7739: call    _atexit
0x9E773E: pop     ecx
0x9E773F: retn
