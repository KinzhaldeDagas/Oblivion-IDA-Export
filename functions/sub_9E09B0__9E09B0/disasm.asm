0x9E09B0: fld     ds:flt_A31E2C
0x9E09B6: push    ecx
0x9E09B7: fstp    [esp+4+var_4]; float
0x9E09BA: push    offset aFaidefaultat_1; "fAIDefaultAttackHandBonus"
0x9E09BF: mov     ecx, offset flt_B35608
0x9E09C4: call    GameSetting_ConstrAndReg_float
0x9E09C9: push    offset sub_A1AB40; void (__cdecl *)()
0x9E09CE: call    _atexit
0x9E09D3: pop     ecx
0x9E09D4: retn
