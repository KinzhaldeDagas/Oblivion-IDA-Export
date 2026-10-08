0x9EBD40: push    64h ; 'd'; defaultValue
0x9EBD42: push    offset aIcrimedaysinpr; "iCrimeDaysInPrisonMod"
0x9EBD47: mov     ecx, offset stru_B376F0; self
0x9EBD4C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EBD51: push    offset sub_A1F500; void (__cdecl *)()
0x9EBD56: call    _atexit
0x9EBD5B: pop     ecx
0x9EBD5C: retn
