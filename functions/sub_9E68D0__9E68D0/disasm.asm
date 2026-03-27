0x9E68D0: fld     ds:flt_A575D0
0x9E68D6: push    ecx
0x9E68D7: fstp    [esp+4+var_4]; float
0x9E68DA: push    offset aFdisptargetinf; "fDispTargetInfamyMult"
0x9E68DF: mov     ecx, offset fDispTargetInfamyMult
0x9E68E4: call    GameSetting_ConstrAndReg_float
0x9E68E9: push    offset sub_A1D6E0; void (__cdecl *)()
0x9E68EE: call    _atexit
0x9E68F3: pop     ecx
0x9E68F4: retn
