0x9EFB80: fld     ds:flt_A37CFC
0x9EFB86: push    ecx
0x9EFB87: fstp    [esp+4+var_4]; float
0x9EFB8A: push    offset aFabsorbsegment; "fAbsorbSegmentVariance"
0x9EFB8F: mov     ecx, offset fAbsorbSegmentVariance
0x9EFB94: call    GameSetting_ConstrAndReg_float
0x9EFB99: push    offset sub_A20B30; void (__cdecl *)()
0x9EFB9E: call    _atexit
0x9EFBA3: pop     ecx
0x9EFBA4: retn
