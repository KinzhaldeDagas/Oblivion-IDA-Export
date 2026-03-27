0x9EC530: fld     ds:flt_A53954
0x9EC536: push    ecx
0x9EC537: fstp    [esp+4+var_4]; float
0x9EC53A: push    offset aFpersboastpers; "fPersBoastPers"
0x9EC53F: mov     ecx, offset fPersBoastPers
0x9EC544: call    GameSetting_ConstrAndReg_float
0x9EC549: push    offset sub_A1F7B0; void (__cdecl *)()
0x9EC54E: call    _atexit
0x9EC553: pop     ecx
0x9EC554: retn
