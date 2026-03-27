0x9F2F60: fld     ds:flt_A2FAAC
0x9F2F66: push    ecx
0x9F2F67: fstp    [esp+4+var_4]; float
0x9F2F6A: push    offset aFbribenpclevel; "fBribeNPCLevelMult"
0x9F2F6F: mov     ecx, offset fBribeNPCLevelMult
0x9F2F74: call    GameSetting_ConstrAndReg_float
0x9F2F79: push    offset sub_A223B0; void (__cdecl *)()
0x9F2F7E: call    _atexit
0x9F2F83: pop     ecx
0x9F2F84: retn
