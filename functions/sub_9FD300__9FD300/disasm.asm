0x9FD300: fld     ds:flt_A34A80
0x9FD306: push    ecx
0x9FD307: fstp    [esp+4+var_4]; float
0x9FD30A: push    offset aFactorlookforc; "fActorLookForce"
0x9FD30F: mov     ecx, offset flt_B3B7C8
0x9FD314: call    GameSetting_ConstrAndReg_float
0x9FD319: push    offset sub_A254A0; void (__cdecl *)()
0x9FD31E: call    _atexit
0x9FD323: pop     ecx
0x9FD324: retn
