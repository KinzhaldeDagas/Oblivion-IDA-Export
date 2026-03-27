0x9FA980: fld1
0x9FA982: push    ecx
0x9FA983: fstp    [esp+4+var_4]; float
0x9FA986: mov     ecx, offset flt_B3A4A8
0x9FA98B: push    offset aFpathavoidan_0; "fPathAvoidanceWaitTimeLimit"
0x9FA990: call    GameSetting_ConstrAndReg_float
0x9FA995: push    offset sub_A24180; void (__cdecl *)()
0x9FA99A: call    _atexit
0x9FA99F: pop     ecx
0x9FA9A0: retn
