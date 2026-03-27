0x9E6BD0: fld1
0x9E6BD2: push    ecx
0x9E6BD3: fstp    [esp+4+var_4]; float
0x9E6BD6: mov     ecx, offset fFightDistanceBase
0x9E6BDB: push    offset aFfightdistance; "fFightDistanceBase"
0x9E6BE0: call    GameSetting_ConstrAndReg_float
0x9E6BE5: push    offset sub_A1D7E0; void (__cdecl *)()
0x9E6BEA: call    _atexit
0x9E6BEF: pop     ecx
0x9E6BF0: retn
