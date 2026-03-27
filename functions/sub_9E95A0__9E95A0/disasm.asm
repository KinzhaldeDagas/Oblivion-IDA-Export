0x9E95A0: fld1
0x9E95A2: push    ecx
0x9E95A3: fstp    [esp+4+var_4]; float
0x9E95A6: mov     ecx, offset fKnockbackAgilBase
0x9E95AB: push    offset aFknockbackagil; "fKnockbackAgilBase"
0x9E95B0: call    GameSetting_ConstrAndReg_float
0x9E95B5: push    offset sub_A1E670; void (__cdecl *)()
0x9E95BA: call    _atexit
0x9E95BF: pop     ecx
0x9E95C0: retn
