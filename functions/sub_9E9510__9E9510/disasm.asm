0x9E9510: fldz
0x9E9512: push    ecx
0x9E9513: fstp    [esp+4+var_4]; float
0x9E9516: mov     ecx, offset flt_B36F90
0x9E951B: push    offset aFknockdowndama; "fKnockdownDamageBase"
0x9E9520: call    GameSetting_ConstrAndReg_float
0x9E9525: push    offset sub_A1E640; void (__cdecl *)()
0x9E952A: call    _atexit
0x9E952F: pop     ecx
0x9E9530: retn
