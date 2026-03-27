0x9EC9B0: fldz
0x9EC9B2: push    ecx
0x9EC9B3: fstp    [esp+4+var_4]; float
0x9EC9B6: mov     ecx, offset fPersuasionAccuracyMinSelect
0x9EC9BB: push    offset aFpersuasiona_1; "fPersuasionAccuracyMinSelect"
0x9EC9C0: call    GameSetting_ConstrAndReg_float
0x9EC9C5: push    offset sub_A1F970; void (__cdecl *)()
0x9EC9CA: call    _atexit
0x9EC9CF: pop     ecx
0x9EC9D0: retn
