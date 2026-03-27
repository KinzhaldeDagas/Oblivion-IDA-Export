0x9EF270: fld     ds:flt_A342A4
0x9EF276: push    ecx
0x9EF277: fstp    [esp+4+var_4]; float
0x9EF27A: push    offset aFmagicteleki_7; "fMagicTelekinesisMaxForce"
0x9EF27F: mov     ecx, offset fMagicTelekinesisMaxForce
0x9EF284: call    GameSetting_ConstrAndReg_float
0x9EF289: push    offset sub_A207F0; void (__cdecl *)()
0x9EF28E: call    _atexit
0x9EF293: pop     ecx
0x9EF294: retn
