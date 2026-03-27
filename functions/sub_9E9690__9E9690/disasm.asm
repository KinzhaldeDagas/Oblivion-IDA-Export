0x9E9690: fld1
0x9E9692: push    ecx
0x9E9693: fstp    [esp+4+var_4]; float
0x9E9696: mov     ecx, offset fKnockbackTime
0x9E969B: push    offset aFknockbacktime; "fKnockbackTime"
0x9E96A0: call    GameSetting_ConstrAndReg_float
0x9E96A5: push    offset sub_A1E6C0; void (__cdecl *)()
0x9E96AA: call    _atexit
0x9E96AF: pop     ecx
0x9E96B0: retn
