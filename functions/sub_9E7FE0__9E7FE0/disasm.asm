0x9E7FE0: fld     ds:flt_A3D65C
0x9E7FE6: push    ecx
0x9E7FE7: fstp    [esp+4+var_4]; float
0x9E7FEA: push    offset aFchase3rdperso; "fChase3rdPersonVanityXYMult"
0x9E7FEF: mov     ecx, offset flt_B36BD8
0x9E7FF4: call    GameSetting_ConstrAndReg_float
0x9E7FF9: push    offset sub_A1DED0; void (__cdecl *)()
0x9E7FFE: call    _atexit
0x9E8003: pop     ecx
0x9E8004: retn
