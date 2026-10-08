0x9FA5F0: fld     ds:flt_A5B6C0; Verified registration: fPathNPCWadingPenalty defaults to 5000.0 and contributes to actor-aware traversal cost for wading points.
0x9FA5F6: push    ecx
0x9FA5F7: fstp    [esp+4+var_4]; float
0x9FA5FA: push    offset aFpathnpcwading; "fPathNPCWadingPenalty"
0x9FA5FF: mov     ecx, offset g_fPathNPCWadingPenalty
0x9FA604: call    GameSetting_ConstrAndReg_float
0x9FA609: push    offset sub_A24050; void (__cdecl *)()
0x9FA60E: call    _atexit
0x9FA613: pop     ecx
0x9FA614: retn
