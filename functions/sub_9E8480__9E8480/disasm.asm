0x9E8480: fld     ds:flt_A57414
0x9E8486: push    ecx
0x9E8487: fstp    [esp+4+var_4]; float
0x9E848A: push    offset aFdetectionacti; "fDetectionActionTimer"
0x9E848F: mov     ecx, offset flt_B36CB0
0x9E8494: call    GameSetting_ConstrAndReg_float
0x9E8499: push    offset sub_A1E080; void (__cdecl *)()
0x9E849E: call    _atexit
0x9E84A3: pop     ecx
0x9E84A4: retn
