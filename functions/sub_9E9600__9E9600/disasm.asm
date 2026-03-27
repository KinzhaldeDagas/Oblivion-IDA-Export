0x9E9600: fld     ds:flt_A3D8F0
0x9E9606: push    ecx
0x9E9607: fstp    [esp+4+var_4]; float
0x9E960A: push    offset aFknockbackdama; "fKnockbackDamageBase"
0x9E960F: mov     ecx, offset fKnockbackDamageBase
0x9E9614: call    GameSetting_ConstrAndReg_float
0x9E9619: push    offset sub_A1E690; void (__cdecl *)()
0x9E961E: call    _atexit
0x9E9623: pop     ecx
0x9E9624: retn
