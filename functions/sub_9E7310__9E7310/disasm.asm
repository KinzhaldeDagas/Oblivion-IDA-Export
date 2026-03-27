0x9E7310: fld     ds:flt_A31E2C
0x9E7316: push    ecx
0x9E7317: fstp    [esp+4+var_4]; float
0x9E731A: push    offset aFpickpocketmin; "fPickPocketMinChance"
0x9E731F: mov     ecx, offset flt_B369A0
0x9E7324: call    GameSetting_ConstrAndReg_float
0x9E7329: push    offset sub_A1DA60; void (__cdecl *)()
0x9E732E: call    _atexit
0x9E7333: pop     ecx
0x9E7334: retn
