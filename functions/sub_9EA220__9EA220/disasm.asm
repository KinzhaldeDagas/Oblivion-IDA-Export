0x9EA220: fld     ds:flt_A3D8F0
0x9EA226: push    ecx
0x9EA227: fstp    [esp+4+var_4]; float
0x9EA22A: push    offset aFdeathforced_0; "fDeathForceDamageMax"
0x9EA22F: mov     ecx, offset flt_B371F8
0x9EA234: call    GameSetting_ConstrAndReg_float
0x9EA239: push    offset sub_A1EB10; void (__cdecl *)()
0x9EA23E: call    _atexit
0x9EA243: pop     ecx
0x9EA244: retn
