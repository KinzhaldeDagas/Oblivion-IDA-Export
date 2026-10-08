0x9F6AD0: push    offset off_A62AE4; defaultValue
0x9F6AD5: push    offset aSjaw; "sJaw"
0x9F6ADA: mov     ecx, offset stru_B39028; self
0x9F6ADF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F6AE4: push    offset sub_A22770; void (__cdecl *)()
0x9F6AE9: call    _atexit
0x9F6AEE: pop     ecx
0x9F6AEF: retn
