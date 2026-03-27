0x9EF330: fld     ds:flt_A342A4
0x9EF336: push    ecx
0x9EF337: fstp    [esp+4+var_4]; float
0x9EF33A: push    offset aFmagictelek_11; "fMagicTelekinesisComplexMaxForce"
0x9EF33F: mov     ecx, offset fMagicTelekinesisComplexMaxForce
0x9EF344: call    GameSetting_ConstrAndReg_float
0x9EF349: push    offset sub_A20830; void (__cdecl *)()
0x9EF34E: call    _atexit
0x9EF353: pop     ecx
0x9EF354: retn
