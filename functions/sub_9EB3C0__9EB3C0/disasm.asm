0x9EB3C0: fld     ds:flt_A5A04C
0x9EB3C6: push    ecx
0x9EB3C7: fstp    [esp+4+var_4]; float
0x9EB3CA: push    offset aFmindistanceus; "fMinDistanceUseHorse"
0x9EB3CF: mov     ecx, offset flt_B37528
0x9EB3D4: call    GameSetting_ConstrAndReg_float
0x9EB3D9: push    offset sub_A1F170; void (__cdecl *)()
0x9EB3DE: call    _atexit
0x9EB3E3: pop     ecx
0x9EB3E4: retn
