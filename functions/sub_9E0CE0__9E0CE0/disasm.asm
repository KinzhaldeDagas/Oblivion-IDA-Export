0x9E0CE0: fld     ds:flt_A41664
0x9E0CE6: push    ecx
0x9E0CE7: fstp    [esp+4+var_4]; float
0x9E0CEA: push    offset aFaidefaultdo_6; "fAIDefaultDodgeFatigueMult"
0x9E0CEF: mov     ecx, offset fAIDefaultDodgeFatigueMult
0x9E0CF4: call    GameSetting_ConstrAndReg_float
0x9E0CF9: push    offset sub_A1AC70; void (__cdecl *)()
0x9E0CFE: call    _atexit
0x9E0D03: pop     ecx
0x9E0D04: retn
