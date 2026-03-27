0x9E5DC0: fld     ds:flt_A3744C
0x9E5DC6: push    ecx
0x9E5DC7: fstp    [esp+4+var_4]; float
0x9E5DCA: push    offset aFsecundaspeed; "fSecundaSpeed"
0x9E5DCF: mov     ecx, offset flt_B36610
0x9E5DD4: call    GameSetting_ConstrAndReg_float
0x9E5DD9: push    offset sub_A1D2F0; void (__cdecl *)()
0x9E5DDE: call    _atexit
0x9E5DE3: pop     ecx
0x9E5DE4: retn
