0x9E10A0: push    0; defaultValue
0x9E10A2: push    offset aIaidefaultflee; "iAIDefaultFleeDisabled"
0x9E10A7: mov     ecx, offset stru_B35740; self
0x9E10AC: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E10B1: push    offset sub_A1ADB0; void (__cdecl *)()
0x9E10B6: call    _atexit
0x9E10BB: pop     ecx
0x9E10BC: retn
