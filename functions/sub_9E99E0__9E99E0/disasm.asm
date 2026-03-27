0x9E99E0: fld     ds:flt_A3D658
0x9E99E6: push    ecx
0x9E99E7: fstp    [esp+4+var_4]; float
0x9E99EA: push    offset aFarrowbouncebl; "fArrowBounceBlockPercentage"
0x9E99EF: mov     ecx, offset flt_B37060
0x9E99F4: call    GameSetting_ConstrAndReg_float
0x9E99F9: push    offset sub_A1E7E0; void (__cdecl *)()
0x9E99FE: call    _atexit
0x9E9A03: pop     ecx
0x9E9A04: retn
