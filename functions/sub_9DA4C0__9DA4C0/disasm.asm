0x9DA4C0: fld     ds:flt_A342A4
0x9DA4C6: push    ecx
0x9DA4C7: fstp    [esp+4+var_4]; float
0x9DA4CA: push    offset aFmagicballopti; "fMagicBallOptimalDistance"
0x9DA4CF: mov     ecx, offset fMagicBallOptimalDistance
0x9DA4D4: call    GameSetting_ConstrAndReg_float
0x9DA4D9: push    offset sub_A17800; void (__cdecl *)()
0x9DA4DE: call    _atexit
0x9DA4E3: pop     ecx
0x9DA4E4: retn
