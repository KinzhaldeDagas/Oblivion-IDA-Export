0x9F0010: push    offset aContinue; "Continue"
0x9F0015: push    offset aScontinue; "sContinue"
0x9F001A: mov     ecx, offset stru_B382F0; self
0x9F001F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F0024: push    offset sub_A20D00; void (__cdecl *)()
0x9F0029: call    _atexit
0x9F002E: pop     ecx
0x9F002F: retn
