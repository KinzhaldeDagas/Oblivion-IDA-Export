0x9EEAD0: fld     ds:flt_A31E2C
0x9EEAD6: push    ecx
0x9EEAD7: fstp    [esp+4+var_4]; float
0x9EEADA: push    offset aFmagicclouddur; "fMagicCloudDurationMin"
0x9EEADF: mov     ecx, offset flt_B37F20
0x9EEAE4: call    GameSetting_ConstrAndReg_float
0x9EEAE9: push    offset sub_A20560; void (__cdecl *)()
0x9EEAEE: call    _atexit
0x9EEAF3: pop     ecx
0x9EEAF4: retn
