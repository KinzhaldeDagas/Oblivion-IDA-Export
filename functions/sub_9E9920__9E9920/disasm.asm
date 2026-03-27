0x9E9920: fld     ds:flt_A5739C
0x9E9926: push    ecx
0x9E9927: fstp    [esp+4+var_4]; float
0x9E992A: push    offset aFarrowspeedmul; "fArrowSpeedMult"
0x9E992F: mov     ecx, offset flt_B37040
0x9E9934: call    GameSetting_ConstrAndReg_float
0x9E9939: push    offset sub_A1E7A0; void (__cdecl *)()
0x9E993E: call    _atexit
0x9E9943: pop     ecx
0x9E9944: retn
