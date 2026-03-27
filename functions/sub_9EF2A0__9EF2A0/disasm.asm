0x9EF2A0: fld     ds:flt_A37450
0x9EF2A6: push    ecx
0x9EF2A7: fstp    [esp+4+var_4]; float
0x9EF2AA: push    offset aFmagicteleki_8; "fMagicTelekinesisComplexSpringDamping"
0x9EF2AF: mov     ecx, offset fMagicTelekinesisComplexSpringDamping
0x9EF2B4: call    GameSetting_ConstrAndReg_float
0x9EF2B9: push    offset sub_A20800; void (__cdecl *)()
0x9EF2BE: call    _atexit
0x9EF2C3: pop     ecx
0x9EF2C4: retn
