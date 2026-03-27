0x9EF180: fld     ds:flt_A5982C
0x9EF186: push    ecx
0x9EF187: fstp    [esp+4+var_4]; float
0x9EF18A: push    offset aFmagicteleki_2; "fMagicTelekinesisDistanceMin"
0x9EF18F: mov     ecx, offset fMagicTelekinesisDistanceMin
0x9EF194: call    GameSetting_ConstrAndReg_float
0x9EF199: push    offset sub_A207A0; void (__cdecl *)()
0x9EF19E: call    _atexit
0x9EF1A3: pop     ecx
0x9EF1A4: retn
