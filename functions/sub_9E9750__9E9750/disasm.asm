0x9E9750: fldz
0x9E9752: push    ecx
0x9E9753: fstp    [esp+4+var_4]; float
0x9E9756: mov     ecx, offset fFatigueBlockBase
0x9E975B: push    offset aFfatigueblockb; "fFatigueBlockBase"
0x9E9760: call    GameSetting_ConstrAndReg_float
0x9E9765: push    offset sub_A1E700; void (__cdecl *)()
0x9E976A: call    _atexit
0x9E976F: pop     ecx
0x9E9770: retn
