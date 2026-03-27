0x9E8560: fld     ds:flt_A3D8F4
0x9E8566: push    ecx
0x9E8567: fstp    [esp+4+var_4]; float
0x9E856A: push    offset aFshadershadowu; "fShaderShadowUpdateDistance"
0x9E856F: mov     ecx, offset flt_B36CD8
0x9E8574: call    GameSetting_ConstrAndReg_float
0x9E8579: push    offset sub_A1E0D0; void (__cdecl *)()
0x9E857E: call    _atexit
0x9E8583: pop     ecx
0x9E8584: retn
