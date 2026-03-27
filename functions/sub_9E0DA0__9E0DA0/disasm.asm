0x9E0DA0: fld     ds:flt_A41328
0x9E0DA6: push    ecx
0x9E0DA7: fstp    [esp+4+var_4]; float
0x9E0DAA: push    offset aFaidefaultd_10; "fAIDefaultDodgeNoAttackMult"
0x9E0DAF: mov     ecx, offset fAIDefaultDodgeNoAttackMult
0x9E0DB4: call    GameSetting_ConstrAndReg_float
0x9E0DB9: push    offset sub_A1ACB0; void (__cdecl *)()
0x9E0DBE: call    _atexit
0x9E0DC3: pop     ecx
0x9E0DC4: retn
