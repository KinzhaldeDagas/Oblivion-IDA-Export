0x9EABC0: fld     ds:flt_A56F04
0x9EABC6: push    ecx
0x9EABC7: fstp    [esp+4+var_4]; float
0x9EABCA: push    offset aFvalueofitemfo; "fValueofItemForNoOwnership"
0x9EABCF: mov     ecx, offset flt_B373C8
0x9EABD4: call    GameSetting_ConstrAndReg_float
0x9EABD9: push    offset sub_A1EEB0; void (__cdecl *)()
0x9EABDE: call    _atexit
0x9EABE3: pop     ecx
0x9EABE4: retn
