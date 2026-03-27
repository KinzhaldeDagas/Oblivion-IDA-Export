0x9EE1D0: fld     ds:flt_A5B6C0
0x9EE1D6: push    ecx
0x9EE1D7: fstp    [esp+4+var_4]; float
0x9EE1DA: push    offset aFimpactshaderm; "fImpactShaderMaxDistance"
0x9EE1DF: mov     ecx, offset fImpactShaderMaxDistance
0x9EE1E4: call    GameSetting_ConstrAndReg_float
0x9EE1E9: push    offset sub_A20260; void (__cdecl *)()
0x9EE1EE: call    _atexit
0x9EE1F3: pop     ecx
0x9EE1F4: retn
