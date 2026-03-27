0x9EC980: fld1
0x9EC982: push    ecx
0x9EC983: fstp    [esp+4+var_4]; float
0x9EC986: mov     ecx, offset fPersuasionAccuracyMaxDisposition
0x9EC98B: push    offset aFpersuasiona_0; "fPersuasionAccuracyMaxDisposition"
0x9EC990: call    GameSetting_ConstrAndReg_float
0x9EC995: push    offset sub_A1F960; void (__cdecl *)()
0x9EC99A: call    _atexit
0x9EC99F: pop     ecx
0x9EC9A0: retn
