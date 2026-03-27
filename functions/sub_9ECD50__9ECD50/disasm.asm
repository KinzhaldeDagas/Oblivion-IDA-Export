0x9ECD50: fld     ds:fConstant_2
0x9ECD56: push    ecx
0x9ECD57: fstp    [esp+4+var_4]; float
0x9ECD5A: push    offset aFrechargegoldm; "fRechargeGoldMult"
0x9ECD5F: mov     ecx, offset fRechargeGoldMult
0x9ECD64: call    GameSetting_ConstrAndReg_float
0x9ECD69: push    offset sub_A1FAC0; void (__cdecl *)()
0x9ECD6E: call    _atexit
0x9ECD73: pop     ecx
0x9ECD74: retn
