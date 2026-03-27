0x9DB420: fld     ds:flt_A379CC
0x9DB426: push    ecx
0x9DB427: fstp    [esp+4+var_4]; float
0x9DB42A: push    offset aFdebrismaxvelo; "fDebrisMaxVelocity"
0x9DB42F: mov     ecx, offset flt_B33A40
0x9DB434: call    GameSetting_ConstrAndReg_float
0x9DB439: push    offset sub_A17F70; void (__cdecl *)()
0x9DB43E: call    _atexit
0x9DB443: pop     ecx
0x9DB444: retn
