0x9E9B90: fld     ds:flt_A41304
0x9E9B96: push    ecx
0x9E9B97: fstp    [esp+4+var_4]; float
0x9E9B9A: push    offset aFarrowfovtimec; "fArrowFOVTimeChange"
0x9E9B9F: mov     ecx, offset flt_B370A8
0x9E9BA4: call    GameSetting_ConstrAndReg_float
0x9E9BA9: push    offset sub_A1E870; void (__cdecl *)()
0x9E9BAE: call    _atexit
0x9E9BB3: pop     ecx
0x9E9BB4: retn
