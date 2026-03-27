0x9EBF00: fld     ds:flt_A56F84
0x9EBF06: push    ecx
0x9EBF07: fstp    [esp+4+var_4]; float
0x9EBF0A: push    offset aFtorchlightl_1; "fTorchLightLevelInterior"
0x9EBF0F: mov     ecx, offset fTorchLightLevelInterior
0x9EBF14: call    GameSetting_ConstrAndReg_float
0x9EBF19: push    offset sub_A1F5A0; void (__cdecl *)()
0x9EBF1E: call    _atexit
0x9EBF23: pop     ecx
0x9EBF24: retn
