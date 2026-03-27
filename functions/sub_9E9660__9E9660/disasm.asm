0x9E9660: fld     ds:flt_A427E0
0x9E9666: push    ecx
0x9E9667: fstp    [esp+4+var_4]; float
0x9E966A: push    offset aFknockbackforc; "fKnockbackForceMax"
0x9E966F: mov     ecx, offset fKnockbackForceMax
0x9E9674: call    GameSetting_ConstrAndReg_float
0x9E9679: push    offset sub_A1E6B0; void (__cdecl *)()
0x9E967E: call    _atexit
0x9E9683: pop     ecx
0x9E9684: retn
