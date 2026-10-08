0x9EFE40: push    1; defaultValue
0x9EFE42: push    offset aImaxplayersumm; "iMaxPlayerSummonedCreatures"
0x9EFE47: mov     ecx, (offset flt_B37ED0+3B0h); self
0x9EFE4C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EFE51: push    offset sub_A20C20; void (__cdecl *)()
0x9EFE56: call    _atexit
0x9EFE5B: pop     ecx
0x9EFE5C: retn
