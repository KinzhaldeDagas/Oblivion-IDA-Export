0x9E8190: fld     ds:flt_A56F84
0x9E8196: push    ecx
0x9E8197: fstp    [esp+4+var_4]; float
0x9E819A: push    offset aFsittingmaxloo; "fSittingMaxLookingDown"
0x9E819F: mov     ecx, offset flt_B36C28
0x9E81A4: call    GameSetting_ConstrAndReg_float
0x9E81A9: push    offset sub_A1DF70; void (__cdecl *)()
0x9E81AE: call    _atexit
0x9E81B3: pop     ecx
0x9E81B4: retn
