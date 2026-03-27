0x9E2890: fld     ds:flt_A44BA4
0x9E2896: push    ecx
0x9E2897: fstp    [esp+4+var_4]; float
0x9E289A: push    offset aFrandomdoordis; "fRandomDoorDistance"
0x9E289F: mov     ecx, offset fRandomDoorDistance
0x9E28A4: call    GameSetting_ConstrAndReg_float
0x9E28A9: push    offset sub_A1B710; void (__cdecl *)()
0x9E28AE: call    _atexit
0x9E28B3: pop     ecx
0x9E28B4: retn
