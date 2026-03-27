0x9ECC60: fld     ds:flt_A2FAAC
0x9ECC66: push    ecx
0x9ECC67: fstp    [esp+4+var_4]; float
0x9ECC6A: push    offset aFrepairstrengt; "fRepairStrengthMult"
0x9ECC6F: mov     ecx, offset fRepairStrengthMult
0x9ECC74: call    GameSetting_ConstrAndReg_float
0x9ECC79: push    offset sub_A1FA70; void (__cdecl *)()
0x9ECC7E: call    _atexit
0x9ECC83: pop     ecx
0x9ECC84: retn
