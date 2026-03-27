0x9EF8F0: fld     ds:flt_A427E4
0x9EF8F6: push    ecx
0x9EF8F7: fstp    [esp+4+var_4]; float
0x9EF8FA: push    offset aFshocksegmentl; "fShockSegmentLength"
0x9EF8FF: mov     ecx, offset fShockSegmentLength
0x9EF904: call    GameSetting_ConstrAndReg_float
0x9EF909: push    offset sub_A20A40; void (__cdecl *)()
0x9EF90E: call    _atexit
0x9EF913: pop     ecx
0x9EF914: retn
