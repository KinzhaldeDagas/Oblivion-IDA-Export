0x9E0B30: fld     ds:flt_A35AA4
0x9E0B36: push    ecx
0x9E0B37: fstp    [esp+4+var_4]; float
0x9E0B3A: push    offset aFaidefaultho_0; "fAIDefaultHoldMaxTime"
0x9E0B3F: mov     ecx, offset flt_B35658
0x9E0B44: call    GameSetting_ConstrAndReg_float
0x9E0B49: push    offset sub_A1ABE0; void (__cdecl *)()
0x9E0B4E: call    _atexit
0x9E0B53: pop     ecx
0x9E0B54: retn
