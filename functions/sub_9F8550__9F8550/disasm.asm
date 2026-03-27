0x9F8550: fld     ds:fConstant_2
0x9F8556: push    ecx
0x9F8557: fstp    [esp+4+var_4]; float
0x9F855A: push    offset aFexpressioncha; "fExpressionChangePerSec"
0x9F855F: mov     ecx, offset fExpressionChangePerSec
0x9F8564: call    GameSetting_ConstrAndReg_float
0x9F8569: push    offset sub_A23180; void (__cdecl *)()
0x9F856E: call    _atexit
0x9F8573: pop     ecx
0x9F8574: retn
