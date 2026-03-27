0x9EB690: fld     ds:flt_A34ABC
0x9EB696: push    ecx
0x9EB697: fstp    [esp+4+var_4]; float
0x9EB69A: push    offset aFbarterbuybase; "fBarterBuyBase"
0x9EB69F: mov     ecx, offset fBarterBuyBase
0x9EB6A4: call    GameSetting_ConstrAndReg_float
0x9EB6A9: push    offset sub_A1F260; void (__cdecl *)()
0x9EB6AE: call    _atexit
0x9EB6B3: pop     ecx
0x9EB6B4: retn
