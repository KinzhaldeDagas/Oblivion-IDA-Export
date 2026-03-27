0x9DA520: fld     ds:flt_A342A4
0x9DA526: push    ecx
0x9DA527: fstp    [esp+4+var_4]; float
0x9DA52A: push    offset aFmagicboltopti; "fMagicBoltOptimalDistance"
0x9DA52F: mov     ecx, offset fMagicBoltOptimalDistance
0x9DA534: call    GameSetting_ConstrAndReg_float
0x9DA539: push    offset sub_A17820; void (__cdecl *)()
0x9DA53E: call    _atexit
0x9DA543: pop     ecx
0x9DA544: retn
