0x9EB720: fld     ds:flt_A31E2C
0x9EB726: push    ecx
0x9EB727: fstp    [esp+4+var_4]; float
0x9EB72A: push    offset aFbartersellmul; "fBarterSellMult"
0x9EB72F: mov     ecx, offset fBarterSellMult
0x9EB734: call    GameSetting_ConstrAndReg_float
0x9EB739: push    offset sub_A1F290; void (__cdecl *)()
0x9EB73E: call    _atexit
0x9EB743: pop     ecx
0x9EB744: retn
