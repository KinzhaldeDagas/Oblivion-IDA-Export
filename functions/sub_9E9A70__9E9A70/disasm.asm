0x9E9A70: fld     ds:flt_A43328
0x9E9A76: push    ecx
0x9E9A77: fstp    [esp+4+var_4]; float
0x9E9A7A: push    offset aFarrowgravit_0; "fArrowGravityMin"
0x9E9A7F: mov     ecx, offset fArrowGravityMin
0x9E9A84: call    GameSetting_ConstrAndReg_float
0x9E9A89: push    offset sub_A1E810; void (__cdecl *)()
0x9E9A8E: call    _atexit
0x9E9A93: pop     ecx
0x9E9A94: retn
