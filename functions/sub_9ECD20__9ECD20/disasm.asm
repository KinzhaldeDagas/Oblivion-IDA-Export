0x9ECD20: fld     ds:flt_A3D65C
0x9ECD26: push    ecx
0x9ECD27: fstp    [esp+4+var_4]; float
0x9ECD2A: push    offset aFrepairbreakap; "fRepairBreakApprenticeMult"
0x9ECD2F: mov     ecx, offset fRepairBreakApprenticeMult
0x9ECD34: call    GameSetting_ConstrAndReg_float
0x9ECD39: push    offset sub_A1FAB0; void (__cdecl *)()
0x9ECD3E: call    _atexit
0x9ECD43: pop     ecx
0x9ECD44: retn
