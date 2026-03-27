0x9E6C90: fld     ds:dword_A46C30
0x9E6C96: push    ecx
0x9E6C97: fstp    [esp+4+var_4]; float
0x9E6C9A: push    offset aFfightabletode; "fFightAbleToDetectTimer"
0x9E6C9F: mov     ecx, offset fFightAbleToDetectTimer
0x9E6CA4: call    GameSetting_ConstrAndReg_float
0x9E6CA9: push    offset sub_A1D820; void (__cdecl *)()
0x9E6CAE: call    _atexit
0x9E6CB3: pop     ecx
0x9E6CB4: retn
