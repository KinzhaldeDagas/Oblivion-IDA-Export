0x9E08E0: fld     ds:flt_A35AA4
0x9E08E6: push    ecx
0x9E08E7: fstp    [esp+4+var_4]; float
0x9E08EA: push    offset aFaidefaultid_0; "fAIDefaultIdleMaxTime"
0x9E08EF: mov     ecx, offset flt_B355E0
0x9E08F4: call    GameSetting_ConstrAndReg_float
0x9E08F9: push    offset sub_A1AAF0; void (__cdecl *)()
0x9E08FE: call    _atexit
0x9E0903: pop     ecx
0x9E0904: retn
