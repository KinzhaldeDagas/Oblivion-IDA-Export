0x9EF1E0: fld     ds:flt_A3D65C
0x9EF1E6: push    ecx
0x9EF1E7: fstp    [esp+4+var_4]; float
0x9EF1EA: push    offset aFmagicteleki_4; "fMagicTelekinesisSpringDamping"
0x9EF1EF: mov     ecx, offset fMagicTelekinesisSpringDamping
0x9EF1F4: call    GameSetting_ConstrAndReg_float
0x9EF1F9: push    offset sub_A207C0; void (__cdecl *)()
0x9EF1FE: call    _atexit
0x9EF203: pop     ecx
0x9EF204: retn
