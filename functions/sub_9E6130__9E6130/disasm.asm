0x9E6130: fld     ds:flt_A41304
0x9E6136: push    ecx
0x9E6137: fstp    [esp+4+var_4]; float
0x9E613A: push    offset aFsunminimumgla; "fSunMinimumGlareScale"
0x9E613F: mov     ecx, offset unk_B366B0
0x9E6144: call    GameSetting_ConstrAndReg_float
0x9E6149: push    offset sub_A1D420; void (__cdecl *)()
0x9E614E: call    _atexit
0x9E6153: pop     ecx
0x9E6154: retn
