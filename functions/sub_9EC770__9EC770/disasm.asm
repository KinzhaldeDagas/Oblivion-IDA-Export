0x9EC770: fld     ds:flt_A31C80
0x9EC776: push    ecx
0x9EC777: fstp    [esp+4+var_4]; float
0x9EC77A: push    offset aFbribebase; "fBribeBase"
0x9EC77F: mov     ecx, offset fBribeBase
0x9EC784: call    GameSetting_ConstrAndReg_float
0x9EC789: push    offset sub_A1F8B0; void (__cdecl *)()
0x9EC78E: call    _atexit
0x9EC793: pop     ecx
0x9EC794: retn
