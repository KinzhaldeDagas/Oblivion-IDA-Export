0x9F7FB0: fld     ds:flt_A3D65C
0x9F7FB6: push    ecx
0x9F7FB7: fstp    [esp+4+var_4]; float
0x9F7FBA: push    offset aFdefaultnotice; "fDefaultNoticeTextDisplayTime"
0x9F7FBF: mov     ecx, offset flt_B394F0
0x9F7FC4: call    GameSetting_ConstrAndReg_float
0x9F7FC9: push    offset sub_A23100; void (__cdecl *)()
0x9F7FCE: call    _atexit
0x9F7FD3: pop     ecx
0x9F7FD4: retn
