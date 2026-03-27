0x9EB630: fld     ds:flt_A35AA4
0x9EB636: push    ecx
0x9EB637: fstp    [esp+4+var_4]; float
0x9EB63A: push    offset aFbarterdispbas; "fBarterDispBase"
0x9EB63F: mov     ecx, offset fBarterDispBase
0x9EB644: call    GameSetting_ConstrAndReg_float
0x9EB649: push    offset sub_A1F240; void (__cdecl *)()
0x9EB64E: call    _atexit
0x9EB653: pop     ecx
0x9EB654: retn
