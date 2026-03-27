0x9EC410: fld     ds:flt_A53954
0x9EC416: push    ecx
0x9EC417: fstp    [esp+4+var_4]; float
0x9EC41A: push    offset aFpersboastconf; "fPersBoastConf"
0x9EC41F: mov     ecx, offset unk_B37818
0x9EC424: call    GameSetting_ConstrAndReg_float
0x9EC429: push    offset sub_A1F750; void (__cdecl *)()
0x9EC42E: call    _atexit
0x9EC433: pop     ecx
0x9EC434: retn
