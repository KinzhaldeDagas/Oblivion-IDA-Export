0x9E71F0: fldz
0x9E71F2: push    ecx
0x9E71F3: fstp    [esp+4+var_4]; float
0x9E71F6: mov     ecx, offset flt_B36970
0x9E71FB: push    offset aFpickpocketamo; "fPickPocketAmountBase"
0x9E7200: call    GameSetting_ConstrAndReg_float
0x9E7205: push    offset sub_A1DA00; void (__cdecl *)()
0x9E720A: call    _atexit
0x9E720F: pop     ecx
0x9E7210: retn
