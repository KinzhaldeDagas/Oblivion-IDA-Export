0x9EF040: push    4; defaultValue
0x9EF042: push    offset aImagiclightmax; "iMagicLightMaxCount"
0x9EF047: mov     ecx, (offset flt_B37ED0+138h); self
0x9EF04C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EF051: push    offset sub_A20730; void (__cdecl *)()
0x9EF056: call    _atexit
0x9EF05B: pop     ecx
0x9EF05C: retn
