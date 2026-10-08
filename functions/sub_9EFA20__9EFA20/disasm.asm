0x9EFA20: push    32h ; '2'; defaultValue
0x9EFA22: push    offset aIshockbranchse; "iShockBranchSegmentsPerBolt"
0x9EFA27: mov     ecx, (offset flt_B37ED0+2F8h); self
0x9EFA2C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EFA31: push    offset sub_A20AB0; void (__cdecl *)()
0x9EFA36: call    _atexit
0x9EFA3B: pop     ecx
0x9EFA3C: retn
