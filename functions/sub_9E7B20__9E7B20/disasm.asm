0x9E7B20: fld     ds:flt_A342A4
0x9E7B26: push    ecx
0x9E7B27: fstp    [esp+4+var_4]; float
0x9E7B2A: push    offset aFaiexteriorspe; "fAIExteriorSpectatorDetection"
0x9E7B2F: mov     ecx, offset flt_B36B08
0x9E7B34: call    GameSetting_ConstrAndReg_float
0x9E7B39: push    offset sub_A1DD30; void (__cdecl *)()
0x9E7B3E: call    _atexit
0x9E7B43: pop     ecx
0x9E7B44: retn
