0x9E95D0: fld     ds:flt_A58DA8
0x9E95D6: push    ecx
0x9E95D7: fstp    [esp+4+var_4]; float
0x9E95DA: push    offset aFknockbackag_0; "fKnockbackAgilMult"
0x9E95DF: mov     ecx, offset fKnockbackAgilMult
0x9E95E4: call    GameSetting_ConstrAndReg_float
0x9E95E9: push    offset sub_A1E680; void (__cdecl *)()
0x9E95EE: call    _atexit
0x9E95F3: pop     ecx
0x9E95F4: retn
