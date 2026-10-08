0x9F7190: push    offset aNoseNostrilTil; "Nose nostril tilt down/up"
0x9F7195: push    offset aSnosenostrilti; "sNosenostriltilt"
0x9F719A: mov     ecx, offset stru_B391D8; self
0x9F719F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F71A4: push    offset sub_A22AD0; void (__cdecl *)()
0x9F71A9: call    _atexit
0x9F71AE: pop     ecx
0x9F71AF: retn
