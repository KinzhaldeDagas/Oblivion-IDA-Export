0x9EC170: fld     ds:flt_A53954
0x9EC176: push    ecx
0x9EC177: fstp    [esp+4+var_4]; float
0x9EC17A: push    offset aFpersjokeresp; "fPersJokeResp"
0x9EC17F: mov     ecx, offset fPersJokeResp
0x9EC184: call    GameSetting_ConstrAndReg_float
0x9EC189: push    offset sub_A1F670; void (__cdecl *)()
0x9EC18E: call    _atexit
0x9EC193: pop     ecx
0x9EC194: retn
