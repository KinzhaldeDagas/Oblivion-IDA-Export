0x9E89A0: fld     ds:flt_A2FAAC
0x9E89A6: push    ecx
0x9E89A7: fstp    [esp+4+var_4]; float
0x9E89AA: push    offset aFaidodgevertic; "fAIDodgeVerticalRangedAttackMult"
0x9E89AF: mov     ecx, offset flt_B36D98
0x9E89B4: call    GameSetting_ConstrAndReg_float
0x9E89B9: push    offset sub_A1E250; void (__cdecl *)()
0x9E89BE: call    _atexit
0x9E89C3: pop     ecx
0x9E89C4: retn
