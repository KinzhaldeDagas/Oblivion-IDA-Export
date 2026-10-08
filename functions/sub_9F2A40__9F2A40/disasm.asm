0x9F2A40: push    offset aTo; "to"
0x9F2A45: push    offset off_A60FA4; name
0x9F2A4A: mov     ecx, offset stru_B38D18; self
0x9F2A4F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F2A54: push    offset sub_A22150; void (__cdecl *)()
0x9F2A59: call    _atexit
0x9F2A5E: pop     ecx
0x9F2A5F: retn
