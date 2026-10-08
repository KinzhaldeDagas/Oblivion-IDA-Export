0x9EF9A0: push    3; defaultValue
0x9EF9A2: push    offset aIshockbranchnu; "iShockBranchNumBolts"
0x9EF9A7: mov     ecx, (offset flt_B37ED0+2E0h); self
0x9EF9AC: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EF9B1: push    offset sub_A20A80; void (__cdecl *)()
0x9EF9B6: call    _atexit
0x9EF9BB: pop     ecx
0x9EF9BC: retn
