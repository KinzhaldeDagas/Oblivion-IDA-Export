0x9EF360: fld     ds:kHeadBodyNormalMatchRadius
0x9EF366: push    ecx
0x9EF367: fstp    [esp+4+var_4]; float
0x9EF36A: push    offset aFmagictelek_12; "fMagicTelekinesisLiftPowerMult"
0x9EF36F: mov     ecx, (offset flt_B37ED0+1C0h)
0x9EF374: call    GameSetting_ConstrAndReg_float
0x9EF379: push    offset sub_A20840; void (__cdecl *)()
0x9EF37E: call    _atexit
0x9EF383: pop     ecx
0x9EF384: retn
