0x9EF210: fld     ds:flt_A5BFC8
0x9EF216: push    ecx
0x9EF217: fstp    [esp+4+var_4]; float
0x9EF21A: push    offset aFmagicteleki_5; "fMagicTelekinesisSpringElasticity"
0x9EF21F: mov     ecx, offset fMagicTelekinesisSpringElasticity
0x9EF224: call    GameSetting_ConstrAndReg_float
0x9EF229: push    offset sub_A207D0; void (__cdecl *)()
0x9EF22E: call    _atexit
0x9EF233: pop     ecx
0x9EF234: retn
