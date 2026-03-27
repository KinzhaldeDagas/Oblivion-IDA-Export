0x9E5D60: fld     ds:flt_A56F84
0x9E5D66: push    ecx
0x9E5D67: fstp    [esp+4+var_4]; float
0x9E5D6A: push    offset aFsecundaangl_0; "fSecundaAngleFadeEnd"
0x9E5D6F: mov     ecx, offset fSecundaAngleFadeEnd
0x9E5D74: call    GameSetting_ConstrAndReg_float
0x9E5D79: push    offset sub_A1D2D0; void (__cdecl *)()
0x9E5D7E: call    _atexit
0x9E5D83: pop     ecx
0x9E5D84: retn
