0x9E8160: fld     ds:flt_A56F84
0x9E8166: push    ecx
0x9E8167: fstp    [esp+4+var_4]; float
0x9E816A: push    offset aFmountedmaxloo; "fMountedMaxLookingDown"
0x9E816F: mov     ecx, offset fMountedMaxLookingDown
0x9E8174: call    GameSetting_ConstrAndReg_float
0x9E8179: push    offset sub_A1DF60; void (__cdecl *)()
0x9E817E: call    _atexit
0x9E8183: pop     ecx
0x9E8184: retn
