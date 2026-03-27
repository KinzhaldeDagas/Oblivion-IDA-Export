0x9EEFE0: fld1
0x9EEFE2: push    ecx
0x9EEFE3: fstp    [esp+4+var_4]; float
0x9EEFE6: mov     ecx, offset fItemPointsMult
0x9EEFEB: push    offset aFitempointsmul; "fItemPointsMult"
0x9EEFF0: call    GameSetting_ConstrAndReg_float
0x9EEFF5: push    offset sub_A20710; void (__cdecl *)()
0x9EEFFA: call    _atexit
0x9EEFFF: pop     ecx
0x9EF000: retn
