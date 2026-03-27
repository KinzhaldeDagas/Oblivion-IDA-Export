0x9E8010: fld     ds:flt_A46B10
0x9E8016: push    ecx
0x9E8017: fstp    [esp+4+var_4]; float
0x9E801A: push    offset aFchase3rdper_0; "fChase3rdPersonXYMult"
0x9E801F: mov     ecx, offset flt_B36BE0
0x9E8024: call    GameSetting_ConstrAndReg_float
0x9E8029: push    offset sub_A1DEE0; void (__cdecl *)()
0x9E802E: call    _atexit
0x9E8033: pop     ecx
0x9E8034: retn
