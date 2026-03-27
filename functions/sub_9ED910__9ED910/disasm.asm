0x9ED910: fld     ds:flt_A41304
0x9ED916: push    ecx
0x9ED917: fstp    [esp+4+var_4]; float
0x9ED91A: push    offset aFlowlevelnpcba; "fLowLevelNPCBaseHealthMult"
0x9ED91F: mov     ecx, offset flt_B37BD0
0x9ED924: call    GameSetting_ConstrAndReg_float
0x9ED929: push    offset sub_A1FEC0; void (__cdecl *)()
0x9ED92E: call    _atexit
0x9ED933: pop     ecx
0x9ED934: retn
