0x9EF5B0: fld1
0x9EF5B2: push    ecx
0x9EF5B3: fstp    [esp+4+var_4]; float
0x9EF5B6: mov     ecx, offset fMagicTrackingLimitComplex
0x9EF5BB: push    offset aFmagictracki_0; "fMagicTrackingLimitComplex"
0x9EF5C0: call    GameSetting_ConstrAndReg_float
0x9EF5C5: push    offset sub_A20920; void (__cdecl *)()
0x9EF5CA: call    _atexit
0x9EF5CF: pop     ecx
0x9EF5D0: retn
