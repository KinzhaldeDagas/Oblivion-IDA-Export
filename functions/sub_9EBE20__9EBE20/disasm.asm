0x9EBE20: fld     ds:flt_A3D9A4
0x9EBE26: push    ecx
0x9EBE27: fstp    [esp+4+var_4]; float
0x9EBE2A: push    offset aFnpcbasemagick; "fNPCBaseMagickaMult"
0x9EBE2F: mov     ecx, offset fNPCBaseMagickaMult
0x9EBE34: call    GameSetting_ConstrAndReg_float
0x9EBE39: push    offset sub_A1F550; void (__cdecl *)()
0x9EBE3E: call    _atexit
0x9EBE43: pop     ecx
0x9EBE44: retn
