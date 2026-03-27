0x9EC500: fld     ds:flt_A30634
0x9EC506: push    ecx
0x9EC507: fstp    [esp+4+var_4]; float
0x9EC50A: push    offset aFpersboastwill; "fPersBoastWillp"
0x9EC50F: mov     ecx, offset fPersBoastWillp
0x9EC514: call    GameSetting_ConstrAndReg_float
0x9EC519: push    offset sub_A1F7A0; void (__cdecl *)()
0x9EC51E: call    _atexit
0x9EC523: pop     ecx
0x9EC524: retn
