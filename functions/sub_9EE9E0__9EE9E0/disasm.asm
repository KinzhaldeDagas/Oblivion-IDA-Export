0x9EE9E0: fld     ds:flt_A3D65C
0x9EE9E6: push    ecx
0x9EE9E7: fstp    [esp+4+var_4]; float
0x9EE9EA: push    offset aFmagiccloudlif; "fMagicCloudLifeScale"
0x9EE9EF: mov     ecx, offset flt_B37EF8
0x9EE9F4: call    GameSetting_ConstrAndReg_float
0x9EE9F9: push    offset sub_A20510; void (__cdecl *)()
0x9EE9FE: call    _atexit
0x9EEA03: pop     ecx
0x9EEA04: retn
