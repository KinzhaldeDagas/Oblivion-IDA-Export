0x9EE740: fld     ds:flt_A5A04C
0x9EE746: push    ecx
0x9EE747: fstp    [esp+4+var_4]; float
0x9EE74A: push    offset aFmagicprojecti; "fMagicProjectileMaxDistance"
0x9EE74F: mov     ecx, offset flt_B37E88
0x9EE754: call    GameSetting_ConstrAndReg_float
0x9EE759: push    offset sub_A20430; void (__cdecl *)()
0x9EE75E: call    _atexit
0x9EE763: pop     ecx
0x9EE764: retn
