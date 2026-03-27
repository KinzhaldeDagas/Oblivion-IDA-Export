0x9E0790: fld     ds:flt_A3D65C
0x9E0796: push    ecx
0x9E0797: fstp    [esp+4+var_4]; float
0x9E079A: push    offset aFaidefaultdodg; "fAIDefaultDodgeLeftRightMinTime"
0x9E079F: mov     ecx, offset flt_B355A8
0x9E07A4: call    GameSetting_ConstrAndReg_float
0x9E07A9: push    offset sub_A1AA80; void (__cdecl *)()
0x9E07AE: call    _atexit
0x9E07B3: pop     ecx
0x9E07B4: retn
