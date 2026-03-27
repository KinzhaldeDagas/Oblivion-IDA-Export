0x9EAF80: fld     ds:flt_A417B4
0x9EAF86: push    ecx
0x9EAF87: fstp    [esp+4+var_4]; float
0x9EAF8A: push    offset aFjumpfalltimem; "fJumpFallTimeMult"
0x9EAF8F: mov     ecx, offset flt_B37468
0x9EAF94: call    GameSetting_ConstrAndReg_float
0x9EAF99: push    offset sub_A1EFF0; void (__cdecl *)()
0x9EAF9E: call    _atexit
0x9EAFA3: pop     ecx
0x9EAFA4: retn
