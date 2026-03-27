0x9E6430: fld     ds:flt_A41328
0x9E6436: push    ecx
0x9E6437: fstp    [esp+4+var_4]; float
0x9E643A: push    offset aFsneakskillmul; "fSneakSkillMult"
0x9E643F: mov     ecx, offset fSneakSkillMult
0x9E6444: call    GameSetting_ConstrAndReg_float
0x9E6449: push    offset sub_A1D540; void (__cdecl *)()
0x9E644E: call    _atexit
0x9E6453: pop     ecx
0x9E6454: retn
