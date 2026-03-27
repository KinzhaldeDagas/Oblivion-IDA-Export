0x9E0C20: fld     ds:flt_A415E4
0x9E0C26: push    ecx
0x9E0C27: fstp    [esp+4+var_4]; float
0x9E0C2A: push    offset aFaidefaultbuff; "fAIDefaultBuffStandoffDistance"
0x9E0C2F: mov     ecx, offset fAIDefaultBuffStandoffDistance
0x9E0C34: call    GameSetting_ConstrAndReg_float
0x9E0C39: push    offset sub_A1AC30; void (__cdecl *)()
0x9E0C3E: call    _atexit
0x9E0C43: pop     ecx
0x9E0C44: retn
