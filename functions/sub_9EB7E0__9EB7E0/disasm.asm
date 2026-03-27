0x9EB7E0: fld     ds:flt_A34BA0
0x9EB7E6: push    ecx
0x9EB7E7: fstp    [esp+4+var_4]; float
0x9EB7EA: push    offset aFbarterdisposi; "fBarterDispositionMod"
0x9EB7EF: mov     ecx, offset fBarterDispositionMod
0x9EB7F4: call    GameSetting_ConstrAndReg_float
0x9EB7F9: push    offset sub_A1F2D0; void (__cdecl *)()
0x9EB7FE: call    _atexit
0x9EB803: pop     ecx
0x9EB804: retn
