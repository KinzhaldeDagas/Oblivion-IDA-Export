0x9E8B80: fld     ds:flt_A2FB0C
0x9E8B86: push    ecx
0x9E8B87: fstp    [esp+4+var_4]; float
0x9E8B8A: push    offset aFdamageskillmu; "fDamageSkillMult"
0x9E8B8F: mov     ecx, offset fDamageSkillMult
0x9E8B94: call    GameSetting_ConstrAndReg_float
0x9E8B99: push    offset sub_A1E2F0; void (__cdecl *)()
0x9E8B9E: call    _atexit
0x9E8BA3: pop     ecx
0x9E8BA4: retn
