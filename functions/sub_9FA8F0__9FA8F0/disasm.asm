0x9FA8F0: fld     ds:flt_A3D65C
0x9FA8F6: push    ecx
0x9FA8F7: fstp    [esp+4+var_4]; float
0x9FA8FA: push    offset aFpathpointmaxa; "fPathPointMaxAngleDeltaTurnSpeedScalar"
0x9FA8FF: mov     ecx, offset flt_B3A490
0x9FA904: call    GameSetting_ConstrAndReg_float
0x9FA909: push    offset sub_A24150; void (__cdecl *)()
0x9FA90E: call    _atexit
0x9FA913: pop     ecx
0x9FA914: retn
