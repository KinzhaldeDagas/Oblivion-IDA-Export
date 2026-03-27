0x9E8690: fld     ds:flt_A585D0
0x9E8696: push    ecx
0x9E8697: fstp    [esp+4+var_4]; float
0x9E869A: push    offset aFaimeleehandmu; "fAIMeleeHandMult"
0x9E869F: mov     ecx, offset flt_B36D10
0x9E86A4: call    GameSetting_ConstrAndReg_float
0x9E86A9: push    offset sub_A1E140; void (__cdecl *)()
0x9E86AE: call    _atexit
0x9E86B3: pop     ecx
0x9E86B4: retn
