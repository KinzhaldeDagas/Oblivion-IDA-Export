0x9E08B0: fld     ds:flt_A3D65C
0x9E08B6: push    ecx
0x9E08B7: fstp    [esp+4+var_4]; float
0x9E08BA: push    offset aFaidefaultidle; "fAIDefaultIdleMinTime"
0x9E08BF: mov     ecx, offset flt_B355D8
0x9E08C4: call    GameSetting_ConstrAndReg_float
0x9E08C9: push    offset sub_A1AAE0; void (__cdecl *)()
0x9E08CE: call    _atexit
0x9E08D3: pop     ecx
0x9E08D4: retn
