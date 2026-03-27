0x9EBAD0: fld     ds:flt_A41328
0x9EBAD6: push    ecx
0x9EBAD7: fstp    [esp+4+var_4]; float
0x9EBADA: push    offset aFskillusemajor; "fSkillUseMajorMult"
0x9EBADF: mov     ecx, offset fSkillUseMajorMult
0x9EBAE4: call    GameSetting_ConstrAndReg_float
0x9EBAE9: push    offset sub_A1F410; void (__cdecl *)()
0x9EBAEE: call    _atexit
0x9EBAF3: pop     ecx
0x9EBAF4: retn
