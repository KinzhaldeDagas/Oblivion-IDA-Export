0x9EED10: fld1
0x9EED12: push    ecx
0x9EED13: fstp    [esp+4+var_4]; float
0x9EED16: mov     ecx, offset fWortalchmult
0x9EED1B: push    offset aFwortalchmult; "fWortalchmult"
0x9EED20: call    GameSetting_ConstrAndReg_float
0x9EED25: push    offset sub_A20620; void (__cdecl *)()
0x9EED2A: call    _atexit
0x9EED2F: pop     ecx
0x9EED30: retn
