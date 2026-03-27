0x9EC920: fld     ds:flt_A31E2C
0x9EC926: push    ecx
0x9EC927: fstp    [esp+4+var_4]; float
0x9EC92A: push    offset aFpersuasionb_1; "fPersuasionBaseValueMaxDisposition"
0x9EC92F: mov     ecx, offset fPersuasionBaseValueMaxDisposition
0x9EC934: call    GameSetting_ConstrAndReg_float
0x9EC939: push    offset sub_A1F940; void (__cdecl *)()
0x9EC93E: call    _atexit
0x9EC943: pop     ecx
0x9EC944: retn
