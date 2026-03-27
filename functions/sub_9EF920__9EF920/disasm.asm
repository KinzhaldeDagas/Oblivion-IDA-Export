0x9EF920: fld     ds:flt_A417B4
0x9EF926: push    ecx
0x9EF927: fstp    [esp+4+var_4]; float
0x9EF92A: push    offset aFshocksegmentv; "fShockSegmentVariance"
0x9EF92F: mov     ecx, offset fShockSegmentVariance
0x9EF934: call    GameSetting_ConstrAndReg_float
0x9EF939: push    offset sub_A20A50; void (__cdecl *)()
0x9EF93E: call    _atexit
0x9EF943: pop     ecx
0x9EF944: retn
