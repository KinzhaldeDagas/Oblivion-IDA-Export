0x9EFE60: push    19h; defaultValue
0x9EFE62: push    offset aImagnitudeleve; "iMagnitudeLevelAffectsAll"
0x9EFE67: mov     ecx, (offset flt_B37ED0+3B8h); self
0x9EFE6C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EFE71: push    offset sub_A20C30; void (__cdecl *)()
0x9EFE76: call    _atexit
0x9EFE7B: pop     ecx
0x9EFE7C: retn
