0x9EF6A0: fld     ds:flt_A5982C
0x9EF6A6: push    ecx
0x9EF6A7: fstp    [esp+4+var_4]; float
0x9EF6AA: push    offset aFshockboltsrad; "fShockBoltsRadius"
0x9EF6AF: mov     ecx, offset fShockBoltsRadius
0x9EF6B4: call    GameSetting_ConstrAndReg_float
0x9EF6B9: push    offset sub_A20970; void (__cdecl *)()
0x9EF6BE: call    _atexit
0x9EF6C3: pop     ecx
0x9EF6C4: retn
