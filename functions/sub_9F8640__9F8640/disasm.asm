0x9F8640: fld     ds:flt_A35AA4
0x9F8646: push    ecx
0x9F8647: fstp    [esp+4+var_4]; float
0x9F864A: push    offset aFblinkdelaymin; "fBlinkDelayMin"
0x9F864F: mov     ecx, offset unk_B39AE0
0x9F8654: call    GameSetting_ConstrAndReg_float
0x9F8659: push    offset sub_A231D0; void (__cdecl *)()
0x9F865E: call    _atexit
0x9F8663: pop     ecx
0x9F8664: retn
