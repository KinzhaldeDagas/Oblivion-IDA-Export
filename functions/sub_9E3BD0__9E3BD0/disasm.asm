0x9E3BD0: fld     ds:flt_A3D65C
0x9E3BD6: push    ecx
0x9E3BD7: fstp    [esp+4+var_4]; float
0x9E3BDA: push    offset aFnpcgeneticvar; "fNPCGeneticVariation"
0x9E3BDF: mov     ecx, offset fNPCGeneticVariation
0x9E3BE4: call    GameSetting_ConstrAndReg_float
0x9E3BE9: push    offset sub_A1C1C0; void (__cdecl *)()
0x9E3BEE: call    _atexit
0x9E3BF3: pop     ecx
0x9E3BF4: retn
