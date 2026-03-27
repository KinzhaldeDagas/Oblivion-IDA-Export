0x9EE980: fld     ds:flt_A342A4
0x9EE986: push    ecx
0x9EE987: fstp    [esp+4+var_4]; float
0x9EE98A: push    offset aFmagicprojec_0; "fMagicProjectileBaseSpeed"
0x9EE98F: mov     ecx, offset flt_B37EE8
0x9EE994: call    GameSetting_ConstrAndReg_float
0x9EE999: push    offset sub_A204F0; void (__cdecl *)()
0x9EE99E: call    _atexit
0x9EE9A3: pop     ecx
0x9EE9A4: retn
