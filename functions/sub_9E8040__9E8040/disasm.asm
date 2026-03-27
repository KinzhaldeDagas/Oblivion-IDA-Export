0x9E8040: fld     ds:flt_A34ABC
0x9E8046: push    ecx
0x9E8047: fstp    [esp+4+var_4]; float
0x9E804A: push    offset aFchase3rdper_1; "fChase3rdPersonZUnitsPerSecond"
0x9E804F: mov     ecx, offset flt_B36BE8
0x9E8054: call    GameSetting_ConstrAndReg_float
0x9E8059: push    offset sub_A1DEF0; void (__cdecl *)()
0x9E805E: call    _atexit
0x9E8063: pop     ecx
0x9E8064: retn
