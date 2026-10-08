0x9F9700: push    offset aEndurance; "Endurance"
0x9F9705: push    offset aSattributena_4; "sAttributeNameEndurance"
0x9F970A: mov     ecx, 0B3A05Ch; self
0x9F970F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F9714: push    offset sub_A238F0; void (__cdecl *)()
0x9F9719: call    _atexit
0x9F971E: pop     ecx
0x9F971F: retn
