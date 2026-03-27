0x9EFAA0: fldz
0x9EFAA2: push    ecx
0x9EFAA3: fstp    [esp+4+var_4]; float
0x9EFAA6: mov     ecx, offset fSubSegmentVariance
0x9EFAAB: push    offset aFsubsegmentvar; "fSubSegmentVariance"
0x9EFAB0: call    GameSetting_ConstrAndReg_float
0x9EFAB5: push    offset sub_A20AE0; void (__cdecl *)()
0x9EFABA: call    _atexit
0x9EFABF: pop     ecx
0x9EFAC0: retn
