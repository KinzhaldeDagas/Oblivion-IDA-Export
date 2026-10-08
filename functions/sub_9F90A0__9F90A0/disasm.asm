0x9F90A0: fld1; Verified GameSettingFloat registration: fLeafRustleAmountSwayInfluence defaults to 1.0 and registers its atexit destructor.
0x9F90A2: push    ecx
0x9F90A3: fstp    [esp+4+var_4]; float
0x9F90A6: mov     ecx, offset fLeafRustleAmountSwayInfluence
0x9F90AB: push    offset aFleafrustleamo; "fLeafRustleAmountSwayInfluence"
0x9F90B0: call    GameSetting_ConstrAndReg_float
0x9F90B5: push    offset GameSetting_fLeafRustleAmountSwayInfluence_atexit; void (__cdecl *)()
0x9F90BA: call    _atexit
0x9F90BF: pop     ecx
0x9F90C0: retn
