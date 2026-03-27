0x9E9180: fld     ds:flt_A41328
0x9E9186: push    ecx
0x9E9187: fstp    [esp+4+var_4]; float
0x9E918A: push    offset aFblockmax; "fBlockMax"
0x9E918F: mov     ecx, offset fBlockMax
0x9E9194: call    GameSetting_ConstrAndReg_float
0x9E9199: push    offset sub_A1E510; void (__cdecl *)()
0x9E919E: call    _atexit
0x9E91A3: pop     ecx
0x9E91A4: retn
