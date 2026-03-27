0x9E3EA0: fld     ds:flt_A3D65C
0x9E3EA6: push    ecx
0x9E3EA7: fstp    [esp+4+var_4]; float
0x9E3EAA: push    offset aFracegeneticva; "fRaceGeneticVariation"
0x9E3EAF: mov     ecx, offset fRaceGeneticVariation
0x9E3EB4: call    GameSetting_ConstrAndReg_float
0x9E3EB9: push    offset sub_A1C3A0; void (__cdecl *)()
0x9E3EBE: call    _atexit
0x9E3EC3: pop     ecx
0x9E3EC4: retn
