0x9E8280: fld     ds:flt_A37CC8
0x9E8286: push    ecx
0x9E8287: fstp    [esp+4+var_4]; float
0x9E828A: push    offset aFfleeissafetim; "fFleeIsSafeTimer"
0x9E828F: mov     ecx, offset flt_B36C58
0x9E8294: call    GameSetting_ConstrAndReg_float
0x9E8299: push    offset sub_A1DFD0; void (__cdecl *)()
0x9E829E: call    _atexit
0x9E82A3: pop     ecx
0x9E82A4: retn
