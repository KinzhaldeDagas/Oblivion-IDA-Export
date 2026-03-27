0x9EE5F0: fld     ds:flt_A5B920
0x9EE5F6: push    ecx
0x9EE5F7: fstp    [esp+4+var_4]; float
0x9EE5FA: push    offset aFmagicresist_0; "fMagicResistActorSkillMult"
0x9EE5FF: mov     ecx, offset unk_B37E50
0x9EE604: call    GameSetting_ConstrAndReg_float
0x9EE609: push    offset sub_A203C0; void (__cdecl *)()
0x9EE60E: call    _atexit
0x9EE613: pop     ecx
0x9EE614: retn
