0x9E70D0: fld     ds:flt_A31E2C
0x9E70D6: push    ecx
0x9E70D7: fstp    [esp+4+var_4]; float
0x9E70DA: push    offset aFidlechatterco; "fIdleChatterCommentTimer"
0x9E70DF: mov     ecx, offset flt_B36940
0x9E70E4: call    GameSetting_ConstrAndReg_float
0x9E70E9: push    offset sub_A1D9A0; void (__cdecl *)()
0x9E70EE: call    _atexit
0x9E70F3: pop     ecx
0x9E70F4: retn
