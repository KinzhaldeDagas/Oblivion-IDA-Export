0x9E9AA0: fld     ds:flt_A41304
0x9E9AA6: push    ecx
0x9E9AA7: fstp    [esp+4+var_4]; float
0x9E9AAA: push    offset aFarrowbowtimer; "fArrowBowTimerBase"
0x9E9AAF: mov     ecx, offset fArrowBowTimerBase
0x9E9AB4: call    GameSetting_ConstrAndReg_float
0x9E9AB9: push    offset sub_A1E820; void (__cdecl *)()
0x9E9ABE: call    _atexit
0x9E9AC3: pop     ecx
0x9E9AC4: retn
