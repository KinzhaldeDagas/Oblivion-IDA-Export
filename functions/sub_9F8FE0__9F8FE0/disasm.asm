0x9F8FE0: fld     ds:flt_A3D65C
0x9F8FE6: push    ecx
0x9F8FE7: fstp    [esp+4+var_4]; float
0x9F8FEA: push    offset aFleafrustletim; "fLeafRustleTimeScale"
0x9F8FEF: mov     ecx, offset flt_B39E30
0x9F8FF4: call    GameSetting_ConstrAndReg_float
0x9F8FF9: push    offset sub_A235B0; void (__cdecl *)()
0x9F8FFE: call    _atexit
0x9F9003: pop     ecx
0x9F9004: retn
