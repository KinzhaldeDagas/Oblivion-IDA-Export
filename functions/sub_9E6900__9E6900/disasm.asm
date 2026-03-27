0x9E6900: fld     ds:flt_A30634
0x9E6906: push    ecx
0x9E6907: fstp    [esp+4+var_4]; float
0x9E690A: push    offset aFdispactorinfa; "fDispActorInfamyBase"
0x9E690F: mov     ecx, offset fDispActorInfamyBase
0x9E6914: call    GameSetting_ConstrAndReg_float
0x9E6919: push    offset sub_A1D6F0; void (__cdecl *)()
0x9E691E: call    _atexit
0x9E6923: pop     ecx
0x9E6924: retn
