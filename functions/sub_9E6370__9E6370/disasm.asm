0x9E6370: fld     ds:flt_A37CFC
0x9E6376: push    ecx
0x9E6377: fstp    [esp+4+var_4]; float
0x9E637A: push    offset aFsneakbootweig; "fSneakBootWeightBase"
0x9E637F: mov     ecx, offset fSneakBootWeightBase
0x9E6384: call    GameSetting_ConstrAndReg_float
0x9E6389: push    offset sub_A1D500; void (__cdecl *)()
0x9E638E: call    _atexit
0x9E6393: pop     ecx
0x9E6394: retn
