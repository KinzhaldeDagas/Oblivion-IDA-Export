0x9FAA40: fld     ds:fConstant_2
0x9FAA46: push    ecx
0x9FAA47: fstp    [esp+4+var_4]; float
0x9FAA4A: push    offset aFlowactorspeed; "fLowActorSpeedBoost"
0x9FAA4F: mov     ecx, offset flt_B3A4C8
0x9FAA54: call    GameSetting_ConstrAndReg_float
0x9FAA59: push    offset sub_A241C0; void (__cdecl *)()
0x9FAA5E: call    _atexit
0x9FAA63: pop     ecx
0x9FAA64: retn
