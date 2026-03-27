0x9EFE80: fld     ds:flt_A3D65C
0x9EFE86: push    ecx
0x9EFE87: fstp    [esp+4+var_4]; float
0x9EFE8A: push    offset aFreflectedabso; "fReflectedAbsorbChanceReduction"
0x9EFE8F: mov     ecx, offset fReflectedAbsorbChanceReduction
0x9EFE94: call    GameSetting_ConstrAndReg_float
0x9EFE99: push    offset sub_A20C40; void (__cdecl *)()
0x9EFE9E: call    _atexit
0x9EFEA3: pop     ecx
0x9EFEA4: retn
