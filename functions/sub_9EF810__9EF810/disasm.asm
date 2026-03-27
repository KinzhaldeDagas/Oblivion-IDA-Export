0x9EF810: fld1
0x9EF812: push    ecx
0x9EF813: fstp    [esp+4+var_4]; float
0x9EF816: mov     ecx, offset fShockCoreColorB
0x9EF81B: push    offset aFshockcoreco_1; "fShockCoreColorB"
0x9EF820: call    GameSetting_ConstrAndReg_float
0x9EF825: push    offset sub_A209F0; void (__cdecl *)()
0x9EF82A: call    _atexit
0x9EF82F: pop     ecx
0x9EF830: retn
