0x9EFB00: push    0; defaultValue
0x9EFB02: push    offset aIshockdebug; "iShockDebug"
0x9EFB07: mov     ecx, (offset flt_B37ED0+320h); self
0x9EFB0C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EFB11: push    offset sub_A20B00; void (__cdecl *)()
0x9EFB16: call    _atexit
0x9EFB1B: pop     ecx
0x9EFB1C: retn
