0x9E9630: fld     ds:flt_A31C80
0x9E9636: push    ecx
0x9E9637: fstp    [esp+4+var_4]; float
0x9E963A: push    offset aFknockbackda_0; "fKnockbackDamageMult"
0x9E963F: mov     ecx, offset fKnockbackDamageMult
0x9E9644: call    GameSetting_ConstrAndReg_float
0x9E9649: push    offset sub_A1E6A0; void (__cdecl *)()
0x9E964E: call    _atexit
0x9E9653: pop     ecx
0x9E9654: retn
