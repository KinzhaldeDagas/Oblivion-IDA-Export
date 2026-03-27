0x9F8670: fld     ds:flt_A46B10
0x9F8676: push    ecx
0x9F8677: fstp    [esp+4+var_4]; float
0x9F867A: push    offset aFblinkdelaymax; "fBlinkDelayMax"
0x9F867F: mov     ecx, offset unk_B39AE8
0x9F8684: call    GameSetting_ConstrAndReg_float
0x9F8689: push    offset sub_A231E0; void (__cdecl *)()
0x9F868E: call    _atexit
0x9F8693: pop     ecx
0x9F8694: retn
