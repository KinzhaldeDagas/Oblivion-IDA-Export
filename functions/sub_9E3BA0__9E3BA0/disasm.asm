0x9E3BA0: fld     ds:fConstant_2
0x9E3BA6: push    ecx
0x9E3BA7: fstp    [esp+4+var_4]; float
0x9E3BAA: push    offset aFcreaturecalcs; "fCreatureCalcStealth"
0x9E3BAF: mov     ecx, offset fCreatureCalcStealth
0x9E3BB4: call    GameSetting_ConstrAndReg_float
0x9E3BB9: push    offset sub_A1C180; void (__cdecl *)()
0x9E3BBE: call    _atexit
0x9E3BC3: pop     ecx
0x9E3BC4: retn
