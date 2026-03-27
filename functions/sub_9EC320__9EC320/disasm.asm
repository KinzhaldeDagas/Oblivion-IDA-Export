0x9EC320: fld     ds:fConstant_2
0x9EC326: push    ecx
0x9EC327: fstp    [esp+4+var_4]; float
0x9EC32A: push    offset aFpersbullystre; "fPersBullyStre"
0x9EC32F: mov     ecx, offset fPersBullyStre
0x9EC334: call    GameSetting_ConstrAndReg_float
0x9EC339: push    offset sub_A1F700; void (__cdecl *)()
0x9EC33E: call    _atexit
0x9EC343: pop     ecx
0x9EC344: retn
