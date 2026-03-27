0x9E8B50: fld     ds:flt_A3D9A4
0x9E8B56: push    ecx
0x9E8B57: fstp    [esp+4+var_4]; float
0x9E8B5A: push    offset aFdamageskillba; "fDamageSkillBase"
0x9E8B5F: mov     ecx, offset fDamageSkillBase
0x9E8B64: call    GameSetting_ConstrAndReg_float
0x9E8B69: push    offset sub_A1E2E0; void (__cdecl *)()
0x9E8B6E: call    _atexit
0x9E8B73: pop     ecx
0x9E8B74: retn
