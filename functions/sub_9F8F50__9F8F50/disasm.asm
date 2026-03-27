0x9F8F50: fld     ds:flt_A31C80
0x9F8F56: push    ecx
0x9F8F57: fstp    [esp+4+var_4]; float
0x9F8F5A: push    offset aFtreesizeconve; "fTreeSizeConversion"
0x9F8F5F: mov     ecx, offset flt_B39E18
0x9F8F64: call    GameSetting_ConstrAndReg_float
0x9F8F69: push    offset sub_A23580; void (__cdecl *)()
0x9F8F6E: call    _atexit
0x9F8F73: pop     ecx
0x9F8F74: retn
