0x9E7050: fld     ds:flt_A417B4
0x9E7056: push    ecx
0x9E7057: fstp    [esp+4+var_4]; float
0x9E705A: push    offset aFdetectioncomm; "fDetectionCommentTimer"
0x9E705F: mov     ecx, offset unk_B36928
0x9E7064: call    GameSetting_ConstrAndReg_float
0x9E7069: push    offset sub_A1D970; void (__cdecl *)()
0x9E706E: call    _atexit
0x9E7073: pop     ecx
0x9E7074: retn
