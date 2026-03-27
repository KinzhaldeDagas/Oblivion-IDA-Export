0x9EADA0: fld     ds:flt_A2FE7C
0x9EADA6: push    ecx
0x9EADA7: fstp    [esp+4+var_4]; float
0x9EADAA: push    offset aFmoveweightmax; "fMoveWeightMax"
0x9EADAF: mov     ecx, offset fMoveWeightMax
0x9EADB4: call    GameSetting_ConstrAndReg_float
0x9EADB9: push    offset sub_A1EF50; void (__cdecl *)()
0x9EADBE: call    _atexit
0x9EADC3: pop     ecx
0x9EADC4: retn
