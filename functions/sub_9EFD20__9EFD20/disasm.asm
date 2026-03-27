0x9EFD20: fld     ds:flt_A3F424
0x9EFD26: push    ecx
0x9EFD27: fstp    [esp+4+var_4]; float
0x9EFD2A: push    offset aFabsorbglowc_0; "fAbsorbGlowColorG"
0x9EFD2F: mov     ecx, offset fAbsorbGlowColorG
0x9EFD34: call    GameSetting_ConstrAndReg_float
0x9EFD39: push    offset sub_A20BC0; void (__cdecl *)()
0x9EFD3E: call    _atexit
0x9EFD43: pop     ecx
0x9EFD44: retn
