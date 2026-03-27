0x9EFDB0: fld     ds:flt_A31C80
0x9EFDB6: push    ecx
0x9EFDB7: fstp    [esp+4+var_4]; float
0x9EFDBA: push    offset aFabsorbsegme_0; "fAbsorbSegmentLength"
0x9EFDBF: mov     ecx, offset fAbsorbSegmentLength
0x9EFDC4: call    GameSetting_ConstrAndReg_float
0x9EFDC9: push    offset sub_A20BF0; void (__cdecl *)()
0x9EFDCE: call    _atexit
0x9EFDD3: pop     ecx
0x9EFDD4: retn
