0x9EDEC0: fld     ds:flt_A31C80
0x9EDEC6: push    ecx
0x9EDEC7: fstp    [esp+4+var_4]; float
0x9EDECA: push    offset aFessentialdeat; "fEssentialDeathTime"
0x9EDECF: mov     ecx, offset fEssentialDeathTime
0x9EDED4: call    GameSetting_ConstrAndReg_float
0x9EDED9: push    offset sub_A20130; void (__cdecl *)()
0x9EDEDE: call    _atexit
0x9EDEE3: pop     ecx
0x9EDEE4: retn
