0x9EAB60: fld     ds:flt_A3D65C
0x9EAB66: push    ecx
0x9EAB67: fstp    [esp+4+var_4]; float
0x9EAB6A: push    offset aFactorarmordes; "fActorArmorDesirabilityDamageMult"
0x9EAB6F: mov     ecx, offset unk_B373B8
0x9EAB74: call    GameSetting_ConstrAndReg_float
0x9EAB79: push    offset sub_A1EE90; void (__cdecl *)()
0x9EAB7E: call    _atexit
0x9EAB83: pop     ecx
0x9EAB84: retn
