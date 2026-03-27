0x9E0FE0: fld     ds:flt_A3D65C
0x9E0FE6: push    ecx
0x9E0FE7: fstp    [esp+4+var_4]; float
0x9E0FEA: push    offset aFaidefaultat_5; "fAIDefaultAttackDuringBlockMult"
0x9E0FEF: mov     ecx, offset fAIDefaultAttackDuringBlockMult
0x9E0FF4: call    GameSetting_ConstrAndReg_float
0x9E0FF9: push    offset sub_A1AD70; void (__cdecl *)()
0x9E0FFE: call    _atexit
0x9E1003: pop     ecx
0x9E1004: retn
