0x9F0E50: fld     ds:flt_A3D65C
0x9F0E56: push    ecx
0x9F0E57: fstp    [esp+4+var_4]; float
0x9F0E5A: push    offset aFinventorydrop; "fInventoryDropTimer"
0x9F0E5F: mov     ecx, offset unk_B38680
0x9F0E64: call    GameSetting_ConstrAndReg_float
0x9F0E69: push    offset sub_A21420; void (__cdecl *)()
0x9F0E6E: call    _atexit
0x9F0E73: pop     ecx
0x9F0E74: retn
