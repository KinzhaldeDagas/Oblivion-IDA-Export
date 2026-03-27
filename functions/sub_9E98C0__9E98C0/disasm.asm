0x9E98C0: fld     ds:flt_A34ABC
0x9E98C6: push    ecx
0x9E98C7: fstp    [esp+4+var_4]; float
0x9E98CA: push    offset aFfleedistancei; "fFleeDistanceInterior"
0x9E98CF: mov     ecx, offset flt_B37030
0x9E98D4: call    GameSetting_ConstrAndReg_float
0x9E98D9: push    offset sub_A1E780; void (__cdecl *)()
0x9E98DE: call    _atexit
0x9E98E3: pop     ecx
0x9E98E4: retn
