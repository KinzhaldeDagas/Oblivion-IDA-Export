0x9EFAD0: fld1
0x9EFAD2: push    ecx
0x9EFAD3: fstp    [esp+4+var_4]; float
0x9EFAD6: mov     ecx, offset fShockBranchLifetime
0x9EFADB: push    offset aFshockbranchli; "fShockBranchLifetime"
0x9EFAE0: call    GameSetting_ConstrAndReg_float
0x9EFAE5: push    offset sub_A20AF0; void (__cdecl *)()
0x9EFAEA: call    _atexit
0x9EFAEF: pop     ecx
0x9EFAF0: retn
