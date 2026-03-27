0x9FA650: fld     ds:flt_A67558
0x9FA656: push    ecx
0x9FA657: fstp    [esp+4+var_4]; float
0x9FA65A: push    offset aFpathwaterexit; "fPathWaterExitPenalty"
0x9FA65F: mov     ecx, offset flt_B3A420
0x9FA664: call    GameSetting_ConstrAndReg_float
0x9FA669: push    offset sub_A24070; void (__cdecl *)()
0x9FA66E: call    _atexit
0x9FA673: pop     ecx
0x9FA674: retn
