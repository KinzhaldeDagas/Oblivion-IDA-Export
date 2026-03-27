0x9FA770: fld     ds:flt_A3D9A4
0x9FA776: push    ecx
0x9FA777: fstp    [esp+4+var_4]; float
0x9FA77A: push    offset aFpathpointwalk; "fPathPointWalkTime"
0x9FA77F: mov     ecx, offset flt_B3A450
0x9FA784: call    GameSetting_ConstrAndReg_float
0x9FA789: push    offset sub_A240D0; void (__cdecl *)()
0x9FA78E: call    _atexit
0x9FA793: pop     ecx
0x9FA794: retn
