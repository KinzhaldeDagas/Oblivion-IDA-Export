0x9DA5B0: fld     ds:flt_A342A4
0x9DA5B6: push    ecx
0x9DA5B7: fstp    [esp+4+var_4]; float
0x9DA5BA: push    offset aFmagicspraymax; "fMagicSprayMaximumDistance"
0x9DA5BF: mov     ecx, offset fMagicSprayMaximumDistance
0x9DA5C4: call    GameSetting_ConstrAndReg_float
0x9DA5C9: push    offset sub_A17850; void (__cdecl *)()
0x9DA5CE: call    _atexit
0x9DA5D3: pop     ecx
0x9DA5D4: retn
