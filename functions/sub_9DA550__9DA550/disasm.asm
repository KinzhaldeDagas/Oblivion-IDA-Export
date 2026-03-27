0x9DA550: fld     ds:flt_A342A0
0x9DA556: push    ecx
0x9DA557: fstp    [esp+4+var_4]; float
0x9DA55A: push    offset aFmagicboltmaxi; "fMagicBoltMaximumDistance"
0x9DA55F: mov     ecx, offset fMagicBoltMaximumDistance
0x9DA564: call    GameSetting_ConstrAndReg_float
0x9DA569: push    offset sub_A17830; void (__cdecl *)()
0x9DA56E: call    _atexit
0x9DA573: pop     ecx
0x9DA574: retn
