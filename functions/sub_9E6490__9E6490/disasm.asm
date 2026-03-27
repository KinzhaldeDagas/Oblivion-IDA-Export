0x9E6490: fld     ds:flt_A35AA4
0x9E6496: push    ecx
0x9E6497: fstp    [esp+4+var_4]; float
0x9E649A: push    offset aFsneakrunningm; "fSneakRunningMult"
0x9E649F: mov     ecx, offset fSneakRunningMult
0x9E64A4: call    GameSetting_ConstrAndReg_float
0x9E64A9: push    offset sub_A1D560; void (__cdecl *)()
0x9E64AE: call    _atexit
0x9E64B3: pop     ecx
0x9E64B4: retn
