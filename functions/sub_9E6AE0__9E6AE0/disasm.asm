0x9E6AE0: fld     ds:flt_A418D8
0x9E6AE6: push    ecx
0x9E6AE7: fstp    [esp+4+var_4]; float
0x9E6AEA: push    offset aFdisptargetdis; "fDispTargetDiseaseBase"
0x9E6AEF: mov     ecx, offset fDispTargetDiseaseBase
0x9E6AF4: call    GameSetting_ConstrAndReg_float
0x9E6AF9: push    offset sub_A1D790; void (__cdecl *)()
0x9E6AFE: call    _atexit
0x9E6B03: pop     ecx
0x9E6B04: retn
