0x9EBAA0: fld     ds:flt_A41328
0x9EBAA6: push    ecx
0x9EBAA7: fstp    [esp+4+var_4]; float
0x9EBAAA: push    offset aFskillusespecm; "fSkillUseSpecMult"
0x9EBAAF: mov     ecx, offset fSkillUseSpecMult
0x9EBAB4: call    GameSetting_ConstrAndReg_float
0x9EBAB9: push    offset sub_A1F400; void (__cdecl *)()
0x9EBABE: call    _atexit
0x9EBAC3: pop     ecx
0x9EBAC4: retn
