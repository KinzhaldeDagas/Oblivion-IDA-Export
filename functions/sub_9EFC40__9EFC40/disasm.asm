0x9EFC40: push    1; defaultValue
0x9EFC42: push    offset aIabsorbnumbolt; "iAbsorbNumBolts"
0x9EFC47: mov     ecx, (offset flt_B37ED0+358h); self
0x9EFC4C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EFC51: push    offset sub_A20B70; void (__cdecl *)()
0x9EFC56: call    _atexit
0x9EFC5B: pop     ecx
0x9EFC5C: retn
