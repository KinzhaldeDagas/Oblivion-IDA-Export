0x9E6990: fld     ds:flt_A30634
0x9E6996: push    ecx
0x9E6997: fstp    [esp+4+var_4]; float
0x9E699A: push    offset aFdispactorboun; "fDispActorBountyBase"
0x9E699F: mov     ecx, offset fDispActorBountyBase
0x9E69A4: call    GameSetting_ConstrAndReg_float
0x9E69A9: push    offset sub_A1D720; void (__cdecl *)()
0x9E69AE: call    _atexit
0x9E69B3: pop     ecx
0x9E69B4: retn
