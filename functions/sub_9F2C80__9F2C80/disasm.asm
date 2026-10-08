0x9F2C80: push    offset aOff; defaultValue
0x9F2C85: push    offset aSoffbuttontext; "sOffButtonText"
0x9F2C8A: mov     ecx, 0B38DA8h; self
0x9F2C8F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F2C94: push    offset sub_A22270; void (__cdecl *)()
0x9F2C99: call    _atexit
0x9F2C9E: pop     ecx
0x9F2C9F: retn
