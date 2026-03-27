0x9EF970: fldz
0x9EF972: push    ecx
0x9EF973: fstp    [esp+4+var_4]; float
0x9EF976: mov     ecx, offset fShockSubSegmentVariance
0x9EF97B: push    offset aFshocksubsegme; "fShockSubSegmentVariance"
0x9EF980: call    GameSetting_ConstrAndReg_float
0x9EF985: push    offset sub_A20A70; void (__cdecl *)()
0x9EF98A: call    _atexit
0x9EF98F: pop     ecx
0x9EF990: retn
