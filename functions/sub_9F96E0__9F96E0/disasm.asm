0x9F96E0: push    offset aSpeed; "Speed"
0x9F96E5: push    offset aSattributena_3; "sAttributeNameSpeed"
0x9F96EA: mov     ecx, offset stru_B3A054; self
0x9F96EF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F96F4: push    offset sub_A238E0; void (__cdecl *)()
0x9F96F9: call    _atexit
0x9F96FE: pop     ecx
0x9F96FF: retn
