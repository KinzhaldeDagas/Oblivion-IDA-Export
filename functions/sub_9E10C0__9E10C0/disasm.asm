0x9E10C0: push    0; defaultValue
0x9E10C2: push    offset aIaidefaultyiel; "iAIDefaultYieldEnabled"
0x9E10C7: mov     ecx, offset stru_B35748; self
0x9E10CC: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E10D1: push    offset sub_A1ADC0; void (__cdecl *)()
0x9E10D6: call    _atexit
0x9E10DB: pop     ecx
0x9E10DC: retn
