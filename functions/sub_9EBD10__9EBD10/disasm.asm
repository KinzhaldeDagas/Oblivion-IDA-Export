0x9EBD10: fld     ds:fConstant_2
0x9EBD16: push    ecx
0x9EBD17: fstp    [esp+4+var_4]; float
0x9EBD1A: push    offset aFcrimedisppers; "fCrimeDispPersonal"
0x9EBD1F: mov     ecx, offset unk_B376E8
0x9EBD24: call    GameSetting_ConstrAndReg_float
0x9EBD29: push    offset sub_A1F4F0; void (__cdecl *)()
0x9EBD2E: call    _atexit
0x9EBD33: pop     ecx
0x9EBD34: retn
