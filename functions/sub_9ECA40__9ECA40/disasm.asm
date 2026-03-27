0x9ECA40: fld     ds:flt_A2FE7C
0x9ECA46: push    ecx
0x9ECA47: fstp    [esp+4+var_4]; float
0x9ECA4A: push    offset aFpersuasionb_3; "fPersuasionBaseValueMaxSelect"
0x9ECA4F: mov     ecx, offset fPersuasionBaseValueMaxSelect
0x9ECA54: call    GameSetting_ConstrAndReg_float
0x9ECA59: push    offset sub_A1F9A0; void (__cdecl *)()
0x9ECA5E: call    _atexit
0x9ECA63: pop     ecx
0x9ECA64: retn
