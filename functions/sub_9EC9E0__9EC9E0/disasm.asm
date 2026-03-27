0x9EC9E0: fld     ds:flt_A2FE7C
0x9EC9E6: push    ecx
0x9EC9E7: fstp    [esp+4+var_4]; float
0x9EC9EA: push    offset aFpersuasiona_2; "fPersuasionAccuracyMaxSelect"
0x9EC9EF: mov     ecx, offset fPersuasionAccuracyMaxSelect
0x9EC9F4: call    GameSetting_ConstrAndReg_float
0x9EC9F9: push    offset sub_A1F980; void (__cdecl *)()
0x9EC9FE: call    _atexit
0x9ECA03: pop     ecx
0x9ECA04: retn
