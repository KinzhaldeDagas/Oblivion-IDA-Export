0x9FA830: fld     ds:flt_A2FFE8
0x9FA836: push    ecx
0x9FA837: fstp    [esp+4+var_4]; float
0x9FA83A: push    offset aFpathpointzdis; "fPathPointZDistanceAllowance"
0x9FA83F: mov     ecx, offset flt_B3A470
0x9FA844: call    GameSetting_ConstrAndReg_float
0x9FA849: push    offset sub_A24110; void (__cdecl *)()
0x9FA84E: call    _atexit
0x9FA853: pop     ecx
0x9FA854: retn
