0x9EAFE0: fld     ds:flt_A3D9A4
0x9EAFE6: push    ecx
0x9EAFE7: fstp    [esp+4+var_4]; float
0x9EAFEA: push    offset aFjumpfalltim_0; "fJumpFallTimeMin"
0x9EAFEF: mov     ecx, offset flt_B37478
0x9EAFF4: call    GameSetting_ConstrAndReg_float
0x9EAFF9: push    offset sub_A1F010; void (__cdecl *)()
0x9EAFFE: call    _atexit
0x9EB003: pop     ecx
0x9EB004: retn
