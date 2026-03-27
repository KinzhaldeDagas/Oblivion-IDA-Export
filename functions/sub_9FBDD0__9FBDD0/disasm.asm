0x9FBDD0: fld     ds:flt_A2FE7C
0x9FBDD6: push    ecx
0x9FBDD7: fstp    [esp+4+var_4]; float
0x9FBDDA: push    offset aFmaxcreatedmag; "fMaxCreatedMag"
0x9FBDDF: mov     ecx, offset unk_B3B2B4
0x9FBDE4: call    GameSetting_ConstrAndReg_float
0x9FBDE9: push    offset sub_A24AE0; void (__cdecl *)()
0x9FBDEE: call    _atexit
0x9FBDF3: pop     ecx
0x9FBDF4: retn
