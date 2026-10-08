0x9EDBE0: push    23792h; defaultValue
0x9EDBE5: push    offset aIclassagent; "iClassAgent"
0x9EDBEA: mov     ecx, 0B37C50h; self
0x9EDBEF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EDBF4: push    offset sub_A1FFC0; void (__cdecl *)()
0x9EDBF9: call    _atexit
0x9EDBFE: pop     ecx
0x9EDBFF: retn
