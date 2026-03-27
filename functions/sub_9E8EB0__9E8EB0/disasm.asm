0x9E8EB0: fld1
0x9E8EB2: push    ecx
0x9E8EB3: fstp    [esp+4+var_4]; float
0x9E8EB6: mov     ecx, offset fHandHealthMin
0x9E8EBB: push    offset aFhandhealthmin; "fHandHealthMin"
0x9E8EC0: call    GameSetting_ConstrAndReg_float
0x9E8EC5: push    offset sub_A1E400; void (__cdecl *)()
0x9E8ECA: call    _atexit
0x9E8ECF: pop     ecx
0x9E8ED0: retn
