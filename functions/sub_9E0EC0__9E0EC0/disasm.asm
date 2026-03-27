0x9E0EC0: fld     ds:flt_A417B4
0x9E0EC6: push    ecx
0x9E0EC7: fstp    [esp+4+var_4]; float
0x9E0ECA: push    offset aFaidefaultbl_0; "fAIDefaultBlockSkillMult"
0x9E0ECF: mov     ecx, offset flt_B356F0
0x9E0ED4: call    GameSetting_ConstrAndReg_float
0x9E0ED9: push    offset sub_A1AD10; void (__cdecl *)()
0x9E0EDE: call    _atexit
0x9E0EE3: pop     ecx
0x9E0EE4: retn
