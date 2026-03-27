0x9E5F60: fld     ds:flt_A31C80
0x9E5F66: push    ecx
0x9E5F67: fstp    [esp+4+var_4]; float
0x9E5F6A: push    offset aFsecondsbetwee; "fSecondsBetweenWindowUpdate"
0x9E5F6F: mov     ecx, offset flt_B36658
0x9E5F74: call    GameSetting_ConstrAndReg_float
0x9E5F79: push    offset sub_A1D380; void (__cdecl *)()
0x9E5F7E: call    _atexit
0x9E5F83: pop     ecx
0x9E5F84: retn
